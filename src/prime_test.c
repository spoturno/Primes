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
    int *temp = (int *)malloc(sizeof(int)); 
    while(fscanf(primes_file, "%d", temp) == 1){
        if(temp != NULL){
            if(*temp == n)
                return true;
        }
    }
    free(temp);
    fclose(primes_file);
    return false;
}


// same as isPrime_2 for testing if static memory works
bool isPrime_3(int n){
    //read from primes plain text
    FILE *primes_file;
    primes_file = fopen("./primes_t.txt", "r");
    //compare each prime to n until n.
    if(primes_file == NULL)
        printf("Can't open file for reading! \n");
    else{
        int temp;
        fscanf(primes_file, "%d", &temp);
        printf("1st Number: %d", temp);
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




