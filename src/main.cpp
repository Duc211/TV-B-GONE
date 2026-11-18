#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>
#include "webui.h"
#include <esp_system.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <LittleFS.h>
#include <Update.h>
#include <ctype.h>
#include <new>
#include <stdarg.h>
#include <stdio.h>
#include "global.h"
#include "config_store.h"
#include "settings.h"
#include "language_catalog.h"
#include "driver/gpio.h" 
#include "esp_ota_ops.h"
#include "esp_partition.h"

extern "C" __attribute__((noinline)) bool verifyRollbackLater(void)
{
  return true;
}

namespace IrCodesNaOnly {
#include "NA_ONLY-137.h"
}

namespace IrCodesEuOnly {
#include "EU_ONLY-139.h"
}

namespace IrCodesNaEu {
#include "NA_EU-236.h"
}

namespace IrCodesCustom {
#include "CUSTOM_CODES-1245.h"
}

namespace IrCodesCustom675 {
#include "CUSTOM_CODES-675.h"
}

namespace IrCodesAcPower {
#include "AC_POWER-209.h"
}

struct IrCodeListView {
  const IrCode *const *naCodes;
  uint16_t naCodeCount;
  const IrCode *const *euCodes;
  uint16_t euCodeCount;
  const IrCodesCustom::ExtraIrCode *extraCodes;
  uint16_t extraCodeCount;
  bool customShuffle;
  const char *const *labels;
};

static const IrCodeListView ALL_IR_CODE_LISTS[] = {
    {IrCodesNaEu::NApowerCodes, IrCodesNaEu::num_NAcodes,
     IrCodesNaEu::EUpowerCodes, IrCodesNaEu::num_EUcodes,
     nullptr, 0, false, nullptr},
    {IrCodesNaOnly::NApowerCodes, IrCodesNaOnly::num_NAcodes,
     nullptr, 0, nullptr, 0, false, nullptr},
    {nullptr, 0, IrCodesEuOnly::EUpowerCodes, IrCodesEuOnly::num_EUcodes,
     nullptr, 0, false, nullptr},
    {IrCodesCustom::NApowerCodes, IrCodesCustom::num_NAcodes,
     nullptr, 0, IrCodesCustom::extraIrCodes,
     IrCodesCustom::numExtraIrCodes, true, nullptr},
    {IrCodesCustom675::NApowerCodes, IrCodesCustom675::num_NAcodes,
     IrCodesCustom675::EUpowerCodes, IrCodesCustom675::num_EUcodes,
     nullptr, 0, false, nullptr},
    {IrCodesAcPower::ACpowerCodes, IrCodesAcPower::num_ACcodes,
     nullptr, 0, nullptr, 0, false, IrCodesAcPower::ACpowerLabels},
};

uint8_t read_bits(uint8_t count);
uint32_t rawData[2400];

static constexpr size_t COMMAND_BUFFER_SIZE = 128;
static constexpr size_t MAX_CONFIG_UPLOAD_SIZE = 8192;
static constexpr size_t MAX_OTA_LOG_SIZE = 2048;
static constexpr char CONFIG_UPLOAD_PATH[] = "/config.upload";
static constexpr char OTA_PENDING_PATH[] = "/ota.pending";
static constexpr char LEGACY_OTA_LOG_PATH[] = "/ota.log";
static constexpr char LEGACY_OTA_STATE_PATH[] = "/ota.state";

WebServer webServer(80);
bool webUiStarted = false;
AppConfigStore::Settings deviceSettings = AppConfigStore::defaults();
AppConfigStore::Settings stagedDeviceSettings = AppConfigStore::defaults();
bool stagedSettingsChanged = false;

struct CommandParser {
  char buffer[COMMAND_BUFFER_SIZE] = {};
  size_t length = 0;
  bool overflow = false;
};

CommandParser uartCommandParser;
bool startRequested = false;
bool stopRequested = false;
uint16_t nextCodeIndex = 0;
const IrCode *const *activeNaCodes = nullptr;
const IrCode *const *activeEuCodes = nullptr;
uint16_t activeNaCodeCount = 0;
uint16_t activeEuCodeCount = 0;
const char *const *activeCodeLabels = nullptr;
const IrCodesCustom::ExtraIrCode *activeExtraIrCodes = nullptr;
uint16_t activeExtraIrCodeCount = 0;
bool activeCodeListIsCustom = false;
bool activeCodeListIsAll = false;
bool pendingRestart = false;
uint32_t pendingRestartAt = 0;
uint32_t firmwareValidationStartedAt = 0;
bool firmwareValidationChecked = false;
bool otaUploadStarted = false;
bool otaUploadComplete = false;
bool otaUploadFailed = false;
bool otaUpdateBegun = false;
int otaUploadHttpStatus = 400;
String otaUploadError;
String otaStatus = "idle";
String otaStatusMessage = "No OTA update has been performed.";
String otaLog;
String otaUploadFilename;
uint32_t otaTargetAddress = 0;
uint32_t otaMaximumSize = 0;
File configUploadFile;
bool configUploadStarted = false;
bool configUploadComplete = false;
bool configUploadFailed = false;
int configUploadHttpStatus = 400;
String configUploadError;
alignas(IRsend) uint8_t irsendStorage[sizeof(IRsend)];
IRsend *irsend = nullptr;

void pollControlInputs();
void handleWebUI();
bool selectCodeList(const String &name);

String singleLine(String value)
{
  value.replace('\r', ' ');
  value.replace('\n', ' ');
  return value;
}

bool writeOtaPendingMarker(uint32_t targetAddress)
{
  File marker = LittleFS.open(OTA_PENDING_PATH, "w");
  if (!marker) {
    return false;
  }
  const String contents = String(targetAddress) + "\n";
  const size_t written = marker.print(contents);
  marker.close();
  return written == contents.length();
}

void clearOtaPendingMarker()
{
  LittleFS.remove(OTA_PENDING_PATH);
}

void appendOtaLog(const String &line)
{
  String entry = singleLine(line) + "\n";
  if (entry.length() > MAX_OTA_LOG_SIZE) {
    entry.remove(0, entry.length() - MAX_OTA_LOG_SIZE);
  }
  if (otaLog.length() + entry.length() > MAX_OTA_LOG_SIZE) {
    otaLog.remove(0, otaLog.length() + entry.length() - MAX_OTA_LOG_SIZE);
  }
  otaLog += entry;
}

void recordOtaStatus(const String &status, uint32_t targetAddress,
                     const String &message, bool appendLog = true)
{
  otaStatus = status;
  otaTargetAddress = targetAddress;
  otaStatusMessage = singleLine(message);
  if (status == "failed" && appendLog) {
    otaLog = "";
    appendOtaLog("OTA update failed.");
    if (!otaUploadFilename.isEmpty()) {
      appendOtaLog("Firmware: " + otaUploadFilename);
    }
    appendOtaLog("Error: " + otaStatusMessage);
  } else if (status == "success") {
    otaLog = "";
    otaUploadFilename = "";
  }
}

void initializeOtaStatus()
{
  otaLog = "";
  otaUploadFilename = "";
  otaStatus = "idle";
  otaStatusMessage = "No OTA update has been performed.";
  otaTargetAddress = 0;

  bool hasPendingUpdate = false;
  File marker = LittleFS.open(OTA_PENDING_PATH, "r");
  if (marker) {
    const String targetAddress = marker.readStringUntil('\n');
    marker.close();
    char *end = nullptr;
    const unsigned long parsedAddress =
        strtoul(targetAddress.c_str(), &end, 10);
    if (end != targetAddress.c_str() && *end == '\0' && parsedAddress != 0) {
      otaTargetAddress = static_cast<uint32_t>(parsedAddress);
      hasPendingUpdate = true;
    } else {
      clearOtaPendingMarker();
      recordOtaStatus("failed", 0, "Invalid OTA pending-update marker.");
    }
  }

  File legacyState = LittleFS.open(LEGACY_OTA_STATE_PATH, "r");
  if (legacyState) {
    String legacyStatus = legacyState.readStringUntil('\n');
    legacyStatus.trim();
    const String legacyAddress = legacyState.readStringUntil('\n');
    legacyState.close();
    char *end = nullptr;
    const unsigned long parsedAddress =
        strtoul(legacyAddress.c_str(), &end, 10);
    if (!hasPendingUpdate && legacyStatus == "pending" &&
        end != legacyAddress.c_str() && *end == '\0' && parsedAddress != 0) {
      otaTargetAddress = static_cast<uint32_t>(parsedAddress);
      hasPendingUpdate = writeOtaPendingMarker(otaTargetAddress);
      if (!hasPendingUpdate) {
        recordOtaStatus(
            "failed", 0,
            "Could not preserve OTA verification state in LittleFS.");
      }
    } else if (!hasPendingUpdate && legacyStatus == "uploading") {
      recordOtaStatus(
          "failed", 0,
          "Device restarted before the firmware upload was validated.");
    }
    LittleFS.remove(LEGACY_OTA_STATE_PATH);
  }
  LittleFS.remove(LEGACY_OTA_LOG_PATH);

  if (!hasPendingUpdate) {
    return;
  }

  const esp_partition_t *runningPartition = esp_ota_get_running_partition();
  if (runningPartition == nullptr ||
      runningPartition->address != otaTargetAddress) {
    recordOtaStatus(
        "failed", 0,
        "The new firmware did not boot; the device rolled back to the previous firmware.");
    clearOtaPendingMarker();
    return;
  }

  esp_ota_img_states_t imageState;
  const esp_err_t result =
      esp_ota_get_state_partition(runningPartition, &imageState);
  if (result == ESP_OK && imageState == ESP_OTA_IMG_PENDING_VERIFY) {
    recordOtaStatus(
        "pending", otaTargetAddress,
        "Firmware booted; waiting for startup validation.");
    return;
  }
  if (result != ESP_OK && result != ESP_ERR_NOT_FOUND) {
    recordOtaStatus(
        "failed", 0,
        String("Could not verify the new firmware state: ") +
            esp_err_to_name(result));
    return;
  }

  recordOtaStatus("success", 0, "Firmware update completed successfully.");
  clearOtaPendingMarker();
}

