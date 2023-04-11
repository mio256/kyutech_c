#include <stdio.h>

int main(void){
    double a,b,c,d;

    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    printf("c=");
    scanf("%lf",&c);
    d=b*b-4*a*c;

    if(d>0){
        printf("2 jissuukai\n");
    }else if(d<0){
        printf("kyosuukai\n");
    }else{
        printf("juukai\n");
    }
    
    return 0;
}