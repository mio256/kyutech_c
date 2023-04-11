#include <stdio.h>

void quoti(double x,int y,double *pz){
    *pz=x/y;
}

int main(void){
    double a,r;
    int n;

    printf("a=");
    scanf("%lf",&a);
    printf("n=");
    scanf("%d",&n);
    quoti(a,n,&r);
    printf("r=%1.3f\n",r);

    return 0;
}
