#pragma once

#include <Arduino.h>

enum NHD_COMMAND
{
  //          A
  DISP_ON = 0b000
};

// INTERFACE
//
// The abstraction of the 
class Display
{
public:
  virtual void Begin() = 0;
  virtual void DrawSquare();
  virtual void Draw();
protected:
  
private:
  
};