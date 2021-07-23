#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

#include "include/prime_test.h"

int main(void){
 ;   //test with isPrime_1
    clock_t begin = clock();
    nat n; int p;
    printf("Insert Number:");
    scanf("%u", &n);
    (isPrime_1(n) ? printf("%u is prime\n", n) : printf("%u is NOT prime\n", n));
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("exec-time: %f sec\n", time_spent);
    scanf("%d", &p);
    (isPrime_3(p) ? printf("%d is prime\n", p) : printf("%d is NOT prime\n", p));
    return 0;
}
