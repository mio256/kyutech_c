#include <stdio.h>

int static_func(void){
    static int c=0;
    // 初期化されない
    // 静的変数
    // 一回しか宣言しない、関数が終わった後に勝手に消すな
    c++;
    return c;
}

int auto_func(void){
    int c=0;
    // 自動的変数
    // 関数が終わった後は自動で消す
    c++;
    return c;
}

int main(void){
    printf("%d\n",static_func());
    printf("%d\n",static_func());
    printf("%d\n",static_func());
    printf("%d\n",static_func());
    printf("%d\n",static_func());

    printf("%d\n",auto_func());
    printf("%d\n",auto_func());
    printf("%d\n",auto_func());
    printf("%d\n",auto_func());
    printf("%d\n",auto_func());
    return 0;
}