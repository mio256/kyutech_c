#include <stdio.h>

#define N 10

void maxminarray(int array[], int *max, int *min){
    int i,tmp_min=10000,tmp_max=0;

    for(i=0;i<N;i++){
        if(array[i]<tmp_min){
            tmp_min=array[i];
        }
        if(array[i]>tmp_max){
            tmp_max=array[i];
        }
    }

    *max=tmp_max;
    *min=tmp_min;
}

int main(void){
    int i,array[N],max,min;

    for(i=0;i<N;i++){
        printf("array[%d]=",i);
        scanf("%d",&array[i]);
    }

    maxminarray(array,&max,&min);

    printf("max=%d\n",max);
    printf("min=%d\n",min);
        
    return 0;
}
