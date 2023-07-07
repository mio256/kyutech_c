#include <stdio.h>

int main(void)
{
    int a;
    int *p;

    // intの中身は整数、int*の中身はアドレス
    a = 5;
    p = &a;

    printf("a=%d\n", a);   // aの中身
    printf("&a=%p\n", &a); // aのアドレス
    printf("p=%p\n", p);   // pの中身
    printf("&p=%p\n", &p); // pのアドレス
    printf("*p=%d\n", *p); // pの中身（aのアドレス）の中身 = pの先
}
