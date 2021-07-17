#include <stdlib.h>
#include <time.h>

int countPrimes_1(){
    int a, b, i, j, flag;
    for (i = a; i <= b; i++){
        if(i == 1  || i == 0)
            continue;
        flag = 1;
        for(j = 2; j <= i / 2; ++){
            if(i % j == 0){
                flag = 0;
                brak;
            }
        }
        if(flag == 1)
            printf("%d", i);
            

    }
    return 0;
}
