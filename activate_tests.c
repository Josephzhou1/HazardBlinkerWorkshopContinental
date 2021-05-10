#include <assert.h>
#include <stdio.h>
#include "blinker.h"


void testActivateFromOff()
{
    state = Off;

    if (Activate(&state) && (state == Blinking))
    {
		printf("testActivateFromOff - passed\n");
    }
    else
    {
		printf("testActivateFromOff - failed\n");
    }
}

void testActivateFromBlinking()
{
    state = Blinking;

    if (!Activate(&state) && (state == Blinking))
    {
        printf("testActivateFromBlinking - passed\n");
    }
    else
    {
		printf("testActivateFromBlinking - failed\n");
    }
}