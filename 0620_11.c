#include <stdio.h>

int a;

void datain(void){
    printf("a=");
    scanf("%d",&a);
}

int main(void){
    int b;

    datain();
    b=a+1;
    printf("b=%d\n",b);

    return 0;
}