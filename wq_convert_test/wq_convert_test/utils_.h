#pragma once
#include <stdint.h>
#define AMOUNT_OF_PROFILES 3 

struct eq_preset
{
    int8_t low, mid, high;
};

typedef struct eq_preset eq_preset;

const eq_preset eq_[AMOUNT_OF_PROFILES] = {
    {.low = 6, .mid = -3, .high = -3 } , // eq[0] = low boost
    {.low = -3, .mid = 6, .high = -3 } , // eq[1] = mid boost
    {.low = -3, .mid = -3, .high = 6 }   // eq[2] = high boost
};