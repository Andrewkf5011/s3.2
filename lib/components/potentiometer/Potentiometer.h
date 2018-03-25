#include<mbed.h>

#ifndef POTENTIOMETER_H
#define POTENTIOMETER_H

class Potentiometer
{
  private:
    AnalogIn pin;
    PinName pinName;

  public:
    Potentiometer(PinName pinName);
    PinName getPinName();
    float read();
};

#endif // POTENTIOMETER_H
