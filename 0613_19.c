#include <stdio.h>
#include <math.h>

#define N 10

int main(void){
    int i,j,k,x[N],y[N],sum;

    for(i=0;i<N;i++){
        printf("x[%d]=",i);
        scanf("%d",&x[i]);
        printf("y[%d]=",i);
        scanf("%d",&y[i]);
    }
    for(i=0,sum=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            sum+=sqrt(pow(x[j]-x[i],2)+pow(y[j]-y[i],2));
        }
    }
    printf("sum=%d\n",sum);
    return 0;
}   