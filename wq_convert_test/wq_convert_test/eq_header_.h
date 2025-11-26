#pragma once
#include <stdint.h>
#pragma pack(push, 1)  // Set alignment to 1 byte
union user_eq {
    uint32_t word;
    struct {
        int8_t low;   // -6 to +6 dB
        int8_t mid;   // -6 to +6 dB
        int8_t high;  // -6 to +6 dB
    } gain;
};
#pragma pack(pop)  // Restore previous alignment