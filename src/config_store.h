#pragma once

#include <Arduino.h>
#include <LittleFS.h>
#include <stdlib.h>

namespace AppConfigStore {

static constexpr char CONFIG_PATH[] = "/config.conf";

struct Settings {
  String deviceLang;
  String webUiApName;
  String webUiApPassword;
  String webUiTheme;
  String webUiMode;
  uint32_t irSendDelayUs;
  String irList;
  uint8_t irLedPin;
  uint8_t buttonPin;
  uint8_t ledPin;
};

struct ThemeOption {
  const char *id;
  const char *label;
  const char *lightStyle;
  const char *darkStyle;
  const char *legacyMode;
};

static constexpr ThemeOption WEB_UI_THEMES[] = {
    {"lavender", "Lavender", "lavender", "lavender-dark", "light"},
    {"graphite", "Graphite", "graphite-light", "graphite", "dark"},
    {"ocean-mist", "Ocean Mist", "ocean-mist", "ocean-mist-dark", "light"},
    {"warm-sand", "Warm Sand", "warm-sand", "warm-sand-dark", "light"},
    {"rose-pink", "Rose Pink", "rose-pink", "rose-pink-dark", "light"},
    {"mint", "Mint", "mint", "mint-dark", "light"},
    {"indigo", "Indigo", "indigo-light", "indigo", "dark"},
    {"amber", "Amber", "amber-light", "amber", "dark"},
    {"champagne", "Champagne", "champagne-light", "champagne-dark", "dark"},
    {"mocha", "Mocha", "mocha-light", "mocha-dark", "dark"},
    {"forest", "Forest", "forest-light", "forest-dark", "dark"},
    {"burgundy", "Burgundy", "burgundy-light", "burgundy-dark", "dark"},
    {"cyber-cyan", "Cyber Cyan", "cyber-cyan-light", "cyber-cyan", "dark"},
    {"neon-purple", "Neon Purple", "neon-purple-light", "neon-purple", "dark"},
    {"arctic-blue", "Arctic Blue", "arctic-blue", "arctic-blue-dark", "light"},
    {"sunset", "Sunset", "sunset-light", "sunset", "dark"},
    {"electric-lime", "Electric Lime", "electric-lime-light", "electric-lime", "dark"},
    {"midnight", "Midnight", "midnight-light", "midnight", "dark"},
    {"titanium", "Titanium", "titanium-light", "titanium", "dark"},
};

inline bool isTheme(const String &value)
{
  for (const ThemeOption &theme : WEB_UI_THEMES) {
    if (value == theme.id) {
      return true;
    }
  }
  return false;
}

inline bool isThemeMode(const String &value)
{
  return value == "light" || value == "dark";
}

inline String themeStyle(const String &theme, const String &mode)
{
  for (const ThemeOption &option : WEB_UI_THEMES) {
    if (theme == option.id) {
      return mode == "light" ? option.lightStyle : option.darkStyle;
    }
  }
  return "midnight";
}

inline String normalizeTheme(const String &value, String &inferredMode)
{
  if (value == "dark") {
    inferredMode = "dark";
    return "midnight";
  }
  if (value == "light") {
    inferredMode = "light";
    return "ocean-mist";
  }

  const int separator = value.lastIndexOf('-');
  if (separator > 0) {
    const String suffix = value.substring(separator + 1);
    const String base = value.substring(0, separator);
    if (isTheme(base) && isThemeMode(suffix)) {
      inferredMode = suffix;
      return base;
    }
  }

  for (const ThemeOption &option : WEB_UI_THEMES) {
    if (value == option.id) {
      inferredMode = option.legacyMode;
      return value;
    }
  }
  return value;
}

inline Settings defaults()
{
  return {
      "vi", "TV-B-GONE", "", "midnight", "dark", 2000, "NA_EU-236.h",
      21, 9, 8};
}

inline String quote(const String &value)
{
  String result = "\"";
  for (size_t i = 0; i < value.length(); i++) {
    const char character = value[i];
    if (character == '\\' || character == '"') {
      result += '\\';
    }
    result += character;
  }
  result += '"';
  return result;
}

inline String serialize(const Settings &settings)
{
  String text;
  text.reserve(640);
  text += "---tv-b-gone--config---\nsettings {\n";
  text += "   devicelang : " + quote(settings.deviceLang) + "\n";
  text += "   webuiapname : " + quote(settings.webUiApName) + "\n";
  text += "   webuiappassword : " + quote(settings.webUiApPassword) + "\n";
  text += "   webuitheme : " + quote(settings.webUiTheme) + "\n";
  text += "   webuimode : " + quote(settings.webUiMode) + "\n";
  text += "   irsenddelay : " + quote(String(settings.irSendDelayUs) + "us") + "\n";
  text += "   irlist : " + quote(settings.irList) + "\n";
  text += "}\ngpio config {\n";
  text += "   irled : " + quote(String(settings.irLedPin)) + "\n";
  text += "   button : " + quote(String(settings.buttonPin)) + "\n";
  text += "   led : " + quote(String(settings.ledPin)) + "\n";
  text += "}\n";
  return text;
}

inline bool save(const Settings &settings, String &error)
{
  File file = LittleFS.open(CONFIG_PATH, "w");
  if (!file) {
    error = "Cannot open config.conf for writing.";
    return false;
  }

  const String text = serialize(settings);
  const size_t written = file.print(text);
  file.flush();
  file.close();
  if (written != text.length()) {
    error = "Could not write the complete config.conf file.";
    return false;
  }
  return true;
}

inline String cleanConfigLine(String line)
{
  bool quoted = false;
  bool escaped = false;
  for (size_t i = 0; i + 1 < line.length(); i++) {
    const char character = line[i];
    if (escaped) {
      escaped = false;
    } else if (character == '\\' && quoted) {
      escaped = true;
    } else if (character == '"') {
      quoted = !quoted;
    } else if (!quoted && character == '/' && line[i + 1] == '/') {
      line.remove(i);
      break;
    }
  }
  line.trim();
  return line;
}

inline bool parseValue(String value, String &result)
{
  value.trim();
  if (value.length() < 2 || value[0] != '"') {
    result = value;
    return true;
  }
  if (value[value.length() - 1] != '"') {
    return false;
  }

  result = "";
  for (size_t i = 1; i + 1 < value.length(); i++) {
    if (value[i] == '\\') {
      if (i + 1 >= value.length() - 1) {
        return false;
      }
      i++;
    }
    result += value[i];
  }
  return true;
}

inline bool parseUnsigned(String value, uint32_t maxValue, uint32_t &result,
                          bool allowMicrosecondsSuffix = false)
{
  value.trim();
  if (allowMicrosecondsSuffix && value.endsWith("us")) {
    value.remove(value.length() - 2);
    value.trim();
  }
  if (value.isEmpty()) {
    return false;
  }

  char *end = nullptr;
  const unsigned long parsed = strtoul(value.c_str(), &end, 10);
  if (end == value.c_str() || *end != '\0' || parsed > maxValue) {
    return false;
  }
  result = static_cast<uint32_t>(parsed);
  return true;
}

inline bool hasControlCharacters(const String &value)
{
  for (size_t i = 0; i < value.length(); i++) {
    if (static_cast<uint8_t>(value[i]) < 0x20 ||
        static_cast<uint8_t>(value[i]) == 0x7F) {
      return true;
    }
  }
  return false;
}

inline bool parseFile(File &file, Settings &settings, String &error)
{
  bool explicitThemeMode = false;
  while (file.available()) {
    String line = cleanConfigLine(file.readStringUntil('\n'));
    if (line.isEmpty() || line == "}" || line.endsWith("{")) {
      continue;
    }

    const int separator = line.indexOf(':');
    if (separator < 0) {
      continue;
    }
    String key = line.substring(0, separator);
    String value;
    key.trim();
    key.toLowerCase();
    if (!parseValue(line.substring(separator + 1), value)) {
      error = "Malformed quoted value in config.conf.";
      return false;
    }

    uint32_t number = 0;
    if (key == "devicelang") settings.deviceLang = value;
    else if (key == "webuiapname") settings.webUiApName = value;
    else if (key == "webuiappassword") settings.webUiApPassword = value;
    else if (key == "webuitheme") {
      String inferredMode;
      settings.webUiTheme = normalizeTheme(value, inferredMode);
      if (!explicitThemeMode && !inferredMode.isEmpty()) {
        settings.webUiMode = inferredMode;
      }
    } else if (key == "webuimode") {
      settings.webUiMode = value;
      explicitThemeMode = true;
    }
    else if (key == "irsenddelay") {
      if (!parseUnsigned(value, 1000000, number, true)) {
        error = "Invalid irsenddelay in config.conf.";
        return false;
      }
      settings.irSendDelayUs = number;
    } else if (key == "irlist") settings.irList = value;
    else if (key == "irled" || key == "button" || key == "led") {
      if (!parseUnsigned(value, 21, number)) {
        error = "GPIO values must be between 0 and 21.";
        return false;
      }
      if (key == "irled") settings.irLedPin = static_cast<uint8_t>(number);
      else if (key == "button") settings.buttonPin = static_cast<uint8_t>(number);
      else settings.ledPin = static_cast<uint8_t>(number);
    }
  }
  return true;
}

inline bool validEditableSettings(const Settings &settings, String &error)
{
  const bool validLanguage =
      settings.deviceLang == "en" || settings.deviceLang == "vi" ||
      settings.deviceLang == "ru" || settings.deviceLang == "ja" ||
      settings.deviceLang == "ko" || settings.deviceLang == "zh";
  if (!validLanguage) {
    error = "Unsupported device language.";
    return false;
  }
  if (settings.webUiApName.isEmpty() || settings.webUiApName.length() > 32) {
    error = "Wi-Fi AP name must contain 1 to 32 characters.";
    return false;
  }
  if (hasControlCharacters(settings.webUiApName) ||
      hasControlCharacters(settings.webUiApPassword)) {
    error = "Wi-Fi settings cannot contain control characters.";
    return false;
  }
  if (!settings.webUiApPassword.isEmpty() &&
      (settings.webUiApPassword.length() < 8 ||
       settings.webUiApPassword.length() > 63)) {
    error = "Wi-Fi AP password must be empty or 8 to 63 characters.";
    return false;
  }
  if (!isTheme(settings.webUiTheme)) {
    error = "Unknown Web UI theme.";
    return false;
  }
  if (!isThemeMode(settings.webUiMode)) {
    error = "Theme mode must be light or dark.";
    return false;
  }
  if (settings.irSendDelayUs > 1000000) {
    error = "IR delay must be between 0 and 1000000 microseconds.";
    return false;
  }
  if (settings.irList != "NA_EU-236.h" &&
      settings.irList != "NA_ONLY-137.h" &&
      settings.irList != "EU_ONLY-139.h" &&
      settings.irList != "CUSTOM_CODES-1245.h" &&
      settings.irList != "CUSTOM_CODES-675.h" &&
      settings.irList != "AC_POWER-209.h" &&
      settings.irList != "ALL") {
    error = "Unknown IR code list.";
    return false;
  }
  if (settings.irLedPin > 21 || settings.buttonPin > 21 ||
      settings.ledPin > 21 || settings.irLedPin == settings.buttonPin ||
      settings.irLedPin == settings.ledPin ||
      settings.buttonPin == settings.ledPin) {
    error = "GPIO pins must be distinct values between 0 and 21.";
    return false;
  }
  return true;
}

inline bool load(Settings &settings, String &error)
{
  if (!LittleFS.begin(true, "/littlefs", 10, "littlefs")) {
    error = "LittleFS mount failed.";
    return false;
  }

  if (!LittleFS.exists(CONFIG_PATH)) {
    settings = defaults();
    return save(settings, error);
  }

  File file = LittleFS.open(CONFIG_PATH, "r");
  if (!file) {
    error = "Cannot open config.conf for reading.";
    return false;
  }

  settings = defaults();
  const bool parsed = parseFile(file, settings, error);
  file.close();
  if (!parsed) {
    return false;
  }

  const Settings fallback = defaults();
  if (settings.deviceLang != "en" && settings.deviceLang != "vi" &&
      settings.deviceLang != "ru" && settings.deviceLang != "ja" &&
      settings.deviceLang != "ko" && settings.deviceLang != "zh") {
    settings.deviceLang = fallback.deviceLang;
    error = "Invalid device language; using vi in RAM.";
  }
  if (!isTheme(settings.webUiTheme)) {
    settings.webUiTheme = fallback.webUiTheme;
    error = "Invalid theme; using Midnight in RAM.";
  }
  if (!isThemeMode(settings.webUiMode)) {
    settings.webUiMode = fallback.webUiMode;
    error = "Invalid theme mode; using dark in RAM.";
  }
  if (settings.irList != "NA_EU-236.h" &&
      settings.irList != "NA_ONLY-137.h" &&
      settings.irList != "EU_ONLY-139.h" &&
      settings.irList != "CUSTOM_CODES-1245.h" &&
      settings.irList != "CUSTOM_CODES-675.h" &&
      settings.irList != "AC_POWER-209.h" &&
      settings.irList != "ALL") {
    settings.irList = fallback.irList;
    error = "Invalid irlist; using NA_EU-236.h in RAM.";
  }
  if (settings.webUiApName.isEmpty() || settings.webUiApName.length() > 32) {
    settings.webUiApName = fallback.webUiApName;
    error = "Invalid AP name; using default in RAM.";
  }
  if (!settings.webUiApPassword.isEmpty() &&
      (settings.webUiApPassword.length() < 8 ||
       settings.webUiApPassword.length() > 63)) {
    settings.webUiApPassword = fallback.webUiApPassword;
    error = "Invalid AP password; using default in RAM.";
  }
  if (settings.irSendDelayUs > 1000000) {
    settings.irSendDelayUs = fallback.irSendDelayUs;
    error = "Invalid IR delay; using default in RAM.";
  }
  if (settings.irLedPin > 21 || settings.buttonPin > 21 ||
      settings.ledPin > 21 || settings.irLedPin == settings.buttonPin ||
      settings.irLedPin == settings.ledPin ||
      settings.buttonPin == settings.ledPin) {
    settings.irLedPin = fallback.irLedPin;
    settings.buttonPin = fallback.buttonPin;
    settings.ledPin = fallback.ledPin;
    error = "Invalid GPIO settings; using defaults in RAM.";
  }

  return true;
}

}  // namespace AppConfigStore
