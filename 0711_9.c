#include <stdio.h>

#define N 10

void sparray(int x[], int *psum, int *pprod){
    int i, sm, pd;

    sm=0;
    pd=1;
    for(i=0;i<N;i++){
        sm+=x[i];
        pd*=x[i];
    }
    *psum=sm;
    *pprod=pd;
}

int main(void){
    int i,sum,prod,a[N];

    for(i=0;i<N;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    sparray(a,&sum,&prod);
    printf("sum=%d, prod=%d\n",sum,prod);
        
    return 0;
}
