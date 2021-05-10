#include <assert.h>
#include <stdio.h>
#include "blinker.h"


void testDamageFromOff()
{
    state = Off;

    if (Damage(&state) && (state == Off))
    {
      printf("testDamageFromOff - passed\n");
    }
    else
    {
      printf("testDamageFromOff - failed \n");
    }   
}

void testDamageFromBlinking()
{
    state = Blinking;

    if (Damage(&state) && (state == Off))
    {
      printf("testDamageFromBlinking - passed\n");
    }
    else
    {
      printf("testDamageFromBlinking - failed \n");
    }   
}
