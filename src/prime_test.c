 /*************************************************
 * Filename: prime_test.c
 * Author: Tomas Spoturno
 * Copyright: 
 * Disclaimer: This code is presented "as is" without any guarantees.
 * Details: Implementation of different types of primality tests. 
 *************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "../include/prime_test.h"
#include "../include/prime_list.h"

//export to other modules (TODO)
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

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
bool isPrime_2(int n){
    FILE *pf;
    pf = fopen("primes", "r");

    //read file into array
    int array_primes[1000], i;

    if(pf == NULL){
        printf("Error Reading File\n");
        exit(0);
    }
    for(i = 0; i < 1000; i++){
        fscanf(pf, "%d,", &array_primes[i]);
    }
    for(i = 0; i < 1000; i++){
        if(n == array_primes[i])
            return true;
        else if(array_primes[i] > n)
            break;
    }
    return false;
}


// same as isPrime_2 for testing with internal array
bool isPrime_3(int n){
    for(int i = 0; i < sizeof(primes); i++){
        if(n == primes[i])
            return true;
    }
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




