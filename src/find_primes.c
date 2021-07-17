#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void countPrimes_1(){
    int a, b, i, j, flag;
    //ask the user the inteval [a, b]
    printf("Insert interval [a, b]\n");
    printf("Insert a");
    scanf("%d", &a);
    printf("Insert b");
    scanf("%d", &b);
    for (i = a; i <= b; i++){
        if(i == 1  || i == 0)
            continue;
        flag = 1;
        for(j = 2; j <= i / 2; ++i){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            printf("%d", i);
    }
    return 0;
}
