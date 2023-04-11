#include <stdio.h>

int max(int x, int y){
    int ret;

    ret = (x>y) ? x:y;

    return ret;
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