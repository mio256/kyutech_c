#include <stdio.h>

int main(void){
    int x,max,min,sum,n;
    max=-1;
    min=10000;
    sum=0;
    n=0;
    printf("x=");
    scanf("%d",&x);
    while(x>=0&&x<10000){
        n++;
        if(x>max){
            max=x;
        }
        if(x<min){
            min=x;
        }
        sum+=x;
        printf("x=");
        scanf("%d",&x);
    }
    printf("max=%4d\n",max);
    printf("min=%4d\n",min);
    printf("avg=%4d\n",sum/n);
    return 0;
}