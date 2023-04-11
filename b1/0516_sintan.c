#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(void){
    int i,n;
    printf("n="),scanf("%d",n);
    for(i=0;i<90;i+=n)
        printf("%lf %lf\n",
            sin(i/180.0*PI),
            tan(i/180.0*PI));
}