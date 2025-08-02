#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("ESP32-C6 gestartet!");
}

void loop() {
  Serial.println("Hello World");
  delay(1000);
}
