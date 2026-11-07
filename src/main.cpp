#include <Arduino.h>
#include <BLEDevice.h>
#include <Update.h>
#include <esp_system.h>
#include <esp_ota_ops.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/queue.h>
#include "IR_CODES.h"  
#include "driver/gpio.h" 
uint8_t read_bits(uint8_t count);
uint32_t rawData[1200];

static constexpr char BLE_DEVICE_NAME[] = "TV-B-GONE BLE";
static constexpr char BLE_UART_SERVICE_UUID[] = "6e400001-b5a3-f393-e0a9-e50e24dcca9e";
static constexpr char BLE_UART_RX_UUID[] = "6e400002-b5a3-f393-e0a9-e50e24dcca9e";
static constexpr char BLE_UART_TX_UUID[] = "6e400003-b5a3-f393-e0a9-e50e24dcca9e";
static constexpr size_t BLE_NOTIFICATION_CHUNK_SIZE = 20;
static constexpr size_t COMMAND_BUFFER_SIZE = 32;

BLEServer *bleServer = nullptr;
BLECharacteristic *bleTxCharacteristic = nullptr;
QueueHandle_t bleRxQueue = nullptr;
volatile bool bleRxOverflow = false;

struct CommandParser {
  char buffer[COMMAND_BUFFER_SIZE] = {};
  size_t length = 0;
  bool overflow = false;
};

CommandParser uartCommandParser;
CommandParser bleCommandParser;
bool startRequested = false;
bool stopRequested = false;
uint16_t nextCodeIndex = 0;

void pollControlInputs();

class BleUartRxCallbacks : public BLECharacteristicCallbacks
{
  void onWrite(BLECharacteristic *characteristic) override
  {
    if (bleRxQueue == nullptr) {
      bleRxOverflow = true;
      return;
    }

    const String value = characteristic->getValue();
    for (size_t i = 0; i < value.length(); i++) {
      const uint8_t byte = static_cast<uint8_t>(value[i]);
      if (xQueueSend(bleRxQueue, &byte, 0) != pdTRUE) {
        bleRxOverflow = true;
        return;
      }
    }
    if (value.length() > 0 && value[value.length() - 1] != '\n') {
      const uint8_t newline = '\n';
      if (xQueueSend(bleRxQueue, &newline, 0) != pdTRUE) {
        bleRxOverflow = true;
      }
    }
  }
};

class BleUartServerCallbacks : public BLEServerCallbacks
{
  void onDisconnect(BLEServer *server) override
  {
    server->startAdvertising();
  }
};

void notifyBleUart(const char *message)
{
  if (bleTxCharacteristic == nullptr || bleServer == nullptr ||
      bleServer->getConnectedCount() == 0) {
    return;
  }

  const size_t messageLength = strlen(message);
  for (size_t offset = 0; offset < messageLength;) {
    size_t chunkLength = messageLength - offset;
    if (chunkLength > BLE_NOTIFICATION_CHUNK_SIZE) {
      chunkLength = BLE_NOTIFICATION_CHUNK_SIZE;
      while (chunkLength > 0 &&
             (static_cast<uint8_t>(message[offset + chunkLength]) & 0xC0) == 0x80) {
        chunkLength--;
      }
    }

    bleTxCharacteristic->setValue(
        reinterpret_cast<const uint8_t *>(message + offset), chunkLength);
    bleTxCharacteristic->notify();
    offset += chunkLength;
  }
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
  notifyBleUart(message);
}

// BLE OTA: write "SIZE:<firmware_size>" to the OTA characteristic,
// then write the firmware as raw binary chunks. Device reboots on completion.
static constexpr char BLE_OTA_SERVICE_UUID[] = "9e8c0001-7b5a-4d3c-9a2e-6f1b0c8d0001";
static constexpr char BLE_OTA_DATA_UUID[]    = "9e8c0002-7b5a-4d3c-9a2e-6f1b0c8d0001";

class BleOtaCallbacks : public BLECharacteristicCallbacks {
  bool receiving = false;
  size_t expectedSize = 0;
  size_t receivedSize = 0;

