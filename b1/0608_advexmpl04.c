#include <stdio.h>

int main(void){
    int x,max;
    max=0;
    printf("x=");
    scanf("%d",&x);
    while(x>=0&&x<10000){
        if(x>max){
            max=x;
        }
        printf("x=");
        scanf("%d",&x);
    }
    printf("max=%4d\n",max);
    return 0;
}