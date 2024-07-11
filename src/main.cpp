#include <Arduino.h>

HardwareSerial Serial1(PA3, PA2);

void setup() {
  // Initialize both serial ports
  Serial.begin(115200);
  Serial1.begin(115200);
}

void loop() {
  if (Serial1.available()) {
    Serial.write(Serial1.read());
  }

  if (Serial.available()) {
    Serial1.write(Serial.read());
  }
}