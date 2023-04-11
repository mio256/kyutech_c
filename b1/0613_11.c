#include <stdio.h>

int main(void){
    int x,i,num[5];

    for(i=0;i<5;i++){
        num[i]=0;
    }
    printf("x=");
    scanf("%d",&x);
    while(x>=0&&x<=4){
        num[x]++;
        printf("x=");
        scanf("%d",&x);
    }
    for(i=0;i<5;i++){
        printf("%1d: %3d\n",i,num[i]);
    }
    return 0;
}   