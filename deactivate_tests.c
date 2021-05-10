#include <assert.h>
#include <stdio.h>
#include "blinker.h"
#include "test_def.h"

void testDeactivateFromOff()
{
    state = Off;

    if (Deactivate(&state) && (state == Off))
    {
      printf("testDeactivateFromOff - passed\n");
    }
    else
    {
      printf("testDeactivateFromOff - failed \n");
    }    
}

void testDeactivateFromBlinking()
{
    state = Blinking;
    
    if (Deactivate(&state) && (state == Off))
    {
      printf("testDeactivateFromBlinking - passed\n");
    }
    else
    {
      printf("testDeactivateFromBlinking - failed \n");
    }    
}