#include <stdio.h>

int main(void){
    int x,i,min;
    min=10000;
    for(i=1;i<=10;i++){
        printf("x=");
        scanf("%d",&x);
        if(x<min){
            min=x;
        }
    }
    printf("min=%4d\n",min);
    return 0;
}