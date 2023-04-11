#include <stdio.h>
#include <math.h>

double newton(double x,double a){
    return x*x-a;
}

double newton_dx(double x){
    return 2*x;
}

int main(void){
    double a,x,x_a;

    printf("a=");
    scanf("%lf",&a);

    x=a+1;
    do{
        x_a=x;
        x_a=x-newton(x,a)/newton_dx(x);
    }while(fabs(x_a-x)<pow(10,-8));

    printf("ans=%lf\n",x_a);

    return 0;
}