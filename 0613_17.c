#include <stdio.h>
#include <math.h>

#define N 10

int main(void){
    int i,j,tmp,x[10],sum,avg,std,t[10];

    for(i=0,sum=0;i<10;i++){
        printf("x[%d]=",i);
        scanf("%d",&x[i]);
        sum+=x[i];
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
    avg=sum/10;
    for(i=0,sum=0;i<10;i++){
        sum+=(x[i]-avg)*(x[i]-avg);
    }
    std=sqrt(sum/10);
    printf("avg=%d\n",avg);
    printf("std=%d\n",std);
    for(i=0;i<10;i++){
        t[i]=10*(x[i]-avg)/std+50;
        printf("x[%d]=%d\n",i,x[i]);
        printf("t[%d]=%d\n",i,t[i]);
    }
    return 0;
}   