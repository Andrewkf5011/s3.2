#include "Potentiometer.h"
#include <mbed.h>

Potentiometer::Potentiometer(PinName pinName) : analogIn(pinName)
{
  Potentiometer::pinName = pinName;
}

PinName Potentiometer::getPinName()
{
  return pinName;
}

AnalogIn Potentiometer::getAnalogIn()
{
  return analogIn;
}

float Potentiometer::read()
{
  return analogIn.read();
}
