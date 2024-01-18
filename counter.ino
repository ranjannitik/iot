
#define BLYNK_TEMPLATE_ID "TMPLKR8GG_7S"
#define BLYNK_DEVICE_NAME "IoT COUNTER"
#define BLYNK_FIRMWARE_VERSION        "0.1.0"
#define BLYNK_PRINT Serial
#define APP_DEBUG
#define USE_NODE_MCU_BOARD
#include "BlynkEdgent.h"

WidgetLCD lcd(V4);

unsigned count = 0;

void setup()
{
  Serial.begin(115200);
  delay(100);
  BlynkEdgent.begin();
  pinMode(D0,OUTPUT); //MOTOR
  pinMode(D1,OUTPUT);
  pinMode(D8,INPUT);   //sensor

}

void loop() 
{
  BlynkEdgent.run();
  checksensor();
}



void checksensor()
{

if(digitalRead(D8)==HIGH)
{
  while(digitalRead(D8)==HIGH);
    count++;
    lcd.clear();
    String body = String("COUNT ") + count + " member";
    lcd.print(0, 0, body);
    delay(2000);

    if(count==10)
    {
      
     digitalWrite(D0,HIGH);
     digitalWrite(D1,LOW);
     delay(5000);
     digitalWrite(D0,LOW);
     digitalWrite(D1,LOW);
     while(1);
      
    }

   
}
}

















  
