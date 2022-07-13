#include <stdio.h>

#define N 10

void power(double x, int y, double *ans){
    int i, tmp;

    if(y==0){
        tmp=1;
    }else{
        tmp=x;
        for(i=1;i<y;i++){
            tmp*=x;
        }
    }

    *ans=tmp;
}

int main(void){
    double a,ans;
    int i,n;

    printf("a=");
    scanf("%lf",&a);
    printf("n=");
    scanf("%d",&n);
    power(a,n,&ans);
    printf("ans=%lf\n",ans);
        
    return 0;
}
