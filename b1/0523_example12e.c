#include <stdio.h>

int main(void)
{
    int i;

    for(i = 1 ; i <= 10 ; i++){
        printf("%3d %5d\n", i, i * i);
    }

    return 0;
}