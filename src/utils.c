#include <stdio.h>
#include <math.h>
#include "../include/utils.h"

//change int to nat
void primeFactorization(int num){
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Prime factorization of %d is: ", num);

    //print ther number of 2s that divide num
    while(num % 2 == 0){
        printf("%d", 2);
        num = num/2;
    }

    //should be add at this point so..
    // we can skip doing i++ to  do i = i + 2
    for (int i = 2; i <= sqrt(num); i+=2){
        // while i divides n print it
        while(num % i == 0){
            printf("%d", i);
            num = num/i;
        }
    }

    //handle the case when num = p (p prime)
    if (num > 2)
        printf("%d", num);
    
}

int gcdExtended(int a, int b, int *x, int *y){
    if(a == 0){
        *x = 0;
        *y = 1;
        return a;
    } 
    int x1, y1;
    int g = gcdExtended(b % a, a, &x1, &y1);
    *x = y1 - (b/a) * x1; 
    *y = x1;;
    return g;
}


void diophantineSolution(int a, int b, int c){
    //replace with isDivisible()
    if(c % gcd(a, b) != 0)
        printf("NO SOLUTION");
    else {
        // find the solution
        // print all the classes [1], [2], [k] 
    }
}

//calculate (a^n) % p in O(log x)
//function required to fermat's theorem
int power(int a, unsigned int n, int p){
    int res = 1;
    a = a % p; //reduces mod p
    while(n > 0){
        if(n & 1)
            res = (res*a) % p;
        // n must be even now
        n = n>>1; // n=n/2
        a = (a*a) % p;
    }
    return res;
}

// Euclidean's algorithm
int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

