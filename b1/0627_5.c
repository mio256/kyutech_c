#include <stdio.h>

#define N 10

int minarray(int x[]){
    int i,min;

    min=x[0];
    for(i=1;i<N;i++){
        if(x[i]<min){
            min=x[i];
        }
    }

    return min;
}

int main(void)
{
    int i,a[N];

    for (i = 0; i < N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("min = %4d\n", minarray(a));

    return 0;
}