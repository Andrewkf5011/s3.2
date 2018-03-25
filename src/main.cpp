#include "mbed.h"
#include "components.h"

AssignmentBoard board;

PwmOut red(D9);
int main()
{
  red.write(0);
    red.period_ms(10);/* suitably fast 100Hz */

    // red.write(0.2);
    while(1){
        /* ramp up from 0 to 100% */
        float duty;
        for( duty=0 ; duty<4.6 ; duty+=0.23 ) {
              float brightness = exp(duty)/100;
              red.write(brightness);
              wait_ms(100);
          }
    }
}
