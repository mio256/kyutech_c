#include <stdio.h>
#include <math.h>

int main(void){
    int i,j,tmp;
    double x[10],y[10];

    for(i=0;i<10;i++){
        printf("x[%d]=",i);
        scanf("%lf",&x[i]);
        printf("y[%d]=",i);
        scanf("%lf",&y[i]);
    }

    for(i=0;i<10;i++){
        for(j=i;j<10;j++){
            if(atan2(x[i],y[i])>atan2(x[j],y[j])){
                tmp=x[i];
                x[i]=x[j];
                x[j]=tmp;
                tmp=y[i];
                y[i]=y[j];
                y[j]=tmp;
            }
        }
    }

    for(i=0;i<10;i++){
        printf("x[%d]=%lf, ",i,x[i]);
        printf("y[%d]=%lf", ,i,y[i]);
        printf("atan2()=%lf\n",atan2(x[i],y[i]));
    }

    return 0;
}