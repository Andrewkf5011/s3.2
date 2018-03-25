#include<mbed.h>

#ifndef PWMLED_H
#define PWMLED_H

class PWM_LED
{
  private:
    PwmOut pwmOut;
    PinName pinName;

  public:
    PWM_LED(PinName pinName);
    PinName getPinName();
    PwmOut getPWM();
    void on();
    void on(float brightness);
    void off();
};

#endif // PWMLED_H
