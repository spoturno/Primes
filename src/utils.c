#include <stdio.h>
#include <math.h>

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
