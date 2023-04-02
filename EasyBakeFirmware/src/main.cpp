#include <Arduino.h>
#include <SPI.h>
#include "EasyBakeREV1Pinout.h"
#include "Adafruit_I2CDevice.h"
#include "Adafruit_MAX31855.h"
#include "STP16Driver.h"
#include "NHD_Display.h"
#include "Display.h"

#pragma region Object Init
Adafruit_MAX31855 tempDriver = Adafruit_MAX31855(Ser::SPI::SCK, Ser::SPI::THERM_CS, Ser::SPI::MISO);
// STP16Driver indicators = STP16Driver();
NHD_Display nhddisp = NHD_Display();
Display *display = &nhddisp;
#pragma endregion

#pragma region Local Variables

#pragma endregion

void InitPins()
{
  pinMode(Digitl::IndictorsPins::IND_LE_PIN, OUTPUT);
  pinMode(Digitl::IndictorsPins::IND_OE_PIN, OUTPUT);
  pinMode(Digitl::DisplayPins::DISP_A0_PIN, OUTPUT);
  pinMode(Digitl::DisplayPins::DISP_RESET_PIN, OUTPUT);
  
  pinMode(Ser::SPI::THERM_CS, OUTPUT);
  pinMode(Ser::SPI::DISP_CS, OUTPUT);
  pinMode(Ser::SPI::IO_CS, OUTPUT);
}

void PingPin(int pin)
{
  digitalWrite(pin, HIGH);
  delay(200);
  digitalWrite(pin, LOW);
  delay(200);
}

void setup()
{
  InitPins();
  Serial.begin(115200);
  SPI.begin();
  tempDriver.begin();
}

void loop()
{
  Serial.print("Temp: ");
  Serial.println(tempDriver.readCelsius());
  delay(200);
}