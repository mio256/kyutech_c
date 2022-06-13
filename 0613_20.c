#include <stdio.h>
#include <stdlib.h>
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
    for(i=0,sum=0;i<N-2;i++){
        for(j=i+1;j<N-1;j++){
            for(k=j+1;k<N;k++){
                sum+=abs((x[i]-x[k])*(y[j]-y[k])-(x[j]-x[k])*(y[i]-y[k]))/2;
            }
        }
    }
    printf("sum=%d\n",sum);
    return 0;
}   