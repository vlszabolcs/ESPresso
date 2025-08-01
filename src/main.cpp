#include <Arduino.h>

void setup()
{
  
  Serial.begin(15200);
}

void loop()
{
  Serial.println("Hello, ESPresso!");

  delay(1000); // Wait for a second before repeating
}