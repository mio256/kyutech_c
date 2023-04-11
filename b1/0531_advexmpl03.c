#include <stdio.h>

int main(void){
    int a;

    printf("a=");
    scanf("%d",&a);

    switch(a){
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("one\n");
            break;
        case 3:
        case 4:
            printf("three or four\n");
            break;
        default:
            printf("other\n");
            break;
    }
    
    return 0;
}