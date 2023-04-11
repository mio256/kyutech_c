#include <stdio.h>

#define M 3
#define N 4

int main(void){
    int i,j;

    for(i=1;i<=M;i++){
        for(j=1;j<=M;j++){
            printf("i = %1d, j = %1d\n",i,j);
        }
    }

    return 0;
}