 /*************************************************
 * Filename: prime_t.c
 * Author: Tomas Spoturno
 * Copyright: 
 * Disclaimer: This code is presented "as is" without any guarantees.
 * Details: Greatest Common Divisor and all related operations. 
 *************************************************/

#include "../include/gcd.h"
#include <math.h>

// Euclidean's algorithm
int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
