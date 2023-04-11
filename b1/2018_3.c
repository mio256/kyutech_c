#include <stdio.h>
#define N 10

int sortlsd(int a[]){
    int i,j,tmp;

    for(i=0;i<N;i++){
        for(j=i;j<N;j++){
            if(a[i]%10<a[j]%10){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
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

    sortlsd(a);

    for(i=0;i<N;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }

    return 0;
}