#include "PWM_LED.h"
#include <mbed.h>

PWM_LED::PWM_LED(PinName pinName) : pin(pinName)
{
  PWM_LED::pinName = pinName;
}

PinName PWM_LED::getPinName()
{
  return pinName;
}

void PWM_LED::on()
{
  pin.write(0);
}

void PWM_LED::on(float brightness)
{
  pin.write(brightness);
}

void PWM_LED::off()
{
  pin.write(1);
}
