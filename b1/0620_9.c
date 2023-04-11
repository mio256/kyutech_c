#include <stdio.h>

double power(double x,int y){
    int i;

    for(i=1;i<y;i++){
        x=x*x;
    }

    return x;
}

int main(void){
    int a,n;

    printf("a=");
    scanf("%d",&a);
    printf("n=");
    scanf("%d",&n);

    printf("power=%lf\n",power(a,n));
    
    return 0;
}