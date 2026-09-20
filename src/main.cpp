#include <Arduino.h>
//#include "IR_CODES-505.h"     // 505 mã
//#include "IR_CODES-541.h"     // 541 mã 
//#include "IR_CODES-863.h"     // 863 mã
#include "IR_CODES-1517.h"      // 1517 mã
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <esp_system.h>

void xmitCodeElement(uint16_t ontime, uint16_t offtime, uint8_t PWM_code );
void quickflashLEDx( uint8_t x );
void delay_ten_us(uint16_t us);
void quickflashLED( void );
uint8_t read_bits(uint8_t count);
uint16_t rawData[1600];

#define WAIT_TIME 65535
// Imported RAW captures can contain very long idle gaps.  Keep those gaps
// bounded so one bad/huge capture cannot stall the whole TV-B-Gone scan.
#define MAX_IR_GAP_US 120000UL
 

IRsend irsend(IRLED);  

uint8_t bitsleft_r = 0;
uint8_t bits_r=0;
uint16_t code_ptr;
volatile const IrCode * powerCode;
bool isTransmitting = false;
bool jammerEnabled = true; 
bool buttonWasPressed = false;
bool stopRequested = false;
unsigned long buttonPressedAt = 0;
unsigned long nextJammerTransmit = 0;

const uint8_t JAMMER_MIN_PAIRS = 12;
const uint8_t JAMMER_MAX_PAIRS = 36;
const uint16_t JAMMER_MIN_MARK_US = 700;
const uint16_t JAMMER_MAX_MARK_US = 1100;
const uint16_t JAMMER_MIN_SPACE_US = 700;
const uint16_t JAMMER_MAX_SPACE_US = 1100;
const uint16_t JAMMER_MIN_GAP_MS = 15;
const uint16_t JAMMER_MAX_GAP_MS = 25;
uint16_t jammerRawData[JAMMER_MAX_PAIRS * 2];

uint8_t createRandomJammerCode()
{
  const uint8_t pairCount = random(JAMMER_MIN_PAIRS, JAMMER_MAX_PAIRS + 1);

  for (uint8_t pair = 0; pair < pairCount; pair++) {
    jammerRawData[pair * 2] = random(JAMMER_MIN_MARK_US, JAMMER_MAX_MARK_US + 1);
    jammerRawData[(pair * 2) + 1] = random(JAMMER_MIN_SPACE_US, JAMMER_MAX_SPACE_US + 1);
  }

  return pairCount;
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
#define BUTTON_RELEASED HIGH

uint16_t ontime, offtime;
uint16_t i,num_codes;
uint16_t nextCodeIndex = 0;
uint32_t codesTransmitted = 0;

void setup()   
{
  randomSeed(esp_random());
  irsend.begin();
  Serial.begin(115200);

  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW); 
  pinMode(TRIGGER, INPUT_PULLUP);

  delay(10); 
}

void runIrJammer()
{
  if (jammerEnabled && !isTransmitting) {
    if (static_cast<long>(millis() - nextJammerTransmit) >= 0) {
      const uint8_t pairCount = createRandomJammerCode();

      irsend.sendRaw(jammerRawData, pairCount * 2, random(36000, 41001));
      yield();
      nextJammerTransmit = millis() + random(JAMMER_MIN_GAP_MS, JAMMER_MAX_GAP_MS + 1);
    }
    digitalWrite(LED, LOW); 
  }
}

void sendAllCodes() 
{
  bool endingEarly = false; 
  stopRequested = false;
  isTransmitting = true;
  digitalWrite(LED, HIGH); 

  num_codes = num_NAcodes;
  if (nextCodeIndex >= num_codes) {
    nextCodeIndex = 0;
  }

  for (i=nextCodeIndex ; i<num_codes && !stopRequested; i++) 
  {
    powerCode = NApowerCodes[naShuffledIndex(i)];
    
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

    for (uint16_t k=0; k<numpairs; k++) {
      if (stopRequested) {
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

      rawData[k * 2]     = (uint16_t)on_us;
      rawData[k * 2 + 1] = (uint16_t)off_us;
      yield();
    }

    if (stopRequested) {
      break;
    }

    irsend.sendRaw(rawData, (numpairs*2) , freq);
    yield();
    nextCodeIndex = i + 1;
    bitsleft_r=0;
    codesTransmitted++;
    Serial.printf("TV-B-GONE mã %lu | index=%u | loại: %s\n",
                  codesTransmitted, naShuffledIndex(i), naFormatForIndex(naShuffledIndex(i)));

    quickflashLED();
    
    delay(2);

    if (stopRequested || digitalRead(TRIGGER) == BUTTON_PRESSED) 
    {
      if (!stopRequested) {
        while (digitalRead(TRIGGER) == BUTTON_PRESSED){
          yield();
        }
      }
      endingEarly = true;
      if (!stopRequested) {
        delay(25); 
        quickflashLEDx(3);
        delay_ten_us(WAIT_TIME); 
        delay_ten_us(WAIT_TIME); 
      }
      break; 
    }
  } 

  if (endingEarly == false && !stopRequested)
  {
    nextCodeIndex = 0;
    delay_ten_us(WAIT_TIME); 
    delay_ten_us(WAIT_TIME); 
    quickflashLEDx(5);
  }

  isTransmitting = false;
  jammerEnabled = true;
  Serial.printf("Đã xong TV-B-GONE %lu\n", codesTransmitted);
  Serial.flush();
  digitalWrite(LED, LOW);
}

void loop() 
{
  const bool buttonPressed = digitalRead(TRIGGER) == BUTTON_PRESSED;

  if (buttonPressed) {
    if (!buttonWasPressed) {
      buttonWasPressed = true;
      buttonPressedAt = millis();
    }
  } else if (buttonWasPressed) {
    buttonWasPressed = false;

    if (isTransmitting) {
      stopRequested = true;
      nextCodeIndex = 0; 
    } else {
      jammerEnabled = false; 
      sendAllCodes();        
    }
  }

  runIrJammer();
  yield();
}

void delay_ten_us(uint16_t us) {
  uint8_t timer;
  while (us != 0) {
    if (stopRequested) {
      return;
    }

    for (timer=0; timer <= DELAY_CNT; timer++) {
      NOP;
      NOP;
    }
    NOP;
    us--;
  }
}

void quickflashLED( void ) {
  digitalWrite(LED, HIGH);
  delay(50);   
  digitalWrite(LED, LOW);
}

void quickflashLEDx( uint8_t x ) {
  quickflashLED();
  while(--x) {
    delay(50);     
    quickflashLED();
  }
}