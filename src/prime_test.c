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
#include "../include/prime_test.h"

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

//change to nat (TODO)
////change to nat (TODO)
bool isPrime_2(int n){
    //read from primes plain text
    FILE *primes_file;
    primes_file = fopen("./primes_t", "r");
        //compare each prime to n until n.
        int temp;
        while(fscanf(primes_file, " %d", &temp) == 1){
            if(temp == n)
                return true;
        }
    fclose(primes_file);
    return false;
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




