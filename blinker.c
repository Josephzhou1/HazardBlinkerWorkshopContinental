#include <stdbool.h>
#include "blinker.h"

bool PowerOn(eState* state_func){
    *state_func = Off;
    //*state_func = Blinking;
    //return true;
}
bool Activate(eState* state_func){
    if(*state_func == Off)
    {
        *state_func = Blinking;
        return true;
    }
    return false;
}
bool Deactivate(eState* state_func){
    if(*state_func == Blinking)
        *state_func = Off;
    return true;
}
bool Damage(eState* state_func){
    if(*state_func == Blinking){
        *state_func = Off;
    }
    return true;
}
