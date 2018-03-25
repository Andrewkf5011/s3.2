#include<mbed.h>

#ifndef POTENTIOMETER_H
#define POTENTIOMETER_H

class Potentiometer
{
  private:
    AnalogIn analogIn;
    PinName pinName;

  public:
    Potentiometer(PinName pinName);
    PinName getPinName();
    AnalogIn getAnalogIn();
    float read();
};

#endif // POTENTIOMETER_H
