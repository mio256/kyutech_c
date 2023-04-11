#include <stdio.h>

#define N 5

int minusmax(int a[N])
{
    int i, ans;

    ans = -10000;
    for (i = 0; i < N; i++)
    {
        // if(a[i]<0&&a[i]>ans) が一番エレガント→条件式 論理演算子 論理積
        if (a[i] < 0)
        {
            if (a[i] > ans)
            {
                ans = a[i];
            }
        }
    }

    // エレガントではない
    if (ans == -10000)
    {
        return 0;
    }
    else
    {
        return ans;
    }
}

int main(void)
{
    int a[N];
    int i;

    //  ここで a[0]~a[N-1] の値を入力する
    for (i = 0; i < N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("minusmax = %d\n", minusmax(a));

    return 0;
}