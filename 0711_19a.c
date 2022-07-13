#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main(void){
    int i,j,a[5][5],c[100],tmp;

    for(i=0;i<N;i++){
        c[i]=1;
    }

    srand(time(NULL));
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            tmp=rand()%100;
            while(c[tmp]==0){
                tmp=rand()%100;
            }
            a[i][j]=tmp;
            c[tmp]=0;
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    printf("search=");
    scanf("%d",&tmp);
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i][j]==tmp){
                printf("i=%d, j=%d\n",i,j);
            }
        }
    }

    return 0;
}
