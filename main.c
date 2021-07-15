#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#include "include/prime_t.h"

int main(void){
    //test with isPrime_1
    nat n;
    printf("Insert Number:");
    scanf("%u", &n);
    (isPrime_1(n) ? printf("%u is prime\n", n) : printf("%u is NOT prime\n", n));
    return 0;
}
