#include <stdio.h>

#define N 10

int main(void){
    int i,j,tmp,x[N];
    int k;

    for(i=0;i<N;i++){
        printf("x[%1d]=",i);
        scanf("%d",&x[i]);
    }
    for(i=N-1;i>=1;i--){
        for(j=i-1;j>=0;j--){
            if(x[i]<x[j]){
                tmp=x[i];
                x[i]=x[j];
                x[j]=tmp;
            }
        }
    }
    for(i=0;i<N;i++){
        printf("x[%1d]=%d\n",i,x[i]);
    }
    return 0;
}   