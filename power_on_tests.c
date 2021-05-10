#include <assert.h>
#include <stdio.h>
#include "blinker.h"

void testPowerOn()
{
    if (PowerOn(&state) && (state == Off))
    {
		printf("testPowerOn - passed\n");
    }
    else
    {
		printf("testPowerOn - failed\n");
    }
}
