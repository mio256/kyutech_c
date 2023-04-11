#include <stdio.h>

#define M 3
#define N 4

int main(void){
    int i,j;

    i=1;
    while(i<=M){
        j=1;
        while(j<=N){
            printf("%1d * %1d = %2d\n",i,j,i*j);
            j++;
        }
        i++;
    }

    return 0;
}