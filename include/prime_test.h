#ifndef PRIME_TEST_H
#define PRIME_TEST_H

#include <stdbool.h>

typedef unsigned int nat; //natural number

/*
 * Checks if the given numbers n is prime using sieve of eratosthenes 
*/
bool isPrime_1(nat n);

/*
 * checks if the given number n is prime by comparing with big prime list
 * (src/primes.txt) reading the filestream and storing each value in an array
*/
bool isPrime_2(int n);

/*
 * This will change (TODO) 
*/
bool isPrime_3(unsigned int n, int k);

/*
 * This fucntion is called for all k trials It returns false if n is composite
 * and returns true if n is probably prime.
 * d is an odd number such that d*2^r = n-1 for some r>=1
 */
bool isPrime_4(int d, int n);


#endif