uint16_t activeBaseCodeCount()
{
  if (activeCodeListIsAll) {
    uint16_t count = 0;
    for (const IrCodeListView &list : ALL_IR_CODE_LISTS) {
      count += list.naCodeCount + list.euCodeCount;
    }
    return count;
  }
  return activeNaCodeCount + activeEuCodeCount;
}

uint16_t activeExtraCodeCount()
{
  if (activeCodeListIsAll) {
    uint16_t count = 0;
    for (const IrCodeListView &list : ALL_IR_CODE_LISTS) {
      count += list.extraCodeCount;
    }
    return count;
  }
  return activeExtraIrCodeCount;
}

uint16_t activeCodeCount()
{
  return activeBaseCodeCount() + activeExtraCodeCount();
}

const char *languageText(const char *key)
{
  return translateText(key, deviceSettings.deviceLang.c_str());
}

bool selectCodeList(const String &name)
{
  activeNaCodes = nullptr;
  activeEuCodes = nullptr;
  activeNaCodeCount = 0;
  activeEuCodeCount = 0;
  activeCodeLabels = nullptr;
  activeExtraIrCodes = nullptr;
  activeExtraIrCodeCount = 0;
  activeCodeListIsCustom = false;
  activeCodeListIsAll = false;

  if (name == "ALL") {
    activeCodeListIsAll = true;
  } else if (name == "NA_ONLY-137.h") {
    activeNaCodes = IrCodesNaOnly::NApowerCodes;
    activeNaCodeCount = IrCodesNaOnly::num_NAcodes;
  } else if (name == "EU_ONLY-139.h") {
    activeEuCodes = IrCodesEuOnly::EUpowerCodes;
    activeEuCodeCount = IrCodesEuOnly::num_EUcodes;
  } else if (name == "NA_EU-236.h") {
    activeNaCodes = IrCodesNaEu::NApowerCodes;
    activeNaCodeCount = IrCodesNaEu::num_NAcodes;
    activeEuCodes = IrCodesNaEu::EUpowerCodes;
    activeEuCodeCount = IrCodesNaEu::num_EUcodes;
  } else if (name == "CUSTOM_CODES-1245.h") {
    activeNaCodes = IrCodesCustom::NApowerCodes;
    activeNaCodeCount = IrCodesCustom::num_NAcodes;
    activeExtraIrCodes = IrCodesCustom::extraIrCodes;
    activeExtraIrCodeCount = IrCodesCustom::numExtraIrCodes;
    activeCodeListIsCustom = true;
  } else if (name == "CUSTOM_CODES-675.h") {
    activeNaCodes = IrCodesCustom675::NApowerCodes;
    activeNaCodeCount = IrCodesCustom675::num_NAcodes;
    activeEuCodes = IrCodesCustom675::EUpowerCodes;
    activeEuCodeCount = IrCodesCustom675::num_EUcodes;
  } else if (name == "AC_POWER-209.h") {
    activeNaCodes = IrCodesAcPower::ACpowerCodes;
    activeNaCodeCount = IrCodesAcPower::num_ACcodes;
    activeCodeLabels = IrCodesAcPower::ACpowerLabels;
  } else {
    return false;
  }

  return activeCodeCount() > 0;
}

const IrCode *activeCodeAt(uint16_t index)
{
  if (index < activeNaCodeCount) {
    return activeNaCodes[index];
  }
  index -= activeNaCodeCount;
  return index < activeEuCodeCount ? activeEuCodes[index] : nullptr;
}

bool activeBaseCodeAt(uint16_t index, const IrCode *&code,
                      const char *&label)
{
  label = "IR code";
  if (!activeCodeListIsAll) {
    const uint16_t lookupIndex = activeCodeListIsCustom
                                     ? IrCodesCustom::naShuffledIndex(index)
                                     : index;
    code = activeCodeAt(lookupIndex);
    if (activeCodeLabels != nullptr) {
      label = activeCodeLabels[index];
    } else if (activeCodeListIsCustom) {
      label = IrCodesCustom::naFormatForIndex(lookupIndex);
    }
    return code != nullptr;
  }

  for (const IrCodeListView &list : ALL_IR_CODE_LISTS) {
    const uint16_t listBaseCount = list.naCodeCount + list.euCodeCount;
    if (index >= listBaseCount) {
      index -= listBaseCount;
      continue;
    }

    if (index < list.naCodeCount) {
      const uint16_t lookupIndex = list.customShuffle
                                       ? IrCodesCustom::naShuffledIndex(index)
                                       : index;
      code = list.naCodes[lookupIndex];
      if (list.customShuffle) {
        label = IrCodesCustom::naFormatForIndex(lookupIndex);
      } else if (list.labels != nullptr) {
        label = list.labels[index];
      }
      return code != nullptr;
    }

    index -= list.naCodeCount;
    if (list.euCodes == nullptr || index >= list.euCodeCount) {
      return false;
    }
    code = list.euCodes[index];
    return code != nullptr;
  }
  return false;
}

const IrCodesCustom::ExtraIrCode *activeExtraCodeAt(uint16_t index)
{
  if (!activeCodeListIsAll) {
    return index < activeExtraIrCodeCount ? &activeExtraIrCodes[index] : nullptr;
  }

  for (const IrCodeListView &list : ALL_IR_CODE_LISTS) {
    if (index < list.extraCodeCount) {
      return &list.extraCodes[index];
    }
    index -= list.extraCodeCount;
  }
  return nullptr;
}

String jsonEscape(const String &value)
{
  String escaped;
  escaped.reserve(value.length() + 8);
  for (size_t i = 0; i < value.length(); i++) {
    const char character = value[i];
    if (character == '"' || character == '\\') {
      escaped += '\\';
      escaped += character;
    } else if (static_cast<uint8_t>(character) < 0x20) {
      escaped += ' ';
    } else {
      escaped += character;
    }
  }
  return escaped;
}

String htmlAttributeEscape(const String &value)
{
  String escaped;
  escaped.reserve(value.length() + 8);
  for (size_t i = 0; i < value.length(); i++) {
    switch (value[i]) {
      case '&': escaped += "&amp;"; break;
      case '"': escaped += "&quot;"; break;
      case '<': escaped += "&lt;"; break;
      case '>': escaped += "&gt;"; break;
      case '\'': escaped += "&#39;"; break;
      default: escaped += value[i]; break;
    }
  }
  return escaped;
}

String settingsJson()
{
  String json;
  json.reserve(640);
  json += "{\"devicelang\":\"" + jsonEscape(stagedDeviceSettings.deviceLang);
  json += "\",\"webuiapname\":\"" + jsonEscape(stagedDeviceSettings.webUiApName);
  json += "\",\"webuiappassword\":\"" + jsonEscape(stagedDeviceSettings.webUiApPassword);
  json += "\",\"webuitheme\":\"" + jsonEscape(stagedDeviceSettings.webUiTheme);
  json += "\",\"webuimode\":\"" + jsonEscape(stagedDeviceSettings.webUiMode);
  json += "\",\"webuistyle\":\"" +
      jsonEscape(AppConfigStore::themeStyle(stagedDeviceSettings.webUiTheme,
                                            stagedDeviceSettings.webUiMode));
  json += "\",\"irsenddelay\":" + String(stagedDeviceSettings.irSendDelayUs);
  json += ",\"irlist\":\"" + jsonEscape(stagedDeviceSettings.irList);
  json += ",\"irled\":" + String(stagedDeviceSettings.irLedPin);
  json += ",\"button\":" + String(stagedDeviceSettings.buttonPin);
  json += ",\"led\":" + String(stagedDeviceSettings.ledPin) + "}";
  return json;
}

