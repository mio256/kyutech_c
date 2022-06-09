#include <stdio.h>

int main(void){
    int x,i,n,max,min,sum;
    printf("n=");
    scanf("%d",&n);
    max=-1;
    min=10000;
    sum=0;
    for(i=1;i<=n;i++){
        printf("x=");
        scanf("%d",&x);
        if(x>max){
            max=x;
        }
        if(x<min){
            min=x;
        }
        sum+=x;
    }
    printf("max=%4d\n",max);
    printf("min=%4d\n",min);
    printf("avg=%4d\n",sum/n);
    return 0;
}