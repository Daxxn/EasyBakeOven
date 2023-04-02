#pragma once

#include <Arduino.h>
#include "Display.h"

class NHD_Display: public Display
{
public:
  NHD_Display();
  void Begin();
  void DrawSquare();
  void Draw();
private:
  
};