String languageJson()
{
  const LanguageCatalog *catalog =
      findLanguageCatalog(deviceSettings.deviceLang.c_str());
  String json;
  json.reserve(catalog->count * 96);
  json += '{';
  for (size_t i = 0; i < catalog->count; i++) {
    if (i > 0) json += ',';
    json += '"';
    json += jsonEscape(String(catalog->entries[i].key));
    json += "\":\"";
    json += jsonEscape(String(catalog->entries[i].value)) + '"';
  }
  json += '}';
  return json;
}

void serialPrintf(const char *format, ...)
{
  char message[128];
  va_list args;
  va_start(args, format);
  const int written = vsnprintf(message, sizeof(message), format, args);
  va_end(args);

  if (written < 0) {
    return;
  }

  message[sizeof(message) - 1] = '\0';
  Serial.print(message);
}

// Imported RAW captures can contain very long idle gaps. Keep those gaps
// bounded so one bad/huge capture cannot stall the whole TV-B-Gone scan.
#define MAX_IR_GAP_US 120000UL

bool statusLedActive = false;
bool statusLedState = false;
uint32_t lastStatusLedToggle = 0;

void updateStatusLed()
{
  pollControlInputs();

  const uint32_t now = millis();
  if (statusLedActive && now - lastStatusLedToggle >= 25) {
    statusLedState = !statusLedState;
    digitalWrite(deviceSettings.ledPin, statusLedState ? HIGH : LOW);
    lastStatusLedToggle = now;
  }
}

uint8_t bitsleft_r = 0;
uint8_t bits_r=0;
uint16_t code_ptr;
volatile const IrCode * powerCode;
bool buttonWasPressed = false;

enum class AppState : uint8_t {
  Standby,
  Running
};

AppState appState = AppState::Standby;

void requestStop()
{
  nextCodeIndex = 0;
  if (appState == AppState::Running) {
    stopRequested = true;
  }
}

struct SettingInfo {
  const char *name;
  const char *description;
  const char *allowedValues;
  bool readOnly;
};

const SettingInfo SETTING_INFO[] = {
    {"devicelang", "Device language for UART and Web UI.",
     "en, vi, ja, ru, ko, zh", false},
    {"webuiapname", "Wi-Fi access point name.", "1-32 characters", false},
    {"webuiappassword", "Wi-Fi access point password.",
     "Empty or 8-63 characters; quote values containing spaces", false},
    {"webuitheme", "Web UI color palette.",
     "One of 19 color palette IDs", false},
    {"webuimode", "Web UI light or dark mode.", "light or dark", false},
    {"irsenddelay", "Minimum idle time between IR codes.",
     "0-1000000 microseconds; the us suffix is optional", false},
    {"irlist", "IR power-code list.",
     "NA_EU-236.h, NA_ONLY-137.h, EU_ONLY-139.h, CUSTOM_CODES-1245.h, "
     "CUSTOM_CODES-675.h, AC_POWER-209.h, ALL", false},
    {"irled", "IR LED GPIO pin.",
     "GPIO 0-21; distinct from button and led", false},
    {"button", "Start/stop button GPIO pin.",
     "GPIO 0-21; distinct from irled and led", false},
    {"led", "Status LED GPIO pin.",
     "GPIO 0-21; distinct from irled and button", false},
};

const SettingInfo *findSettingInfo(const String &name)
{
  for (const SettingInfo &info : SETTING_INFO) {
    if (name == info.name) {
      return &info;
    }
  }
  return nullptr;
}

String settingValue(const AppConfigStore::Settings &settings,
                    const String &name)
{
  if (name == "devicelang") return settings.deviceLang;
  if (name == "webuiapname") return settings.webUiApName;
  if (name == "webuiappassword") return settings.webUiApPassword;
  if (name == "webuitheme") return settings.webUiTheme;
  if (name == "webuimode") return settings.webUiMode;
  if (name == "irsenddelay") return String(settings.irSendDelayUs) + "us";
  if (name == "irlist") return settings.irList;
  if (name == "irled") return String(settings.irLedPin);
  if (name == "button") return String(settings.buttonPin);
  if (name == "led") return String(settings.ledPin);
  return "";
}

void printSetting(const SettingInfo &info)
{
  const String name(info.name);
  serialPrintf("%s: %s\n", info.name,
               settingValue(stagedDeviceSettings, name).c_str());
  serialPrintf("  %s Allowed: %s%s\n", info.description, info.allowedValues,
               info.readOnly ? " (read-only)" : "");
}

void printAllSettings()
{
  serialPrintf("Staged settings (RAM only; use 'save' to apply and persist):\n");
  for (const SettingInfo &info : SETTING_INFO) {
    serialPrintf("%s: %s\n", info.name,
                 settingValue(stagedDeviceSettings, info.name).c_str());
  }
  serialPrintf("Unsaved changes: %s\n", stagedSettingsChanged ? "yes" : "no");
}

void printConfigFile()
{
  File file = LittleFS.open(AppConfigStore::CONFIG_PATH, "r");
  if (!file) {
    serialPrintf("ERR: Cannot open config.conf for reading.\n");
    return;
  }

  serialPrintf("--- config.conf ---\n");
  while (file.available()) {
    const String line = file.readStringUntil('\n');
    serialPrintf("%s\n", line.c_str());
  }
  file.close();
  serialPrintf("--- end config.conf ---\n");
}

void printCommandHelp()
{
  serialPrintf(
      "Commands: start, stop, reboot, get settings, get <setting>,\n"
      "          print settings, set <setting> <value>, save, help\n"
      "set changes staged RAM settings only. Use save to write config.conf\n"
      "and reboot. Quote string values containing spaces, e.g.:\n"
      "  set webuiapname \"My TV-B-GONE\"\n"
      "  set webuiappassword \"\"\n"
      "Settings and accepted values:\n");
  for (const SettingInfo &info : SETTING_INFO) {
    serialPrintf("  %s: %s Allowed: %s%s\n", info.name, info.description,
                 info.allowedValues, info.readOnly ? " (read-only)" : "");
  }
}

bool setSystemSetting(const String &name, String value)
{
  const SettingInfo *info = findSettingInfo(name);
  if (info == nullptr) {
    serialPrintf("ERR: Unknown setting '%s'. Send 'help' to list settings.\n",
                 name.c_str());
    return false;
  }
  if (info->readOnly) {
    serialPrintf("ERR: '%s' is read-only and cannot be changed.\n",
                 name.c_str());
    return false;
  }
  if (appState == AppState::Running) {
    serialPrintf("ERR: Stop IR transmission before changing settings.\n");
    return false;
  }

  value.trim();
  if (value.startsWith("\"")) {
    String unquoted;
    if (!AppConfigStore::parseValue(value, unquoted)) {
      serialPrintf("ERR: Invalid quoted value.\n");
      return false;
    }
    value = unquoted;
  }

  AppConfigStore::Settings candidate = stagedDeviceSettings;
  uint32_t number = 0;
  if (name == "devicelang") candidate.deviceLang = value;
  else if (name == "webuiapname") candidate.webUiApName = value;
  else if (name == "webuiappassword") candidate.webUiApPassword = value;
  else if (name == "webuitheme") candidate.webUiTheme = value;
  else if (name == "webuimode") candidate.webUiMode = value;
  else if (name == "irlist") candidate.irList = value;
  else if (name == "irsenddelay") {
    if (!AppConfigStore::parseUnsigned(value, 1000000, number, true)) {
      serialPrintf("ERR: irsenddelay must be 0-1000000 microseconds.\n");
      return false;
    }
    candidate.irSendDelayUs = number;
  } else if (name == "irled" || name == "button" || name == "led") {
    if (!AppConfigStore::parseUnsigned(value, 21, number)) {
      serialPrintf("ERR: %s must be a GPIO number from 0 to 21.\n",
                   name.c_str());
      return false;
    }
    if (name == "irled") candidate.irLedPin = static_cast<uint8_t>(number);
    else if (name == "button") candidate.buttonPin = static_cast<uint8_t>(number);
    else candidate.ledPin = static_cast<uint8_t>(number);
  }

  String error;
  if (!AppConfigStore::validEditableSettings(candidate, error)) {
    serialPrintf("ERR: %s\n", languageText(error.c_str()));
    return false;
  }

  stagedDeviceSettings = candidate;
  stagedSettingsChanged = true;
  serialPrintf("Staged %s = %s. Use 'save' to apply and persist.\n",
               name.c_str(), settingValue(stagedDeviceSettings, name).c_str());
  return true;
}

