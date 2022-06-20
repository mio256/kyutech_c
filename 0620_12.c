#include <stdio.h>

int a;

void disp(void){
    for(i=1;i<=4;i++){
        printf("i=%d\n",i);
    }
}

int main(void){
    for(i=1;i<=4;i++){
        disp();
    }

    return 0;
}