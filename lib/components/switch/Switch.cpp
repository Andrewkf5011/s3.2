#include "Switch.h"
#include<mbed.h>
#include<stdbool.h>

Switch::Switch(PinName pinName, bool usesPullUpResistor) : digitalIn(pinName)
{
  Switch::usesPullUpResistor = usesPullUpResistor;
  Switch::pinName = pinName;
}

PinName Switch::getPinName()
{
  return pinName;
}

DigitalIn Switch::getDigitalIn()
{
  return digitalIn;
}

bool Switch::isPressed()
{
  //Use a bitwise XOR to work out if the pin is being pressed.
  return ((digitalIn.read()) ^ usesPullUpResistor);
}
