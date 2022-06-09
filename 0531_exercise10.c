#include <stdio.h>

int main(void){
    int n;

    printf("n=");
    scanf("%d",&n);
    n=n%5;

    if(n==0){
        printf("red\n");
    }else if(n==1){
        printf("yellow\n");
    }else if(n==2){
        printf("blue\n");
    }else if(n==3){
        printf("red\n");
    }else if(n==4){
        printf("yellow\n");
    }
    
    return 0;
}