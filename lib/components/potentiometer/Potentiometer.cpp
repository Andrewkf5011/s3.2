#include "Potentiometer.h"
#include <mbed.h>

Potentiometer::Potentiometer(PinName pinName) : pin(pinName)
{
  Potentiometer::pinName = pinName;
}

PinName Potentiometer::getPinName()
{
  return pinName;
}

float Potentiometer::read()
{
  return pin.read();
}
