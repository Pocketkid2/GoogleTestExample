#include "exponent.h"
#include <iostream>

// Performs the exponentiation by squaring (recursive)
//  See https://en.wikipedia.org/wiki/Exponentiation_by_squaring#Prefixes_of_the_exponent
uint64_t exp_by_squaring(uint64_t base, uint64_t exp) {
    if (exp == 0) {
        return 1;
    } else if (exp % 2) {
        // If exponent is even
        return exp_by_squaring(base * base, exp / 2);
    } else {
        // If exponent is odd
        return base * exp_by_squaring(base * base, (exp - 1) / 2);
    }
}
