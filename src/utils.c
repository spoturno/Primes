#include <stdio.h>
#include <math.h>
#include "../include/utils.h"
#include "../include/gcd.h"

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

int gcdExtended(int a, int b, int &x, int &y){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    } else{
        int g = gcdExtended(b, a % b, x, y);
        int x1 = x, y1 = y;
        x = y1;
        y = x1 - (a / b) * y1;
        return g;
    }
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



