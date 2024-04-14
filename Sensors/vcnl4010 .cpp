#include <Wire.h>

#define VCNL4010_ADDR  0x13; // I2C address of VCNL4010
#define PROX_DATA_REG  0x00; // Proximity data register address

void setup() {
  Serial.begin(9600);
  Wire.begin();
}

void loop() {
  // Request proximity data
  Wire.beginTransmission(VCNL4010_ADDR);
  Wire.write(PROX_DATA_REG); // Register address to read
  Wire.endTransmission();

  // Request data from register
  Wire.requestFrom(VCNL4010_ADDR, 2); // Request 2 bytes (high & low)

  // Read high and low bytes
  if (Wire.available() >= 2) {
    uint8_t highByte = Wire.read();
    uint8_t lowByte = Wire.read();

    // Combine bytes into a 16-bit proximity value
    uint16_t proximity = (highByte << 8) | lowByte;

    // Print proximity value
    Serial.print("Proximity: ");
    Serial.println(proximity);
  } else {
    Serial.println("Failed to read proximity data!");
  }

  delay(500);
}