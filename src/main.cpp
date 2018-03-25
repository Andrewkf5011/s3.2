#include "mbed.h"
#include "components.h"

AssignmentBoard board;

Potentiometer redController(board.SHIELD_LEFT_POTENTIOMETER);
Potentiometer greenController(board.SHIELD_RIGHT_POTENTIOMETER);
PWM_LED red(board.SHIELD_RED_LED);
PWM_LED green(board.SHIELD_GREEN_LED);

int main()
{
  //Set the PWM period in milliseconds (100Hz, which is suitably fast).
  red.getPWM().period_ms(10);
  green.getPWM().period_ms(10);

  float redBrightness = 1;
  float greenBrightness = 1;

  while(1)
  {
    redBrightness = redController.read();
    greenBrightness = greenController.read();

    red.on(redBrightness);
    green.on(greenBrightness);

    printf("Left dial %f \n",  redController.read() );
    printf("Right dial %f \n", greenController.read() );
  }
}