void saveStagedSettings()
{
  if (appState == AppState::Running) {
    serialPrintf("ERR: Stop IR transmission before saving settings.\n");
    return;
  }
  if (!stagedSettingsChanged) {
    serialPrintf("No unsaved settings. Use 'set <setting> <value>' first.\n");
    return;
  }

  String error;
  if (!AppConfigStore::validEditableSettings(stagedDeviceSettings, error)) {
    serialPrintf("ERR: %s\n", languageText(error.c_str()));
    return;
  }
  if (!AppConfigStore::save(stagedDeviceSettings, error)) {
    serialPrintf("ERR: %s\n", languageText(error.c_str()));
    return;
  }

  stagedSettingsChanged = false;
  serialPrintf("Settings saved to config.conf. Rebooting to apply them.\n");
  pendingRestart = true;
  pendingRestartAt = millis();
}

void handleCommand(const char *command)
{
  String line(command);
  line.trim();
  for (size_t i = 0; i < line.length(); i++) {
    if (line[i] == '\t') {
      line.setCharAt(i, ' ');
    }
  }
  line.trim();
  String normalized = line;
  normalized.toLowerCase();

  if (normalized == "start") {
    if (appState == AppState::Running) {
      serialPrintf("%s\n", languageText("TV-B-GONE is running."));
    } else if (startRequested) {
      serialPrintf("%s\n", languageText("Start command has been received."));
    } else {
      startRequested = true;
      serialPrintf("%s\n", languageText("Starting TV-B-GONE."));
    }
    return;
  }

  if (normalized == "stop") {
    requestStop();
    if (appState == AppState::Running) {
      serialPrintf("%s\n", languageText("Stop command has been received."));
    } else if (startRequested) {
      startRequested = false;
      serialPrintf("%s\n", languageText("Start command has been cancelled."));
    } else {
      serialPrintf("%s\n", languageText("TV-B-GONE is stopping."));
    }
    return;
  }

  if (normalized == "reboot") {
    serialPrintf("Reboot requested.\n");
    requestStop();
    pendingRestart = true;
    pendingRestartAt = millis();
    return;
  }
  if (normalized == "help") {
    printCommandHelp();
    return;
  }
  if (normalized == "print settings") {
    printConfigFile();
    return;
  }
  if (normalized == "save") {
    saveStagedSettings();
    return;
  }

  const int separator = line.indexOf(' ');
  const String verb = separator < 0 ? normalized
                                    : normalized.substring(0, separator);
  String arguments = separator < 0 ? "" : line.substring(separator + 1);
  arguments.trim();

  if (verb == "get") {
    String settingName = arguments;
    settingName.toLowerCase();
    if (settingName == "settings") {
      printAllSettings();
      return;
    }
    const SettingInfo *info = findSettingInfo(settingName);
    if (info == nullptr) {
      serialPrintf("ERR: Unknown setting '%s'. Send 'help' to list settings.\n",
                   arguments.c_str());
      return;
    }
    printSetting(*info);
    return;
  }

  if (verb == "set") {
    const int settingSeparator = arguments.indexOf(' ');
    if (settingSeparator < 0) {
      serialPrintf("Usage: set <setting> <value>. Send 'help' for details.\n");
      return;
    }
    String name = arguments.substring(0, settingSeparator);
    name.toLowerCase();
    String value = arguments.substring(settingSeparator + 1);
    value.trim();
    if (value.isEmpty()) {
      serialPrintf("ERR: Missing value. Use set <setting> <value>.\n");
      return;
    }
    setSystemSetting(name, value);
    return;
  }

  serialPrintf("Unknown command. Send 'help' to list commands.\n");
}

void processCommandByte(CommandParser &parser, uint8_t byte)
{
  if (byte == '\r') {
    return;
  }

  if (byte == '\n') {
    if (parser.overflow) {
      serialPrintf("ERR: Command too long. Send 'help' for command syntax.\n");
    } else if (parser.length > 0) {
      size_t start = 0;
      while (start < parser.length &&
             isspace(static_cast<unsigned char>(parser.buffer[start]))) {
        start++;
      }
      while (parser.length > start &&
             isspace(static_cast<unsigned char>(parser.buffer[parser.length - 1]))) {
        parser.length--;
      }
      if (start == parser.length) {
        parser.length = 0;
        return;
      }
      parser.buffer[parser.length] = '\0';
      handleCommand(parser.buffer + start);
    }

    parser.length = 0;
    parser.overflow = false;
    return;
  }

  if (parser.overflow) {
    return;
  }
  if (parser.length + 1 < COMMAND_BUFFER_SIZE) {
    parser.buffer[parser.length++] = static_cast<char>(byte);
  } else {
    parser.overflow = true;
  }
}

void pollControlInputs()
{
  handleWebUI();
  while (Serial.available() > 0) {
    processCommandByte(uartCommandParser, static_cast<uint8_t>(Serial.read()));
  }

}

uint8_t read_bits(uint8_t count)
{
  uint8_t i;
  uint8_t tmp=0;

  for (i=0; i<count; i++) {
    if (bitsleft_r == 0) {
      bits_r = powerCode->codes[code_ptr++];
      bitsleft_r = 8;
    }
    bitsleft_r--;
    tmp |= (((bits_r >> (bitsleft_r)) & 1) << (count-1-i));
  }
  return tmp;
}

#define BUTTON_PRESSED LOW 
uint16_t ontime, offtime;
uint16_t i,num_codes;
uint32_t codesTransmitted = 0;

void handleSettingsSave()
{
  if (appState == AppState::Running) {
    webServer.send(409, "application/json",
        "{\"error\":\"" +
            jsonEscape(String(languageText(
                "Stop the current run before saving settings."))) +
            "\"}");
    return;
  }

  AppConfigStore::Settings candidate = stagedDeviceSettings;
  candidate.deviceLang = webServer.arg("devicelang");
  candidate.webUiApName = webServer.arg("webuiapname");
  candidate.webUiApPassword = webServer.arg("webuiappassword");
  candidate.webUiTheme = webServer.arg("webuitheme");
  candidate.webUiMode = webServer.arg("webuimode");
  candidate.irList = webServer.arg("irlist");

  String error;
  uint32_t value = 0;
  if (!AppConfigStore::parseUnsigned(webServer.arg("irsenddelay"), 1000000,
                                     value)) {
    webServer.send(400, "application/json",
        "{\"error\":\"" +
            jsonEscape(String(languageText(
                "IR delay must be an integer from 0 to 1000000."))) +
            "\"}");
    return;
  }
  candidate.irSendDelayUs = value;

  if (!AppConfigStore::parseUnsigned(webServer.arg("irled"), 21, value)) {
    webServer.send(400, "application/json",
        "{\"error\":\"" +
            jsonEscape(String(languageText(
                "IR LED GPIO must be between 0 and 21."))) +
            "\"}");
    return;
  }
  candidate.irLedPin = static_cast<uint8_t>(value);
  if (!AppConfigStore::parseUnsigned(webServer.arg("button"), 21, value)) {
    webServer.send(400, "application/json",
        "{\"error\":\"" +
            jsonEscape(String(languageText(
                "Button GPIO must be between 0 and 21."))) +
            "\"}");
    return;
  }
  candidate.buttonPin = static_cast<uint8_t>(value);
  if (!AppConfigStore::parseUnsigned(webServer.arg("led"), 21, value)) {
    webServer.send(400, "application/json",
        "{\"error\":\"" +
            jsonEscape(String(languageText(
                "Status LED GPIO must be between 0 and 21."))) +
            "\"}");
    return;
  }
  candidate.ledPin = static_cast<uint8_t>(value);

  if (!AppConfigStore::validEditableSettings(candidate, error)) {
    const String response = "{\"error\":\"" +
        jsonEscape(String(languageText(error.c_str()))) + "\"}";
    webServer.send(400, "application/json", response);
    return;
  }
  if (!AppConfigStore::save(candidate, error)) {
    const String response = "{\"error\":\"" +
        jsonEscape(String(languageText(error.c_str()))) + "\"}";
    webServer.send(500, "application/json", response);
    return;
  }

  stagedDeviceSettings = candidate;
  stagedSettingsChanged = false;
  webServer.send(200, "application/json", "{\"ok\":true,\"restart\":true}");
  pendingRestart = true;
  pendingRestartAt = millis();
}

