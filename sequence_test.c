#include <assert.h>
#include <stdio.h>
#include "blinker.h"


void testSequenceOffBlinkingOff()
{
    state = Off;
    Activate(&state);

    if (Deactivate(&state) && (state == Off))
    {
      printf("testSequenceOffBlinkingOff - passed\n");
    }
    else
    {
      printf("testSequenceOffBlinkingOff - failed \n");
    }   
}
void testSequenceBlinkingOffBlinking()
{
    state = Blinking;
    Deactivate(&state);


    if (Activate(&state) && (state == Blinking))
    {
      printf("testSequenceBlinkingOffBlinking - passed\n");
    }
    else
    {
      printf("testSequenceBlinkingOffBlinking - failed \n");
    }       
}