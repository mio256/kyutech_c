#include <stdio.h>

int main(void){
    int a,b,r,tmp_a,tmp_b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    tmp_a=a;
    tmp_b=b;
    while(r!=0){
        r=a%b;
        a=b;
        if(r!=0){
            b=r;
        }
    }
    printf("gcd=%d\n",b);
    printf("lcm=%d\n",tmp_a*tmp_b/b);
    return 0;
}