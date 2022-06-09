#include <stdio.h>

int main(void){
    int x,i,n,max;
    printf("n=");
    scanf("%d",&n);
    max=-1;
    for(i=1;i<=n;i++){
        printf("x=");
        scanf("%d",&x);
        if(x>max){
            max=x;
        }
    }
    printf("max=%4d\n",max);
    return 0;
}