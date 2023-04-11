#include <stdio.h>

#define N 5

int oddprod(int a[N])
{
    int i, ans;

    ans = 1;
    for(i = 0; i < N; i++){
        // a[i]%2 != 0 も可
        if(a[i]%2 == 1){
            // ans *= a[i]; も可
            ans = ans * a[i];
        }
    }

    if(ans == 1){
        return 0;
    }else{
        return ans;
    }

    // 一番最後にif文でゴリ押しするのはあまりエレガントな書き方ではない
    // 興味があればエレガントな書き方にチャレンジするのも面白いと思う
}


int main(void)
{
    int a[N];
    int i;

    // ここでa[0]~a[N-1] の値を入力する
    for(i = 0; i < N; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("oddprod = %2d\n", oddprod(a));

    return 0;
}