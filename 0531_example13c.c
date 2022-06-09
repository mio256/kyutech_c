#include <stdio.h>

int main(void){
    int i,j,m,n,s;

    printf("m=");
    scanf("%d",&m);
    printf("n=");
    scanf("%d",&n);
    s=0;
    i=1;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            s+=i*j;
        }
    }
    printf("s=%3d\n",s);

    return 0;
}