#include <stdio.h>

int main(void){
    int a,b,r;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    while(r!=0){
        r=a%b;
        a=b;
        if(r!=0){
            b=r;
        }
    }
    printf("b=%d\n",b);
    return 0;
}