#define BLYNK_TEMPLATE_ID "TMPLDeaRRiwo"
#define BLYNK_DEVICE_NAME "SENSOR ALERT"
#define BLYNK_FIRMWARE_VERSION "0.1.0"
#define BLYNK_PRINT Serial
#define APP_DEBUG
#define USE_NODE_MCU_BOARD
#include "BlynkEdgent.h"

WidgetLCD lcd(V4);

void setup()
{
Serial.begin(115200);
delay(100);
BlynkEdgent.begin();
pinMode(D8,INPUT); //rain sensor
}

void loop()
{
BlynkEdgent.run();
checksensor();
}


void checksensor()
{
int s1 = digitalRead(D8);
if(s1==LOW)
{
lcd.clear();
lcd.print(0, 1, "RAIN DETECTED");
}

else
{
lcd.clear();
lcd.print(0, 1, "NO RAIN");
}
}
