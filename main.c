/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include "test_def.h"


int main()
{
    //power on test set
    testPowerOn();
    
	//activate test set
    testActivateFromOff();
    testActivateFromBlinking();

    //deactivate test set
    testDeactivateFromOff();
    testDeactivateFromBlinking();
	
    //damage test set
    testDamageFromOff();
    testDamageFromBlinking();   	
    
    //sequence test set
    testSequenceOffBlinkingOff();
    testSequenceBlinkingOffBlinking();
}

