#include <stdio.h>

int main(void){
    char c;
    int a;

    printf("c=");
    scanf("%c",&c);
    printf("code:%d\n",c);
    a=c+1;
    printf("a=%d\n",a);
    printf("prev char:%c\n",c-1);
    if(c>'X'){
        printf("%c is greater than X\n",c);
    }else{
        printf("%c is equal to or less than X\n",c);
    }
}