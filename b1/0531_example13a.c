#include <stdio.h>

int main(void){
    int i,j,m,n,s;

    printf("m=");
    scanf("%d",&m);
    printf("n=");
    scanf("%d",&n);
    s=0;
    i=1;
    while(i<=m){
        j=1;
        while(j<=n){
            s+=i*j;
            j++;
        }
        i++;
    }
    printf("s=%3d\n",s);

    return 0;
}