void failOtaUpload(const String &message, int httpStatus)
{
  if (otaUpdateBegun) {
    Update.abort();
    otaUpdateBegun = false;
  }
  otaUploadFailed = true;
  otaUploadError = message;
  otaUploadHttpStatus = httpStatus;
  clearOtaPendingMarker();
  recordOtaStatus("failed", 0, message);
}

void handleOtaUpload()
{
  HTTPUpload &upload = webServer.upload();
  switch (upload.status) {
    case UPLOAD_FILE_START: {
      otaUploadStarted = true;
      otaUploadComplete = false;
      otaUploadFailed = false;
      otaUpdateBegun = false;
      otaUploadError = "";
      otaUploadHttpStatus = 400;
      otaTargetAddress = 0;
      otaLog = "";
      otaUploadFilename = upload.filename;
      recordOtaStatus("uploading", 0, "Uploading firmware.", false);

      String filename = upload.filename;
      filename.toLowerCase();
      if (!filename.endsWith(".bin")) {
        failOtaUpload("OTA upload supports .bin files only.", 400);
        return;
      }
      if (appState == AppState::Running || pendingRestart) {
        failOtaUpload(
            "Stop IR transmission and wait for pending restart before OTA.",
            409);
        return;
      }
      const esp_partition_t *targetPartition =
          esp_ota_get_next_update_partition(nullptr);
      if (targetPartition == nullptr) {
        failOtaUpload("No OTA update partition is available.", 500);
        return;
      }
      otaTargetAddress = targetPartition->address;
      otaMaximumSize = targetPartition->size;
      recordOtaStatus("uploading", otaTargetAddress,
                      "Uploading firmware.", false);
      if (!Update.begin(otaMaximumSize, U_FLASH)) {
        failOtaUpload(String("Could not start firmware update: ") +
                          Update.errorString(),
                      500);
        return;
      }
      otaUpdateBegun = true;
      break;
    }

    case UPLOAD_FILE_WRITE:
      if (otaUploadFailed || !otaUpdateBegun) {
        return;
      }
      if (upload.totalSize > otaMaximumSize) {
        failOtaUpload("Firmware file exceeds the OTA partition size.", 413);
        return;
      }
      if (Update.write(upload.buf, upload.currentSize) != upload.currentSize) {
        failOtaUpload(String("Firmware write failed: ") + Update.errorString(),
                      500);
      }
      break;

    case UPLOAD_FILE_END:
      if (otaUploadFailed || !otaUpdateBegun) {
        return;
      }
      if (!writeOtaPendingMarker(otaTargetAddress)) {
        failOtaUpload("Could not save OTA verification marker.", 500);
        return;
      }
      recordOtaStatus("pending", otaTargetAddress,
                      "Firmware image validated; waiting for reboot and startup verification.",
                      false);
      if (!Update.end(true)) {
        failOtaUpload(String("Firmware validation failed: ") +
                          Update.errorString(),
                      400);
        return;
      }
      otaUpdateBegun = false;
      otaUploadComplete = true;
      break;

    case UPLOAD_FILE_ABORTED:
      failOtaUpload("Firmware upload was interrupted.", 400);
      break;

    default:
      break;
  }
}

void handleOtaRequest()
{
  if (otaUploadFailed) {
    const String response = "{\"error\":\"" +
        jsonEscape(otaUploadError) + "\"}";
    webServer.send(otaUploadHttpStatus, "application/json", response);
    return;
  }
  if (!otaUploadStarted || !otaUploadComplete) {
    webServer.send(400, "application/json",
                   "{\"error\":\"No complete firmware .bin was uploaded.\"}");
    return;
  }

  webServer.send(200, "application/json",
                 "{\"ok\":true,\"restartInMs\":1000}");
  otaUploadStarted = false;
  otaUploadComplete = false;
  pendingRestart = true;
  pendingRestartAt = millis();
}

void handleOtaInfo()
{
  const esp_partition_t *partition =
      esp_ota_get_next_update_partition(nullptr);
  if (partition == nullptr) {
    webServer.send(500, "application/json",
                   "{\"error\":\"No OTA update partition is available.\"}");
    return;
  }
  char json[64];
  snprintf(json, sizeof(json), "{\"maxBytes\":%lu}",
           static_cast<unsigned long>(partition->size));
  webServer.sendHeader("Cache-Control", "no-store");
  webServer.send(200, "application/json", json);
}

void handleOtaStatus()
{
  const String response = "{\"status\":\"" + jsonEscape(otaStatus) +
      "\",\"message\":\"" + jsonEscape(otaStatusMessage) +
      "\",\"logAvailable\":" +
      String(otaStatus == "failed" && !otaLog.isEmpty() ? "true" : "false") +
      "}";
  webServer.sendHeader("Cache-Control", "no-store");
  webServer.send(200, "application/json", response);
}

void handleOtaLogDownload()
{
  if (otaStatus != "failed" || otaLog.isEmpty()) {
    webServer.send(404, "application/json",
                   "{\"error\":\"No OTA log is available.\"}");
    return;
  }
  webServer.sendHeader("Content-Disposition",
                       "attachment; filename=\"ota-update.log\"");
  webServer.sendHeader("Cache-Control", "no-store");
  webServer.send(200, "text/plain; charset=utf-8", otaLog);
}

void handleFactoryReset()
{
  if (appState == AppState::Running || startRequested || pendingRestart ||
      otaUpdateBegun || otaStatus == "pending" || otaStatus == "uploading") {
    webServer.send(409, "application/json",
                   "{\"error\":\"Stop active operations before factory reset.\"}");
    return;
  }

  AppConfigStore::Settings defaults = AppConfigStore::defaults();
  String error;
  if (!AppConfigStore::save(defaults, error)) {
    const String response = "{\"error\":\"" + jsonEscape(error) + "\"}";
    webServer.send(500, "application/json", response);
    return;
  }

  deviceSettings = defaults;
  stagedDeviceSettings = defaults;
  stagedSettingsChanged = false;
  codesTransmitted = 0;
  nextCodeIndex = 0;
  webServer.send(200, "application/json",
                 "{\"ok\":true,\"restartInMs\":1000}");
  pendingRestart = true;
  pendingRestartAt = millis();
}

void failConfigUpload(const String &message, int httpStatus)
{
  configUploadFile.close();
  LittleFS.remove(CONFIG_UPLOAD_PATH);
  configUploadFailed = true;
  configUploadError = message;
  configUploadHttpStatus = httpStatus;
}

void handleConfigUpload()
{
  HTTPUpload &upload = webServer.upload();
  switch (upload.status) {
    case UPLOAD_FILE_START: {
      configUploadStarted = true;
      configUploadComplete = false;
      configUploadFailed = false;
      configUploadError = "";
      configUploadHttpStatus = 400;

      String filename = upload.filename;
      filename.toLowerCase();
      if (filename.endsWith(".txt")) {
        filename.remove(filename.length() - 4);
        filename += ".conf";
      }
      if (!filename.endsWith(".conf")) {
        failConfigUpload("Only .conf or .txt files are supported.", 400);
        return;
      }
      if (appState == AppState::Running || startRequested || pendingRestart) {
        failConfigUpload(
            "Cannot restore settings while IR transmission is running.", 409);
        return;
      }

      LittleFS.remove(CONFIG_UPLOAD_PATH);
      configUploadFile = LittleFS.open(CONFIG_UPLOAD_PATH, "w");
      if (!configUploadFile) {
        failConfigUpload("Cannot open temporary config file for writing.", 500);
      }
      break;
    }

    case UPLOAD_FILE_WRITE:
      if (configUploadFailed || !configUploadFile) {
        return;
      }
      if (upload.totalSize > MAX_CONFIG_UPLOAD_SIZE) {
        failConfigUpload("Configuration file is too large.", 413);
        return;
      }
      if (configUploadFile.write(upload.buf, upload.currentSize) !=
          upload.currentSize) {
        failConfigUpload("Could not write the complete uploaded config file.",
                         500);
      }
      break;

    case UPLOAD_FILE_END: {
      if (configUploadFailed || !configUploadFile) {
        return;
      }
      configUploadFile.flush();
      configUploadFile.close();
      if (upload.totalSize == 0) {
        failConfigUpload("Uploaded config file is empty.", 400);
        return;
      }

      File uploaded = LittleFS.open(CONFIG_UPLOAD_PATH, "r");
      if (!uploaded || uploaded.size() != upload.totalSize) {
        uploaded.close();
        failConfigUpload("Uploaded config file is incomplete.", 400);
        return;
      }

      AppConfigStore::Settings candidate = deviceSettings;
      String error;
      const bool parsed = AppConfigStore::parseFile(uploaded, candidate, error);
      uploaded.close();
      if (!parsed) {
        failConfigUpload(error, 400);
        return;
      }

      if (!AppConfigStore::validEditableSettings(candidate, error)) {
        failConfigUpload(error, 400);
        return;
      }
      if (!AppConfigStore::save(candidate, error)) {
        failConfigUpload(error, 500);
        return;
      }

      LittleFS.remove(CONFIG_UPLOAD_PATH);
      stagedDeviceSettings = candidate;
      stagedSettingsChanged = false;
      configUploadComplete = true;
      break;
    }

    case UPLOAD_FILE_ABORTED:
      failConfigUpload("Configuration upload was interrupted.", 400);
      break;

    default:
      break;
  }
}

