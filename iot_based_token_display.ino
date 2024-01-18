
#define BLYNK_TEMPLATE_ID "TMPLln9tduYI"
#define BLYNK_DEVICE_NAME "TOKEN NO DISPLAY"
#define BLYNK_FIRMWARE_VERSION        "0.1.0"
#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG
#define USE_NODE_MCU_BOARD

#include "BlynkEdgent.h"

int i=0;

BLYNK_WRITE(V1) // V1 is the number of Virtual Pin  
{
   i++;
   
  if(i==2)
  {
  digitalWrite(D0,LOW); //1
  digitalWrite(D1,HIGH);
  digitalWrite(D2,HIGH);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  digitalWrite(D8,LOW);
  
  }

  else if(i==4) 
  {
  digitalWrite(D0,HIGH); //2
  digitalWrite(D1,HIGH);  
  digitalWrite(D2,LOW);
  digitalWrite(D5,HIGH);
  digitalWrite(D6,HIGH);
  digitalWrite(D7,LOW);
  digitalWrite(D8,HIGH);



  }

  else if(i==6)
  {
  digitalWrite(D0,HIGH);   //3
  digitalWrite(D1,HIGH);
  digitalWrite(D2,HIGH);
  digitalWrite(D5,HIGH);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  digitalWrite(D8,HIGH);
  

  }
  
}

void setup()
{
  Serial.begin(115200);
  delay(100);
  BlynkEdgent.begin();
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
  pinMode(D8,OUTPUT);


  digitalWrite(D0,HIGH); //0
  digitalWrite(D1,HIGH);   
  digitalWrite(D2,HIGH);
  digitalWrite(D5,HIGH);
  digitalWrite(D6,HIGH);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,LOW); 
}

void loop() 
{
  BlynkEdgent.run();
}
