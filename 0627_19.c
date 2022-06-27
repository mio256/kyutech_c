#include <stdio.h>

int max(int x, int y){
    return (x>y) ? x:y;
}

int main(void)
{
    int a,b;

    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("max=%d\n",max(a,b));

    return 0;
}