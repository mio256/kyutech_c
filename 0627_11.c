#include <stdio.h>

#define N 10

int zerosum(int x[]){
    int i;

    for(i=0;i<N;i++){
        if(x[i]==0){
            return i;
        }
    }

    return N;
}

int main(void)
{
    int i, a[N];

    for (i = 0; i < N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("zerosum = %d\n", zerosum(a));

    return 0;
}