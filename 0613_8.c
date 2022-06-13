#include <stdio.h>

#define N 10

int main(void){
    int i,j,tmp,x[N];

    for(i=0;i<N;i++){
        printf("x[%1d]=",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if(x[i]<x[j]){
                tmp=x[i];
                x[i]=x[j];
                x[j]=tmp;
            }
        }
    }
    for(i=0;i<N;i++){
        printf("x[%1d]=%3d\n",i,x[i]);
    }
    return 0;
}   