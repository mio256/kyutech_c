#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main(void){
    int i,a;

    srand(time(NULL));
    for(i=0;i<=N;i++){
        a=rand()%100;
        printf("a=%d\n",a);
    }

    return 0;
}
