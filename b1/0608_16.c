#include <stdio.h>

int main(void){
    int a,b,i,n;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    for(i=1;i<a&&i<b;i++){
        if(a%i==0&&b%i==0){
            n=i;
        }
    }
    printf("n=%d\n",n);
    return 0;
}