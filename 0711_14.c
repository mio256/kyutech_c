#include <stdio.h>

int main(void){
    double x, *p;
    int *q;

    printf("x=");
    scanf("%lf",&x);
    p=&x;
    q=(int *)p;
    printf("*p=%.15f, *q=%d\n",*p,*q);
    printf("*q=");
    scanf("%d",q);
    printf("*p=%.15f, *q=%d\n",*p,*q);
    
    return 0;
}
