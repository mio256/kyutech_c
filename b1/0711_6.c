#include <stdio.h>

int main(void){
    int x=1,y=2,*p,*q;

    printf("x=%d, y=%d\n",x,y);
    printf("&x=%p, &y=%p\n",&x,&y);
    p=&x;
    *p=*p+3;
    printf("x=%d, y=%d\n",x,y);
    p=&y;
    *p=*p+3;
    printf("x=%d, y=%d\n",x,y);
    q=p;
    *q=*q+3;
    printf("x=%d, y=%d\n",x,y);

    return 0;
}
