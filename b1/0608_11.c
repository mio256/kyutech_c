#include <stdio.h>

int main(void){
    int x,sum;
    sum=0;
    printf("x=");
    scanf("%d",&x);
    while(x>=0&&x<10000){
        sum+=x;
        printf("x=");
        scanf("%d",&x);
    }
    printf("sum=%4d\n",sum);
    return 0;
}