#include <stdio.h>

#define N 10

void sortarray(int x[])
{
    int i, j, tmp;

    for (i = 0; i < N-1; i++)
    {
        for (j = i; j < N; j++)
        {
            if(x[i]>x[j]){
                tmp=x[i];
                x[i]=x[j];
                x[j]=tmp;
            }
        }
    }
}

int main(void)
{
    int i, a[N];

    for (i = 0; i < N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    sortarray(a);

    for (i = 0; i < N; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}