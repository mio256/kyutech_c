#include <stdio.h>

#define N 10

void mult2(int x[]){
    int i;

    for(i=0;i<N;i++){
        x[i]*=2;
    }
}

int main(void)
{
    int i,a[N];

    for (i = 0; i < N; i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    mult2(a);
    for(i=0;i<N;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }

    return 0;
}