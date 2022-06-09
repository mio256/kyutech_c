#include <stdio.h>

int main(void){
    int x,i,min,max;
    min=10000;
    max=-1;
    for(i=1;i<=10;i++){
        printf("x=");
        scanf("%d",&x);
        if(x<min){
            min=x;
        }
        if(x>max){
            max=x;
        }
    }
    printf("max=%4d\n",max);
    printf("min=%4d\n",min);
    return 0;
}