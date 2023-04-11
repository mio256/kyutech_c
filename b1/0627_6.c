#include <stdio.h>

#define N 10

int sumarray(int x[]){
    int i,sum;

    sum=x[0];
    for(i=1;i<N;i++){
       sum+=x[i];
    }

    return sum;
}

int main(void)
{
    int i,a[N];

    for (i = 0; i < N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("sum = %4d\n", sumarray(a));

    return 0;
}