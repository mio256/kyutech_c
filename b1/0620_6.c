#include <stdio.h>

void pen(void){
    printf("This ");
    printf("is ");
    printf("a pen.\n");
}

int main(void){
    pen();
    printf("It is good.\n");
    pen();
    printf("It is long.\n");
    pen();

    return 0;
}