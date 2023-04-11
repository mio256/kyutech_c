#include <stdio.h>

int main(void){
    int i,max,x[5];
    for(i=0;i<10;i++){
        printf("x[%1d]=",i);
        scanf("%d",&x[i]);
    }
    max=0;
    for(i=0;i<10;i++){
        if(x[i]>max){
            max=x[i];
        }
    }
    printf("max=%4d\n",max);
    return 0;
}