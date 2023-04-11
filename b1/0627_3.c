#include <stdio.h>

#define N 3

void add1(int x,int y[]){
    int i;

    x++;
    for(i=0;i<N;i++){
        y[i]++;
    }
}

int main(void)
{
    int i,a,b[N];

    a=0;
    for (i = 0; i < N; i++)
    {
        b[i]=0;
    }
    add1(a,b);
    printf("a = %d\n", a);
    for(i=0;i<N;i++){
        printf("b[%d] = %d\n",i,b[i]);
    }

    return 0;
}