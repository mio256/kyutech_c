#include <stdio.h>

#define M 3
#define N 4

int main(void){
    int i,j;

    i=1;
    while(i<=M){
        j=1;
        while(j<=N){
            printf("i = %1d, j = %1d\n",i,j);
            j++;
        }
        i++;
    }

    return 0;
}