  void onWrite(BLECharacteristic *characteristic) override {
    String value = characteristic->getValue();
    // Header packet: ASCII SIZE:<decimal byte count>
    if (!receiving && value.startsWith("SIZE:")) {
      const char *sizeText = value.c_str() + 5;
      char *end = nullptr;
      const unsigned long parsed = strtoul(sizeText, &end, 10);
      if (end == sizeText || *end != '\0' || parsed == 0) {
        Serial.println("BLE OTA: invalid SIZE header.");
        return;
      }

      if (!Update.begin(static_cast<size_t>(parsed), U_FLASH)) {
        Serial.printf("BLE OTA: Update.begin failed (%u).\n", Update.getError());
        return;
      }

      expectedSize = static_cast<size_t>(parsed);
      receivedSize = 0;
      receiving = true;
      Serial.printf("BLE OTA: receiving %u bytes.\n",
                    static_cast<unsigned>(expectedSize));
      return;
    }

    if (!receiving) {
      Serial.println("BLE OTA: send SIZE:<bytes> first.");
      return;
    }

    if (receivedSize + value.length() > expectedSize) {
      Update.abort();
      receiving = false;
      Serial.println("BLE OTA: data exceeds declared size; aborted.");
      return;
    }

    const size_t written = Update.write(
      reinterpret_cast<uint8_t *>(const_cast<char *>(value.c_str())),
      value.length());
    if (written != value.length()) {
      Update.abort();
      receiving = false;
      Serial.println("BLE OTA: flash write failed; aborted.");
      return;
    }

    receivedSize += written;
    if (receivedSize == expectedSize) {
      if (Update.end(true)) {
        Serial.println("BLE OTA: complete; rebooting.");
        delay(250);
        ESP.restart();
      } else {
        Serial.printf("BLE OTA: finalization failed (%u).\n", Update.getError());
        receiving = false;
      }
    }
  }
};

void beginBleUart()
{
  BLEDevice::init(BLE_DEVICE_NAME);
  bleServer = BLEDevice::createServer();
  bleServer->setCallbacks(new BleUartServerCallbacks());

  BLEService *service = bleServer->createService(BLE_UART_SERVICE_UUID);
  bleTxCharacteristic = service->createCharacteristic(
      BLE_UART_TX_UUID, BLECharacteristic::PROPERTY_NOTIFY);

  BLECharacteristic *rxCharacteristic = service->createCharacteristic(
      BLE_UART_RX_UUID,
      BLECharacteristic::PROPERTY_WRITE | BLECharacteristic::PROPERTY_WRITE_NR);
  rxCharacteristic->setCallbacks(new BleUartRxCallbacks());

  service->start();

  BLEService *otaService = bleServer->createService(BLE_OTA_SERVICE_UUID);
  BLECharacteristic *otaCharacteristic = otaService->createCharacteristic(
      BLE_OTA_DATA_UUID,
      BLECharacteristic::PROPERTY_WRITE | BLECharacteristic::PROPERTY_WRITE_NR);
  otaCharacteristic->setCallbacks(new BleOtaCallbacks());
  otaService->start();

  BLEAdvertising *advertising = BLEDevice::getAdvertising();
  advertising->addServiceUUID(BLE_UART_SERVICE_UUID);
  advertising->addServiceUUID(BLE_OTA_SERVICE_UUID);
  advertising->setScanResponse(true);
  BLEDevice::startAdvertising();
}

// 25Imported RAW captures can contain very long idle gaps.  Keep those gaps
// bounded so one bad/huge capture cannot stall the whole TV-B-Gone scan.
#define MAX_IR_GAP_US 120000UL
#define MIN_IR_INTER_CODE_GAP_US 1500UL

IRsend irsend(IRLED);
bool statusLedActive = false;
bool statusLedState = false;
uint32_t lastStatusLedToggle = 0;

