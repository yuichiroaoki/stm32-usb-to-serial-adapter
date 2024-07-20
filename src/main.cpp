#include <Arduino.h>

void setup() {
  // Initialize both serial ports
  Serial.begin(115200, SERIAL_8N1, 3, 1);
  Serial1.begin(115200, SERIAL_8N1, 16, 17);
}

void loop() {
  if (Serial1.available()) {
    Serial.write(Serial1.read());
  }

  if (Serial.available()) {
    Serial1.write(Serial.read());
  }
}