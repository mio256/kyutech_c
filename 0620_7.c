#include <stdio.h>

double quoti(double x,int y){
    double r;

    r = x/y;

    return r;
}

int main(void){
    double a;
    int n;

    printf("a=");
    scanf("%lf",&a);
    printf("n=");
    scanf("%d",&n);
    printf("quoti=%1.3f\n",quoti(a,n));

    return 0;
}