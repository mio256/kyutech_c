#include <stdio.h>

void swap(int *x, int *y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;
}

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

    *p = 10;
    printf("a=%d\n", a); // aの中身が変わっている

    int x, y, t;
    x = 6;
    y = 5;
    printf("x=%d, y=%d\n", x, y);

    // xとyのアドレス
    printf("&x=%p\n", &x);
    printf("&y=%p\n", &y);

    swap(&x, &y); // xとyの値を入れ替える
    printf("x=%d, y=%d\n", x, y);
}
