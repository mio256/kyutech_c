#include <stdio.h>
#include <math.h>

#define N 10

int main(void){
    int i,x[N],y[N],sum;

    for(i=0,sum=0;i<N;i++){
        printf("x[%d]=",i);
        scanf("%d",&x[i]);
        printf("y[%d]=",i);
        scanf("%d",&y[i]);
        sum+=sqrt(x[i]*x[i]+y[i]*y[i]);
    }
    printf("sum=%d\n",sum);
    return 0;
}   