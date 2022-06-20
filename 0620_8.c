#include <stdio.h>

void disp(void){
    int i;

    for(i=1;i<=4;i++){
        printf("i=%d\n",i);
    }
}

int main(void){
    int i;

    for(i=1;i<=4;i++){
        disp();
    }
    
    return 0;
}