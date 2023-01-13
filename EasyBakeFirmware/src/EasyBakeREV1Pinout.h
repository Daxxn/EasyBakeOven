// Auto-Generated code file from PinGenerator.
// Avoid editing this file.

#pragma once
#include <Arduino.h>

namespace Digitl {
	namespace OvenPins {
		const int HTR_PWM_PIN = 6;
		const int HTR_SW_PIN = PCINT4;
		const int ESTOP_PIN = INT2;
	}
	namespace SensingPins {
		const int SW_PIN = INT6;
	}
	namespace IndictorsPins {
		const int COOL_PIN = 11;
		const int STATUS_PIN = 12;
		const int ERROR_PIN = A0;
		const int ACT_PIN = A1;
		const int HEAT_PIN = A2;
	}
	namespace DisplayPins {
		const int BACKLIGHT_PIN = 9;
		const int RESET_PIN = 13;
	}
	namespace IOPins
	{
		const int IO_PIN = INT3;
	} // namespace IOPins
	
}
namespace Anlg {
	namespace SensingPins {
		const int PEAK_PIN = A4;
		const int CURRENT_PIN = A5;
	}
}
namespace Ser {
	namespace SPI {
		const int SCK = 15;
		const int MISO = 14;
		const int MOSI = 16;

		const int Display_ADDR = 5;
		const int IO_ADDR = 4;
		const int THERM_ADDR = A3;
	}
}

// Author: Daxxn
// Auto-Generated code file from PinGenerator.
// Avoid editing this file.

