//benngaku c 0515_prime2.c

#include <stdio.h>

int main(void){
    int n,i;

    printf("n=");
    scanf("%d",&n);
    
    if(n==0){
        printf("NO\n");
    }else if(n==1){
        printf("NO\n");
    }else if(n==2){
        printf("PRIME\n");
    }else{
        for(i=2;i<n;i++){
            if(n%i==0){
                printf("NO\n");
                return 0;
            }
        }
        printf("PRIME\n");
    }

    return 0;
}