#include <stdio.h>

void swap(int *px, int *py){
    int tmp;
    tmp=*py;
    *py=*px;
    *px=tmp;
}

int main(void){
    int a,b;

    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    
    return 0;
}
