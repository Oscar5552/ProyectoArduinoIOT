
#define BLYNK_TEMPLATE_ID "TMPLW-mvlk1c"
#define BLYNK_DEVICE_NAME "Control Luz"

#define lampA 23
#define lampB 22
#define lampC 21
#define lampD 19



#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_WROVER_BOARD
//#define USE_TTGO_T7

#include "BlynkEdgent.h"

void setup()
{
  Serial.begin(115200);
  pinMode(lampA, OUTPUT);
  pinMode(lampB, OUTPUT);
  pinMode(lampC, OUTPUT);
  pinMode(lampD, OUTPUT);
  delay(100);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}

BLYNK_WRITE(V0){
  int state = param.asInt();
  digitalWrite(lampA,state);
}
BLYNK_WRITE(V1){
  int state = param.asInt();
  digitalWrite(lampB,state);
}
BLYNK_WRITE(V2){
  int state = param.asInt();
  digitalWrite(lampC,state);
}
BLYNK_WRITE(V3){
  int state = param.asInt();
  digitalWrite(lampD,state);
}
