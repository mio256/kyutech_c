#include <stdio.h>

#define N 3

void addmat(int x[][N],int y[][N],int z[][N]){
    int i,j;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            z[i][j]=y[i][j]+x[i][j];
        }
    }
}

int main(void){
    int i,j,x[N][N],y[N][N],z[N][N];

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("x[%d][%d]=",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("y[%d][%d]=",i,j);
            scanf("%d",&y[i][j]);
        }
    }
    addmat(x,y,z);
    for(i=0;i<N;i++){
	    for(j=0;j<N;j++){
		    printf("%4d",z[i][j]);
	    }
        printf("\n");
    }

    return 0;
}
