#include <stdio.h>

#define N 10

int sum3(int x[])
{
    int i, sum;

    sum = 0;
    for (i = 0; i < N; i++)
    {
        sum += (x[i] % 3 == 0) ? x[i] : 0;
    }

    return sum;
}

int main(void)
{
    int i, a[N];

    for (i = 0; i < N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("sum3 = %d\n", sum3(a));

    return 0;
}