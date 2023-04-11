#include <stdio.h>

#define N 10

int sparray(int x[], int *pprod){
    int i,sm,pd;

    sm=0;
    pd=1;
    for(i=0;i<N;i++){
        sm+=x[i];
        pd*=x[i];
    }
    *pprod=pd;

    return pd;
}

int main(void){
    int i, prod, a[N];

    for(i=0;i<N;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("sum=%d\n",sparray(a,&prod));
    printf("prod=%d\n",prod);
    
    return 0;
}
