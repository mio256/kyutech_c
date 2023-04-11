#include <stdio.h>

int main(void){
    char c;
    int a;

    printf("c=");
    scanf("%c",&c);
    printf("code:%d\n",c);
    printf("prev char:%c\n",c-1);
    printf("after char:%c\n",c+1);

    return 0;
}