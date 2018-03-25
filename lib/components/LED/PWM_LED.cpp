#include "PWM_LED.h"
#include <mbed.h>

PWM_LED::PWM_LED(PinName pinName) : pwmOut(pinName)
{
  PWM_LED::pinName = pinName;
}

PinName PWM_LED::getPinName()
{
  return pinName;
}

PwmOut PWM_LED::getPWM()
{
  return pwmOut;
}

void PWM_LED::on()
{
  pwmOut.write(0);
}

void PWM_LED::on(float brightness)
{
  pwmOut.write(brightness);
}

void PWM_LED::off()
{
  pwmOut.write(1);
}
