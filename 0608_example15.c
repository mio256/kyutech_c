#include <stdio.h>

int main(void){
    int x,i,max;
    max=-1;
    for(i=1;i<=10;i++){
        printf("x=");
        scanf("%d",&x);
        if(x>max){
            max=x;
        }
    }
    printf("max=%4d\n",max);
    return 0;
}