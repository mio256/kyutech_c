#include <stdio.h>

#define M 3
#define N 4

int main(void){
    int i,j;

    for(i=1;i<=M;i++){
        for(j=1;j<=M;j++){
            printf("%1d * %1d = %2d\n",i,j,i*j);
            j++;
        }
    }

    return 0;
}