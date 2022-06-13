#include <stdio.h>
#include <math.h>

int main(void){
    int i,x[10],sum,avg,std,t[10];

    for(i=0,sum=0;i<10;i++){
        printf("x[%d]=",i);
        scanf("%d",&x[i]);
        sum+=x[i];
    }
    avg=sum/10;
    for(i=0,sum=0;i<10;i++){
        sum+=(x[i]-avg)*(x[i]-avg);
    }
    std=sqrt(sum/10);
    printf("avg=%d\n",avg);
    printf("std=%d\n",std);
    for(i=0;i<10;i++){
        printf("t[%d]=%d\n",i,10*(x[i]-avg)/std+50);
    }
    return 0;
}   