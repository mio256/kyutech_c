#include <stdio.h>

int main(void){
    int x,min,min_n,n;
    min=10000;
    n=0;
    printf("x=");
    scanf("%d",&x);
    while(x>=0&&x<10000){
        n++;
        if(x<min){
            min=x;
            min_n=n;
        }
        printf("x=");
        scanf("%d",&x);
    }
    printf("min=%4d\n",min);
    printf("min_n=%4d\n",min_n);
    return 0;
}