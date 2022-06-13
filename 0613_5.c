#include <stdio.h>

int main(void){
    int i,n,max,x[100];
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("x[%1d]=",i);
        scanf("%d",&x[i]);
    }
    max=0;
    for(i=0;i<n;i++){
        if(x[i]>max){
            max=x[i];
        }
    }
    printf("max=%4d\n",max);
    return 0;
}