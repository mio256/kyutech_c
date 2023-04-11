#include <stdio.h>

#define N 3

void multk(int k,int x[][N],int y[][N]){
    int i,j;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            y[i][j]=k*x[i][j];
        }
    }
}

int main(void){
    int i,j,k,a[N][N],b[N][N];

    printf("k=");
    scanf("%d",&k);

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    multk(k,a,b);
    for(i=0;i<N;i++){
	    for(j=0;j<N;j++){
		    printf("%4d",b[i][j]);
	    }
        printf("\n");
    }

    return 0;
}