void handleConfigUploadRequest()
{
  if (configUploadFailed) {
    const String response = "{\"error\":\"" +
        jsonEscape(String(languageText(configUploadError.c_str()))) + "\"}";
    webServer.send(configUploadHttpStatus, "application/json", response);
    return;
  }
  if (!configUploadStarted || !configUploadComplete) {
    webServer.send(400, "application/json",
                   "{\"error\":\"No complete config.conf was uploaded.\"}");
    return;
  }

  webServer.send(200, "application/json", "{\"ok\":true,\"restartInMs\":1000}");
  configUploadStarted = false;
  configUploadComplete = false;
  pendingRestart = true;
  pendingRestartAt = millis();
}

void handleConfigDownload()
{
  File configFile = LittleFS.open(AppConfigStore::CONFIG_PATH, "r");
  if (!configFile) {
    webServer.send(500, "application/json",
                   "{\"error\":\"Cannot open config.conf for reading.\"}");
    return;
  }

  webServer.sendHeader("Content-Disposition",
                       "attachment; filename=\"config.conf\"");
  webServer.sendHeader("Cache-Control", "no-store");
  webServer.streamFile(configFile, "text/plain; charset=utf-8");
  configFile.close();
}

void handleProgressReset()
{
  if (appState == AppState::Running || startRequested) {
    webServer.send(409, "application/json",
                   "{\"error\":\"Cannot reset progress while IR is running.\"}");
    return;
  }

  codesTransmitted = 0;
  nextCodeIndex = 0;
  webServer.send(200, "application/json", "{\"ok\":true,\"sent\":0}");
}

void confirmPendingFirmware()
{
  const esp_partition_t *runningPartition = esp_ota_get_running_partition();
  if (runningPartition == nullptr) {
    Serial.println("ERR: Cannot identify running OTA partition.");
    return;
  }

  esp_ota_img_states_t state;
  const esp_err_t stateResult =
      esp_ota_get_state_partition(runningPartition, &state);
  if (stateResult == ESP_ERR_NOT_FOUND) {
    return;
  }
  if (stateResult != ESP_OK) {
    Serial.printf("ERR: Cannot check OTA image state: %s\n",
                  esp_err_to_name(stateResult));
    if (otaStatus == "pending" &&
        runningPartition->address == otaTargetAddress) {
      recordOtaStatus(
          "failed", 0,
          String("Could not verify the new firmware state: ") +
              esp_err_to_name(stateResult));
    }
    return;
  }
  if (state != ESP_OTA_IMG_PENDING_VERIFY) {
    return;
  }

  const esp_err_t validResult = esp_ota_mark_app_valid_cancel_rollback();
  if (validResult == ESP_OK) {
    Serial.println("OTA firmware boot verified.");
    if (otaStatus == "pending" &&
        runningPartition->address == otaTargetAddress) {
      recordOtaStatus("success", 0,
                      "Firmware update completed successfully.");
      clearOtaPendingMarker();
    }
    return;
  }

  Serial.printf("ERR: Cannot confirm OTA firmware: %s; rolling back.\n",
                esp_err_to_name(validResult));
  const esp_err_t rollbackResult =
      esp_ota_mark_app_invalid_rollback_and_reboot();
  if (rollbackResult != ESP_OK) {
    Serial.printf("ERR: OTA rollback failed: %s\n",
                  esp_err_to_name(rollbackResult));
  }
}

