#include <stdio.h>
#include <math.h>

int main(void){
    int i,j;

    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            printf("%3d",i*j);
        }
        printf("\n");
    }

    return 0;
}