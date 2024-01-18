#define BLYNK_TEMPLATE_ID "TMPLln9tduYI"
#define BLYNK_DEVICE_NAME "TOKEN NO DISPLAY"
#define BLYNK_FIRMWARE_VERSION        "0.1.0"
#define BLYNK_PRINT Serial
#define APP_DEBUG
#define USE_NODE_MCU_BOARD

#include<LiquidCrystal.h>
LiquidCrystal lcd(D0,D1,D2,D5,D6,D7);

#include "BlynkEdgent.h"

BLYNK_WRITE(V1) // V1 is the number of Virtual Pin  
{
  buz();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(param.asStr());
}

void setup()
{
  Serial.begin(115200);
  delay(100);
  BlynkEdgent.begin();
  pinMode(D8,OUTPUT);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Notice Board");
  
}

void loop() 
{
  BlynkEdgent.run();
}

void buz()
{
digitalWrite(D8,HIGH);
delay(5000);
digitalWrite(D8,LOW);
}