void updateStatusLed()
{
  pollControlInputs();

  const uint32_t now = millis();
  if (statusLedActive && now - lastStatusLedToggle >= 25) {
    statusLedState = !statusLedState;
    digitalWrite(LED, statusLedState ? HIGH : LOW);
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

void handleCommand(const char *command)
{
  if (strcmp(command, "start") == 0) {
    if (appState == AppState::Running) {
      serialPrintf("TV-B-GONE is running.\n");
    } else if (startRequested) {
      serialPrintf("Start command has been received.\n");
    } else {
      startRequested = true;
      serialPrintf("Starting TV-B-GONE.\n");
    }
    return;
  }

  if (strcmp(command, "stop") == 0) {
    requestStop();
    if (appState == AppState::Running) {
      serialPrintf("Stop command has been received.\n");
    } else if (startRequested) {
      startRequested = false;
      serialPrintf("Start command has been cancelled.\n");
    } else {
      serialPrintf("TV-B-GONE is stopping.\n");
    }
    return;
  }

  serialPrintf("Invalid command. Send start or stop.\n");
}

void processCommandByte(CommandParser &parser, uint8_t byte)
{
  if (byte == '\r') {
    return;
  }

  if (byte == '\n') {
    if (parser.overflow) {
      serialPrintf("Command too long, send start or stop.\n");
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
      for (size_t i = start; i < parser.length; i++) {
        parser.buffer[i] = static_cast<char>(
            tolower(static_cast<unsigned char>(parser.buffer[i])));
      }
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
  while (Serial.available() > 0) {
    processCommandByte(uartCommandParser, static_cast<uint8_t>(Serial.read()));
  }

  if (bleRxOverflow) {
    bleRxOverflow = false;
    if (bleRxQueue != nullptr) {
      xQueueReset(bleRxQueue);
    }
    bleCommandParser.length = 0;
    bleCommandParser.overflow = false;
    serialPrintf("ERR: BLE RX overflow.\n");
  }

  if (bleRxQueue != nullptr) {
    uint8_t byte;
    while (xQueueReceive(bleRxQueue, &byte, 0) == pdTRUE) {
      processCommandByte(bleCommandParser, byte);
    }
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

bool sendRawTimings(const uint32_t *timings, uint16_t length, uint16_t frequency)
{
  irsend.enableIROut(frequency);
  uint32_t trailingSpaceUs = 0;

  for (uint16_t timing = 0; timing < length; timing++) {
    pollControlInputs();
    if (stopRequested) {
      break;
    }

    uint32_t duration = timings[timing];
    if (timing & 1) {
      if (duration > MAX_IR_GAP_US) {
        duration = MAX_IR_GAP_US;
      }
      updateStatusLed();
      irsend.space(duration);
      pollControlInputs();
      if (timing == length - 1) {
        trailingSpaceUs = duration;
      }
    } else {
      while (duration > 0) {
        const uint16_t markDuration = duration > UINT16_MAX
                                          ? UINT16_MAX
                                          : static_cast<uint16_t>(duration);
        updateStatusLed();
        irsend.mark(markDuration);
        pollControlInputs();
        if (stopRequested) {
          break;
        }
        duration -= markDuration;
      }
    }
  }

  irsend.space(0);
  if (stopRequested) {
    return false;
  }

  if (trailingSpaceUs < MIN_IR_INTER_CODE_GAP_US) {
    irsend.space(MIN_IR_INTER_CODE_GAP_US - trailingSpaceUs);
  }
  return true;
}

bool sendExtraIrCode(const ExtraIrCode &code)
{
  if (code.kind == ExtraIrKind::Raw) {
    return sendRawTimings(code.raw, code.length, code.frequency);
  }

  switch (code.kind) {
    case ExtraIrKind::NEC:
    case ExtraIrKind::NECext:
      updateStatusLed();
      irsend.sendNEC(irsend.encodeNEC(code.address, code.command), code.bits, 0);
      updateStatusLed();
      return true;
    case ExtraIrKind::Samsung:
      updateStatusLed();
      irsend.sendSAMSUNG(
          irsend.encodeSAMSUNG(static_cast<uint8_t>(code.address),
                               static_cast<uint8_t>(code.command)),
          code.bits, 0);
      updateStatusLed();
      return true;
    case ExtraIrKind::Sony:
      updateStatusLed();
      irsend.sendSony(
          irsend.encodeSony(code.bits, static_cast<uint16_t>(code.command),
                            static_cast<uint16_t>(code.address)),
          code.bits, 0);
      updateStatusLed();
      return true;
    case ExtraIrKind::RC5: {
      const uint64_t data = code.bits == 13
                                ? irsend.encodeRC5X(static_cast<uint8_t>(code.address),
                                                    static_cast<uint8_t>(code.command))
                                : irsend.encodeRC5(static_cast<uint8_t>(code.address),
                                                   static_cast<uint8_t>(code.command));
      updateStatusLed();
      irsend.sendRC5(data, code.bits, 0);
      updateStatusLed();
      return true;
    }
    case ExtraIrKind::RC6:
      updateStatusLed();
      irsend.sendRC6(irsend.encodeRC6(code.address, static_cast<uint8_t>(code.command)),
                     code.bits, 0);
      updateStatusLed();
      return true;
    case ExtraIrKind::Panasonic: {
      const uint16_t manufacturer = static_cast<uint16_t>((code.address >> 8) & 0xFFFF);
      const uint8_t device = static_cast<uint8_t>(code.address);
      const uint8_t function = static_cast<uint8_t>(code.command);
      const uint8_t subdevice = static_cast<uint8_t>(code.command >> 8);
      updateStatusLed();
      irsend.sendPanasonic64(
          irsend.encodePanasonic(manufacturer, device, subdevice, function),
          code.bits, 0);
      updateStatusLed();
      return true;
    }
    case ExtraIrKind::Pioneer:
      updateStatusLed();
      irsend.sendPioneer(irsend.encodePioneer(
                             static_cast<uint16_t>(code.address),
                             static_cast<uint16_t>(code.command)),
                         code.bits, 0);
      updateStatusLed();
      return true;
    case ExtraIrKind::RCA: {
      const uint64_t data = (static_cast<uint64_t>(code.command & 0xFF) << 4) |
                            (code.address & 0x0F);
      updateStatusLed();
      irsend.sendGeneric(4000, 4000, 500, 1500, 500, 500, 500, 40000,
                         data, code.bits, 38, false, 0, 33);
      updateStatusLed();
      return true;
    }
    case ExtraIrKind::Raw:
      return sendRawTimings(code.raw, code.length, code.frequency);
  }
  return false;
}

// Mark an OTA image valid only after the application has run normally for a grace period.
static constexpr uint32_t OTA_BOOT_VALIDATION_MS = 15000;
static uint32_t otaBootStartedAt = 0;
static bool otaBootValidationDone = false;

void validateOtaBootIfReady()
{
  if (otaBootValidationDone || millis() - otaBootStartedAt < OTA_BOOT_VALIDATION_MS) {
    return;
  }

  otaBootValidationDone = true;
  const esp_partition_t *running = esp_ota_get_running_partition();
  if (running == nullptr) {
    Serial.println("ERR: OTA rollback: cannot identify running partition.");
    return;
  }

  esp_ota_img_states_t imageState;
  const esp_err_t stateResult = esp_ota_get_state_partition(running, &imageState);
  if (stateResult != ESP_OK) {
    Serial.printf("OTA rollback: image state unavailable (%s). Check rollback-enabled bootloader config.\n",
                  esp_err_to_name(stateResult));
    return;
  }

  if (imageState == ESP_OTA_IMG_PENDING_VERIFY) {
    const esp_err_t result = esp_ota_mark_app_valid_cancel_rollback();
    if (result == ESP_OK) {
      Serial.println("OTA: new firmware passed 15-second boot check; marked valid.");
    } else {
      Serial.printf("ERR: OTA: failed to mark firmware valid (%s).\n", esp_err_to_name(result));
    }
  }
}

void setup()   
{
  irsend.begin();
  Serial.begin(115200);
  otaBootStartedAt = millis();
  Serial.println("Boot: BLE OTA rollback validation armed (15 seconds).");
  gpio_set_drive_capability(GPIO_NUM_21, GPIO_DRIVE_CAP_3);
  bleRxQueue = xQueueCreate(256, sizeof(uint8_t));
  if (bleRxQueue == nullptr) {
    Serial.println("ERR: Cannot create BLE RX queue, BLE commands will be lost.\n");
  }
  beginBleUart();

  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  pinMode(TRIGGER, INPUT_PULLUP);
  pinMode(IRLED, OUTPUT);
  digitalWrite(IRLED, LOW);

  delay(50); 
}

void sendAllCodes() 
{
  codesTransmitted = 0;
  stopRequested = false;
  appState = AppState::Running;
  statusLedActive = true;
  statusLedState = false;
  lastStatusLedToggle = millis();
  digitalWrite(LED, LOW);

  num_codes = num_NAcodes + numExtraIrCodes;
  if (nextCodeIndex >= num_codes) {
    nextCodeIndex = 0;
  }

  for (i=nextCodeIndex; i<num_codes && !stopRequested; i++)
  {
    if (i >= num_NAcodes) {
      const ExtraIrCode &extraCode = extraIrCodes[i - num_NAcodes];
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
      serialPrintf("Send %lu/%u \n",
            static_cast<unsigned long>(codesTransmitted), num_codes,
            extraCode.label);
      if (digitalRead(TRIGGER) == BUTTON_PRESSED) {
        while (digitalRead(TRIGGER) == BUTTON_PRESSED) {
          yield();
        }
        requestStop();
        break;
      }
      continue;
    }

    const uint16_t legacyIndex = naShuffledIndex(i);
    powerCode = NApowerCodes[legacyIndex];
    
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
    serialPrintf("Send %lu/%u \n",
            static_cast<unsigned long>(codesTransmitted), num_codes,
            naFormatForIndex(legacyIndex));
    if (digitalRead(TRIGGER) == BUTTON_PRESSED) 
    {
      while (digitalRead(TRIGGER) == BUTTON_PRESSED){
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
  digitalWrite(LED, LOW);
  const bool wasStopped = stopRequested;
  stopRequested = false;
  if (wasStopped) {
    nextCodeIndex = 0;
    serialPrintf("Stop TV-B-GONE.\n",
                 static_cast<unsigned long>(codesTransmitted));
  } else {
    serialPrintf("Done TV-B-GONE.\n");
  }
}

void loop() 
{
  validateOtaBootIfReady();
  pollControlInputs();
  const bool buttonPressed = digitalRead(TRIGGER) == BUTTON_PRESSED;

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
