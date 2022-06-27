#include <stdio.h>

int max(int x, int y){
    int ret;

    if(x>y){
        ret =x;
    }else{
        ret=y;
    }

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