#include <Arduino.h>
//Light Sensor Monitoring
int LDR;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  LDR = analogRead(0);
  Serial.println(LDR);
  delay(500);
}
