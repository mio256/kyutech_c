#include <stdio.h>

#define N 5

int main(void)
{
    int i, psum, msum, a[N];
    double pmratio;

    // 入力
    for (i = 0; i < N; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // 正数の二乗和と負数の二乗和の比の計算

    // 変数宣言のときに int psum = 0;のように初期値も同時に宣言してもよい
    psum = 0;
    for (i = 0; i < N; i++){
        if(a[i] > 0){
            // この場合()を付けなくても大丈夫だが、不安なときは付けたほうが良い→演算子優先順位を見る
            psum = psum + (a[i] * a[i]);
        }
    }

    msum = 0;
    for (i = 0; i < N; i++){
        if(a[i] < 0){
            msum = msum + (a[i] * a[i]);
        }
    }

    // キャストしなければならない。intとintの計算では小数が消えてしまう。
    pmratio = (double)psum / (double)msum;

    // 結果の出力
    printf("pmratio = %8.4f\n", pmratio);

    return 0;
}