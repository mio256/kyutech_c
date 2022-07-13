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
            tmp=rand()%15 + 1;
            tmp+=15*i;
            while(c[tmp]==0){
                tmp=rand()%15 + 1;
                tmp+=15*i;
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
    i=(tmp-1)/15;
    for(j=0;j<5;j++){
        if(a[i][j]==tmp){
            printf("i=%d, j=%d\n",i,j);
        }
    }

    return 0;
}