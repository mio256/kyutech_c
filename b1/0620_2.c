#include <stdio.h>

int main(void){
    int i,j,k,a[3][3],b[3][3],c[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}