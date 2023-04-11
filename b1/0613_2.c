#include <stdio.h>

int main(void){
    int x,i,n,num[5];
    for(i=0;i<5;i++){
        num[i]=0;
    }
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        printf("x=");
        scanf("%d",&x);
        if(x>=0&&x<=4){
            num[x]++;
        }
    }
    for(i=0;i<5;i++){
        printf("%1d: %3d\n",i,num[i]);
    }
    return 0;
}