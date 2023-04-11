#include <stdio.h>

#define N 10

int m3num(int x[]){
    int i;

    for(i=0;i<N;i++){
        if(x[i]%3==0){
            break;
        }
    }

    return i;
}

int main(void)
{
    int i, a[N];

    for (i = 0; i < N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("m3num = %d\n", m3num(a));

    return 0;
}