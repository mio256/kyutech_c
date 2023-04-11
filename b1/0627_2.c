#include <stdio.h>

#define N 10

int maxarray(int x[]){
    int i,max;

    max=x[0];
    for(i=1;i<N;i++){
        if(x[i]>max){
            max=x[i];
        }
    }

    return max;
}

int main(void)
{
    int i,a[N];

    for (i = 0; i < N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("max = %4d\n", maxarray(a));

    return 0;
}