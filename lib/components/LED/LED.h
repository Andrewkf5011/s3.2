#include<mbed.h>

#ifndef LED_H
#define LED_H

class LED
{
  private:
    DigitalOut digitalOut;
    PinName pinName;

  public:
    LED(PinName pinName);
    PinName getPinName();
    DigitalOut getDigitalOut();
    void on();
    void off();
};

#endif // LED_H
