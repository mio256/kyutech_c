#include <stdio.h>

#define N 5

int main(void)
{
    int i, min, a[N];

    // 入力
    for (i = 0; i < N; i++){
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    
    // 奇数の最小値の計算
    min = 10000;
    for (i = 0; i < N; i++){
        if(a[i]%2 == 1){
            if(a[i] < min){
                min = a[i];
            }
        }
    }

    // 結果の出力
    printf("min = %d\n", min);

    return 0;
}