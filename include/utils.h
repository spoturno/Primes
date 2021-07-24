#ifndef UTILS_H
#define UTILS_H

#include <stdbool.h>

/*
 * returns the prime factorization of num
 * example->    num: 2 2 3 7 
 */
void primeFactorization(int num);

// evenNumber ? YES : NO
void isEven(int num);


/*
 * Diophantine equation
 * if ax + by = c has solution then print It else return NO SOLUTION* 
 */
void diophantineSolution(int a, int b, int c);

// Euclidean's algorithm
int gcd(int a, int b);

/*
 * function to implement the extended euclid algorithm
 * to find solution of diophantine equation
 */
int gcdExtended(int a, int b, int *x, int *y);


//calculate (a^n) % p in O(log x)
//function required to fermat's theorem
int power(int a, unsigned int n, int p);


#endif
