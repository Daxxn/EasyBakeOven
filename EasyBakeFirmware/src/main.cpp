#include <Arduino.h>
#include <SPI.h>
#include "EasyBakeREV1Pinout.h"
#include "Adafruit_I2CDevice.h"
#include "Adafruit_MAX31855.h"

Adafruit_MAX31855 tempDriver = Adafruit_MAX31855(Ser::SPI::SCK, Ser::SPI::THERM_ADDR, Ser::SPI::MISO);

void PingPin(int pin)
{
  digitalWrite(pin, HIGH);
  delay(200);
  digitalWrite(pin, LOW);
}

void setup() {
  pinMode(Digitl::IndictorsPins::ACT_PIN, OUTPUT);
  pinMode(Digitl::IndictorsPins::COOL_PIN, OUTPUT);
  pinMode(Digitl::IndictorsPins::ERROR_PIN, OUTPUT);
  pinMode(Digitl::IndictorsPins::HEAT_PIN, OUTPUT);
  pinMode(Digitl::IndictorsPins::STATUS_PIN, OUTPUT);

  pinMode(Ser::SPI::THERM_ADDR, OUTPUT);

  Serial.begin(115200);
  SPI.begin();
  tempDriver.begin();
}

void loop() {
  Serial.print("Temp: ");
  Serial.println(tempDriver.readCelsius());
  PingPin(Digitl::IndictorsPins::ACT_PIN);
  PingPin(Digitl::IndictorsPins::COOL_PIN);
  PingPin(Digitl::IndictorsPins::ERROR_PIN);
  PingPin(Digitl::IndictorsPins::HEAT_PIN);
  PingPin(Digitl::IndictorsPins::STATUS_PIN);
  delay(200);
}