void beginWebUI()
{
  WiFi.mode(WIFI_AP);
  const char *password = deviceSettings.webUiApPassword.isEmpty()
                             ? nullptr
                             : deviceSettings.webUiApPassword.c_str();
  if (!WiFi.softAP(deviceSettings.webUiApName.c_str(), password)) {
    Serial.println(languageText(
        "ERR: Could not start Wi-Fi AP; Web UI is unavailable."));
    return;
  }

  webServer.on("/", HTTP_GET, []() {
    webServer.sendHeader("Cache-Control", "no-store, no-cache, must-revalidate");
    webServer.sendHeader("Pragma", "no-cache");
    webServer.sendHeader("Expires", "0");
    String page = FPSTR(WEBUI_HTML);
    page.replace("__DEVICE_LANGUAGE__",
                 htmlAttributeEscape(stagedDeviceSettings.deviceLang));
    page.replace("__WEBUI_THEME__",
                 AppConfigStore::themeStyle(stagedDeviceSettings.webUiTheme,
                                            stagedDeviceSettings.webUiMode));
    page.replace("__WEBUI_MODE__",
                 AppConfigStore::isThemeMode(stagedDeviceSettings.webUiMode)
                     ? stagedDeviceSettings.webUiMode
                     : "dark");
    webServer.send(200, "text/html; charset=utf-8", page);
  });

  webServer.on("/settings", HTTP_GET, []() {
    webServer.sendHeader("Cache-Control", "no-store, no-cache, must-revalidate");
    webServer.sendHeader("Pragma", "no-cache");
    webServer.sendHeader("Expires", "0");
    String page = FPSTR(WEBUI_SETTINGS_HTML);
    page.replace("__DEVICE_LANGUAGE__",
                 htmlAttributeEscape(stagedDeviceSettings.deviceLang));
    page.replace("__WEBUI_THEME__",
                 AppConfigStore::themeStyle(stagedDeviceSettings.webUiTheme,
                                            stagedDeviceSettings.webUiMode));
    page.replace("__WEBUI_MODE__",
                 AppConfigStore::isThemeMode(stagedDeviceSettings.webUiMode)
                     ? stagedDeviceSettings.webUiMode
                     : "dark");
    page.replace("__LANG_EN__",
                 stagedDeviceSettings.deviceLang == "en" ? "selected" : "");
    page.replace("__LANG_VI__",
                 stagedDeviceSettings.deviceLang == "vi" ? "selected" : "");
    page.replace("__LANG_RU__",
                 stagedDeviceSettings.deviceLang == "ru" ? "selected" : "");
    page.replace("__LANG_JA__",
                 stagedDeviceSettings.deviceLang == "ja" ? "selected" : "");
    page.replace("__LANG_KO__",
                 stagedDeviceSettings.deviceLang == "ko" ? "selected" : "");
    page.replace("__LANG_ZH__",
                 stagedDeviceSettings.deviceLang == "zh" ? "selected" : "");
    page.replace("__MODE_DARK__",
                 stagedDeviceSettings.webUiMode == "dark" ? "selected" : "");
    page.replace("__MODE_LIGHT__",
                 stagedDeviceSettings.webUiMode == "light" ? "selected" : "");
    String themeOptions;
    for (const AppConfigStore::ThemeOption &theme :
         AppConfigStore::WEB_UI_THEMES) {
      themeOptions += "<option value=\"";
      themeOptions += theme.id;
      themeOptions += "\" data-light-style=\"";
      themeOptions += theme.lightStyle;
      themeOptions += "\" data-dark-style=\"";
      themeOptions += theme.darkStyle;
      themeOptions += "\"";
      if (stagedDeviceSettings.webUiTheme == theme.id) {
        themeOptions += " selected";
      }
      themeOptions += ">";
      themeOptions += theme.label;
      themeOptions += "</option>";
    }
    page.replace("__WEBUI_THEME_OPTIONS__", themeOptions);
    page.replace("__WEBUI_AP_NAME__",
                 htmlAttributeEscape(stagedDeviceSettings.webUiApName));
    page.replace("__WEBUI_AP_PASSWORD__",
                 htmlAttributeEscape(stagedDeviceSettings.webUiApPassword));
    page.replace("__IR_SEND_DELAY__",
                 String(stagedDeviceSettings.irSendDelayUs));
    page.replace("__IR_LED_GPIO__",
                 String(stagedDeviceSettings.irLedPin));
    page.replace("__BUTTON_GPIO__",
                 String(stagedDeviceSettings.buttonPin));
    page.replace("__STATUS_LED_GPIO__",
                 String(stagedDeviceSettings.ledPin));
    page.replace("__IRLIST_NA_EU__",
                 stagedDeviceSettings.irList == "NA_EU-236.h" ? "selected" : "");
    page.replace("__IRLIST_NA_ONLY__",
                 stagedDeviceSettings.irList == "NA_ONLY-137.h" ? "selected" : "");
    page.replace("__IRLIST_EU_ONLY__",
                 stagedDeviceSettings.irList == "EU_ONLY-139.h" ? "selected" : "");
    page.replace("__IRLIST_CUSTOM_1245__",
                 stagedDeviceSettings.irList == "CUSTOM_CODES-1245.h" ? "selected" : "");
    page.replace("__IRLIST_CUSTOM_675__",
                 stagedDeviceSettings.irList == "CUSTOM_CODES-675.h" ? "selected" : "");
    page.replace("__IRLIST_AC_POWER__",
                 stagedDeviceSettings.irList == "AC_POWER-209.h" ? "selected" : "");
    page.replace("__IRLIST_ALL__",
                 stagedDeviceSettings.irList == "ALL" ? "selected" : "");
    webServer.send(200, "text/html; charset=utf-8", page);
  });

  webServer.on("/api/settings", HTTP_GET, []() {
    webServer.sendHeader("Cache-Control", "no-store, no-cache, must-revalidate");
    webServer.sendHeader("Pragma", "no-cache");
    webServer.sendHeader("Expires", "0");
    webServer.send(200, "application/json", settingsJson());
  });

  webServer.on("/api/language", HTTP_GET, []() {
    webServer.sendHeader("Cache-Control", "no-store, no-cache, must-revalidate");
    webServer.sendHeader("Pragma", "no-cache");
    webServer.sendHeader("Expires", "0");
    webServer.send(200, "application/json", languageJson());
  });

  webServer.on("/api/settings/save", HTTP_POST, handleSettingsSave);
  webServer.on("/api/ota", HTTP_POST, handleOtaRequest, handleOtaUpload);
  webServer.on("/api/ota/info", HTTP_GET, handleOtaInfo);
  webServer.on("/api/ota/status", HTTP_GET, handleOtaStatus);
  webServer.on("/api/ota/log", HTTP_GET, handleOtaLogDownload);
  webServer.on("/api/reset-all", HTTP_POST, handleFactoryReset);
  webServer.on("/api/config/download", HTTP_GET, handleConfigDownload);
  webServer.on("/api/config/upload", HTTP_POST, handleConfigUploadRequest,
               handleConfigUpload);
  webServer.on("/api/reset-progress", HTTP_POST, handleProgressReset);

  webServer.on("/api/status", HTTP_GET, []() {
    const bool running = appState == AppState::Running;
    const bool starting = startRequested;
    const uint16_t total = activeCodeCount();
    const uint16_t current = running ? (codesTransmitted + 1) : codesTransmitted;
    char json[224];
    snprintf(json, sizeof(json),
             "{\"running\":%s,\"starting\":%s,\"sent\":%lu,\"total\":%u,\"current\":%u,\"ip\":\"%s\"}",
             running ? "true" : "false",
             starting ? "true" : "false",
             static_cast<unsigned long>(codesTransmitted),
             total, current, WiFi.softAPIP().toString().c_str());
    webServer.send(200, "application/json", json);
  });
/*
  webServer.on("/api/start", HTTP_POST, []() {
    handleCommand("start");
    webServer.send(200, "application/json", "{\"ok\":true,\"command\":\"start\"}");
  });

  webServer.on("/api/stop", HTTP_POST, []() {
    handleCommand("stop");
    webServer.send(200, "application/json", "{\"ok\":true,\"command\":\"stop\"}");
  });
*/
// START
  auto startHandler = []() {
      handleCommand("start");
      webServer.send(200, "application/json",
                     "{\"ok\":true,\"command\":\"start\"}");
  };

  webServer.on("/api/start", HTTP_GET, startHandler);
  webServer.on("/api/start", HTTP_POST, startHandler);

  // STOP
  auto stopHandler = []() {
      handleCommand("stop");
      webServer.send(200, "application/json",
                     "{\"ok\":true,\"command\":\"stop\"}");
  };

  webServer.on("/api/stop", HTTP_GET, stopHandler);
  webServer.on("/api/stop", HTTP_POST, stopHandler);

  webServer.onNotFound([]() {
      webServer.send(404, "text/plain", "Not found");
    });

  webServer.begin();
  webUiStarted = true;
  Serial.printf("Web UI: http://%s/\n", WiFi.softAPIP().toString().c_str());
}

void handleWebUI()
{
  if (webUiStarted) {
    webServer.handleClient();
  }
}

bool sendRawTimings(const uint32_t *timings, uint16_t length, uint16_t frequency)
{
  pollControlInputs();
  if (stopRequested) {
    return false;
  }

  irsend->enableIROut(frequency);
  uint32_t trailingSpaceUs = 0;

  for (uint16_t timing = 0; timing < length; timing++) {
    uint32_t duration = timings[timing];
    if (timing & 1) {
      if (duration > MAX_IR_GAP_US) {
        duration = MAX_IR_GAP_US;
      }
      irsend->space(duration);
      if (timing == length - 1) {
        trailingSpaceUs = duration;
      }
    } else {
      while (duration > 0) {
        const uint16_t markDuration = duration > UINT16_MAX
                                          ? UINT16_MAX
                                          : static_cast<uint16_t>(duration);
        irsend->mark(markDuration);
        duration -= markDuration;
      }
    }
  }

  irsend->space(0);
  pollControlInputs();
  if (stopRequested) {
    return false;
  }

  uint32_t remainingGapUs = deviceSettings.irSendDelayUs > trailingSpaceUs
                                ? deviceSettings.irSendDelayUs - trailingSpaceUs
                                : 0;
  while (remainingGapUs > 0) {
    const uint32_t gapChunkUs = remainingGapUs > 10000
                                    ? 10000
                                    : remainingGapUs;
    irsend->space(gapChunkUs);
    remainingGapUs -= gapChunkUs;
    pollControlInputs();
    if (stopRequested) {
      return false;
    }
  }
  return true;
}

bool sendExtraIrCode(const IrCodesCustom::ExtraIrCode &code)
{
  if (code.kind == IrCodesCustom::ExtraIrKind::Raw) {
    return sendRawTimings(code.raw, code.length, code.frequency);
  }

  switch (code.kind) {
    case IrCodesCustom::ExtraIrKind::NEC:
    case IrCodesCustom::ExtraIrKind::NECext:
      updateStatusLed();
      irsend->sendNEC(irsend->encodeNEC(code.address, code.command), code.bits, 0);
      updateStatusLed();
      return true;
    case IrCodesCustom::ExtraIrKind::Samsung:
      updateStatusLed();
      irsend->sendSAMSUNG(
          irsend->encodeSAMSUNG(static_cast<uint8_t>(code.address),
                               static_cast<uint8_t>(code.command)),
          code.bits, 0);
      updateStatusLed();
      return true;
    case IrCodesCustom::ExtraIrKind::Sony:
      updateStatusLed();
      irsend->sendSony(
          irsend->encodeSony(code.bits, static_cast<uint16_t>(code.command),
                            static_cast<uint16_t>(code.address)),
          code.bits, 0);
      updateStatusLed();
      return true;
    case IrCodesCustom::ExtraIrKind::RC5: {
      const uint64_t data = code.bits == 13
                                ? irsend->encodeRC5X(static_cast<uint8_t>(code.address),
                                                    static_cast<uint8_t>(code.command))
                                : irsend->encodeRC5(static_cast<uint8_t>(code.address),
                                                   static_cast<uint8_t>(code.command));
      updateStatusLed();
      irsend->sendRC5(data, code.bits, 0);
      updateStatusLed();
      return true;
    }
    case IrCodesCustom::ExtraIrKind::RC6:
      updateStatusLed();
      irsend->sendRC6(irsend->encodeRC6(code.address, static_cast<uint8_t>(code.command)),
                     code.bits, 0);
      updateStatusLed();
      return true;
    case IrCodesCustom::ExtraIrKind::Panasonic: {
      const uint16_t manufacturer = static_cast<uint16_t>((code.address >> 8) & 0xFFFF);
      const uint8_t device = static_cast<uint8_t>(code.address);
      const uint8_t function = static_cast<uint8_t>(code.command);
      const uint8_t subdevice = static_cast<uint8_t>(code.command >> 8);
      updateStatusLed();
      irsend->sendPanasonic64(
          irsend->encodePanasonic(manufacturer, device, subdevice, function),
          code.bits, 0);
      updateStatusLed();
      return true;
    }
    case IrCodesCustom::ExtraIrKind::Pioneer:
      updateStatusLed();
      irsend->sendPioneer(irsend->encodePioneer(
                             static_cast<uint16_t>(code.address),
                             static_cast<uint16_t>(code.command)),
                         code.bits, 0);
      updateStatusLed();
      return true;
    case IrCodesCustom::ExtraIrKind::RCA: {
      const uint64_t data = (static_cast<uint64_t>(code.command & 0xFF) << 4) |
                            (code.address & 0x0F);
      updateStatusLed();
      irsend->sendGeneric(4000, 4000, 500, 1500, 500, 500, 500, 40000,
                         data, code.bits, 38, false, 0, 33);
      updateStatusLed();
      return true;
    }
    case IrCodesCustom::ExtraIrKind::Raw:
      return sendRawTimings(code.raw, code.length, code.frequency);
  }
  return false;
}

