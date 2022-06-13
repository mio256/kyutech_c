#include <stdio.h>

int main(void){
    int i,tmp,x[100];

    i=-1;
    do{
        i++;
        printf("x[%1d]=",i);
        scanf("%d",&x[i]);
    }while(x[i]>0);
    for(i=0,tmp=0;x[i]>0;i++){
        if(tmp<x[i]){
            tmp=x[i];
        }
    }
    printf("max=%d\n",tmp);
    return 0;
}   