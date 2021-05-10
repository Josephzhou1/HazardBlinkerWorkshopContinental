#include "stdbool.h"

typedef enum{
    Off, 
    Blinking,
}eState;

eState state;

bool PowerOn(eState* state_function);
bool Activate(eState* state_function);
bool Deactivate(eState* state_function);
bool Damage(eState* state_function);