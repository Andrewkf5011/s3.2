#include "mbed.h"
#include "components.h"

AssignmentBoard board;

//PwmOut red(D9);
PWM_LED red(board.SHIELD_RED_LED);

int main()
{
  //Set the PWM period in milliseconds (100Hz, which is suitably fast).
  red.getPWM().period_ms(10);

  while(1)
  {
    /* ramp up from 0 to 100% */
    float duty;

    for( duty=0 ; duty<4.6 ; duty+=0.23 )
    {
      float brightness = exp(duty)/100;
      red.on(brightness);
      wait_ms(100);
    }
  }
}