void initializeDeviceSettings()
{
  String error;
  if (!AppConfigStore::load(deviceSettings, error)) {
    Serial.printf("ERR: %s\n", languageText(error.c_str()));
    deviceSettings = AppConfigStore::defaults();
  } else if (!error.isEmpty()) {
    Serial.printf("WARN: %s\n", languageText(error.c_str()));
  }

  if (!selectCodeList(deviceSettings.irList)) {
    Serial.println(languageText(
        "ERR: Invalid IR code list; using NA_EU-236.h in RAM."));
    deviceSettings.irList = "NA_EU-236.h";
    selectCodeList(deviceSettings.irList);
  }

  stagedDeviceSettings = deviceSettings;
}

void setup()   
{
  Serial.begin(115200);
  initializeDeviceSettings();
  initializeOtaStatus();

  irsend = new (irsendStorage) IRsend(deviceSettings.irLedPin);
  irsend->begin();
  gpio_set_drive_capability(static_cast<gpio_num_t>(deviceSettings.irLedPin),
                            GPIO_DRIVE_CAP_3);

  pinMode(deviceSettings.ledPin, OUTPUT);
  digitalWrite(deviceSettings.ledPin, LOW);
  pinMode(deviceSettings.buttonPin, INPUT_PULLUP);
  pinMode(deviceSettings.irLedPin, OUTPUT);
  digitalWrite(deviceSettings.irLedPin, LOW);

  beginWebUI();

  delay(50); 
  (void)verifyRollbackLater();
  firmwareValidationStartedAt = millis();
}

void sendAllCodes() 
{
  codesTransmitted = 0;
  stopRequested = false;
  appState = AppState::Running;
  statusLedActive = true;
  statusLedState = false;
  lastStatusLedToggle = millis();
  digitalWrite(deviceSettings.ledPin, LOW);

  const uint16_t baseCodeCount = activeBaseCodeCount();
  const uint16_t extraCodeCount = activeExtraCodeCount();
  num_codes = baseCodeCount + extraCodeCount;
  if (nextCodeIndex >= num_codes) {
    nextCodeIndex = 0;
  }

  for (i=nextCodeIndex; i<num_codes && !stopRequested; i++)
  {
    if (i >= baseCodeCount) {
      const IrCodesCustom::ExtraIrCode *extraCodeAt =
          activeExtraCodeAt(i - baseCodeCount);
      if (extraCodeAt == nullptr) {
        Serial.println(languageText(
            "ERR: Selected IR code list is inconsistent."));
        break;
      }
      const IrCodesCustom::ExtraIrCode &extraCode = *extraCodeAt;
      const uint8_t sendCount = extraCode.repeatTwice ? 2 : 1;
      bool codeComplete = true;
      for (uint8_t repeat = 0; repeat < sendCount && !stopRequested; repeat++) {
        if (!sendExtraIrCode(extraCode)) {
          codeComplete = false;
          break;
        }
      }
      if (!codeComplete) {
        break;
      }
      nextCodeIndex = i + 1;
      codesTransmitted++;
      updateStatusLed();
      if (extraCode.kind != IrCodesCustom::ExtraIrKind::Raw) {
        irsend->space(deviceSettings.irSendDelayUs);
      }
      serialPrintf("%s %lu/%u %s\n",
            languageText("Send"),
            static_cast<unsigned long>(codesTransmitted), num_codes,
            extraCode.label);
      if (digitalRead(deviceSettings.buttonPin) == BUTTON_PRESSED) {
        while (digitalRead(deviceSettings.buttonPin) == BUTTON_PRESSED) {
          yield();
        }
        requestStop();
        break;
      }
      continue;
    }

    const char *codeLabel = "IR code";
    const IrCode *selectedCode = nullptr;
    if (!activeBaseCodeAt(i, selectedCode, codeLabel)) {
      Serial.println(languageText(
          "ERR: Selected IR code list is inconsistent."));
      break;
    }
    powerCode = selectedCode;
    
    const uint8_t freq = powerCode->timer_val;
    const uint16_t numpairs = powerCode->numpairs;
    const uint8_t bitcompression = powerCode->bitcompression;

    // rawData has room for 600 timing pairs.
    // Skip malformed/oversized records instead of corrupting RAM.
    if (numpairs > 600) {
      bitsleft_r = 0;
      code_ptr = 0;
      nextCodeIndex = i + 1;
      yield();
      continue;
    }

    code_ptr = 0;

    bool captureComplete = true;
    for (uint16_t k=0; k<numpairs; k++) {
      pollControlInputs();
      if (stopRequested) {
        captureComplete = false;
        break;
      }

      uint16_t ti = (read_bits(bitcompression)) * 2;

      ontime = powerCode->times[ti];
      offtime = powerCode->times[ti+1];

      // IR_CODES.h stores timings in 10-us units.
      // Preserve the mark, but cap pathological idle gaps from imported RAW
      // captures so the scan cannot spend seconds waiting on one record.
      uint32_t on_us = (uint32_t)ontime * 10UL;
      uint32_t off_us = (uint32_t)offtime * 10UL;
      if (on_us > MAX_IR_GAP_US)  on_us = MAX_IR_GAP_US;
      if (off_us > MAX_IR_GAP_US) off_us = MAX_IR_GAP_US;

      rawData[k * 2]     = on_us;
      rawData[k * 2 + 1] = off_us;
      yield();
    }

    if (!captureComplete ||
        !sendRawTimings(rawData, numpairs * 2, freq)) {
      break;
    }
    updateStatusLed();
    yield();
    nextCodeIndex = i + 1;
    bitsleft_r=0;
    codesTransmitted++;
    serialPrintf("%s %lu/%u %s\n",
            languageText("Send"),
            static_cast<unsigned long>(codesTransmitted), num_codes,
            codeLabel);
    if (digitalRead(deviceSettings.buttonPin) == BUTTON_PRESSED) 
    {
      while (digitalRead(deviceSettings.buttonPin) == BUTTON_PRESSED){
        yield();
      }
      requestStop();
      break; 
    }
  } 

  if (nextCodeIndex >= num_codes) {
    nextCodeIndex = 0;
  }

  appState = AppState::Standby;
  statusLedActive = false;
  statusLedState = false;
  digitalWrite(deviceSettings.ledPin, LOW);
  const bool wasStopped = stopRequested;
  stopRequested = false;
  if (wasStopped) {
    nextCodeIndex = 0;
    codesTransmitted = 0;
    serialPrintf("%s\n", languageText("Stopped TV-B-GONE."));
  } else {
    serialPrintf("%s\n", languageText("Done TV-B-GONE."));
  }
}

void loop() 
{
  pollControlInputs();
  if (!firmwareValidationChecked &&
      millis() - firmwareValidationStartedAt >= 10000) {
    firmwareValidationChecked = true;
    confirmPendingFirmware();
  }
  if (pendingRestart && millis() - pendingRestartAt >= 1000) {
    ESP.restart();
  }

  const bool buttonPressed =
      digitalRead(deviceSettings.buttonPin) == BUTTON_PRESSED;

  if (buttonPressed) {
    if (!buttonWasPressed) {
      buttonWasPressed = true;
    }
  } else if (buttonWasPressed) {
    buttonWasPressed = false;

    if (appState == AppState::Standby) {
      startRequested = true;
    }
  }

  if (appState == AppState::Standby && startRequested) {
    startRequested = false;
    sendAllCodes();
  }

  yield();
}
