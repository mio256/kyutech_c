#include <stdio.h>

void main() {

    int a = 5;
    int b[3] = {2, 3, 4};

    // 変数aのアドレスをポインタpに格納
    int *p = &a;

    printf("p=%x\n",p);
    printf("&p=%x\n",&p);
    printf("*p=%x\n",*p);

    p=&b;
    p++;
    *p=6;

    printf("p=%x\n",p);
    printf("&p=%x\n",&p);
    printf("*p=%x\n",*p);

}