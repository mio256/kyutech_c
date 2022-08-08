#include <stdio.h>
#define N 10

int exist3(int a[]){
    int i;
    for(i=0;i<N;i++){
        if(a[i]%3==0){
            return 1;
        }
    }
    return 0;
}

int main(void){
    int a[N];
    int i;
    for(i=0;i<N;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("exist3=%d\n",exist3(a));

    return 0;
}