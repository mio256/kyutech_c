#include <stdio.h>
#include <math.h>

int main(void){
    int x[10];
    int i,sum,avg,nomal;

    for(i=0;i<10;i++){
        printf("x[%1d]=",i);
        scanf("%d",&x[i]);
    }
    for(i=0,sum=0;i<10;i++){
        sum+=x[i];
    }
    avg=sum/10;
    printf("avg=%d\n",avg);
    for(i=0,sum=0;i<10;i++){
        sum+=x[i]*x[i]-avg*avg;
    }
    nomal=sqrt(sum/10);
    printf("nomal=%d\n",nomal);

    return 0;
}