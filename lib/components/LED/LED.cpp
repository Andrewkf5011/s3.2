#include "LED.h"
#include <mbed.h>

LED::LED(PinName pinName) : digitalOut(pinName,1)
{
  LED::pinName = pinName;
}

PinName LED::getPinName()
{
  return pinName;
}

DigitalOut LED::getDigitalOut()
{
  return digitalOut;
}

void LED::on()
{
  digitalOut.write(0);
}

void LED::off()
{
  digitalOut.write(1);
}
