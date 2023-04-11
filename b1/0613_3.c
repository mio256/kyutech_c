#include <stdio.h>

int main(void){
    int i,s,x[5];
    for(i=0;i<10;i++){
        printf("x[%1d]=",i);
        scanf("%d",&x[i]);
    }
    s=0;
    for(i=0;i<10;i++){
        s+=x[i];
    }
    printf("s=%4d\n",s);
    return 0;
}