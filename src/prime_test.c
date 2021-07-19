 /*************************************************
 * Filename: prime_t.c
 * Author: Tomas Spoturno
 * Copyright: 
 * Disclaimer: This code is presented "as is" without any guarantees.
 * Details: Implementation of different types of primality tests. 
 *************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include "../include/prime_t.h"

bool isPrime_1(nat n){
    if(n == 2 || n == 3)
        return true;
    if(n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;
    for(int i = 5; i * i <= n; i+=6){
        if(n % i == 0 || n % (i+2) == 0)
            return false;
    }
    return true;
}

nat generatePrime(){
    srand(time(NULL));
    nat r = rand();
    while(!isPrime_1(r)){
        r = r + 1;
        //interval checking (TODO)
    }
    return r;
}

bool isPrime_2(nat n, nat k){

    return true;
}




