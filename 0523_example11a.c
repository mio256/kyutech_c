#include <stdio.h>

int main(void)
{
    int i,n,s;

    printf("n = ?" );
    scanf("%d", &n);
    s = 0;
    i = n;
    while(i >= 1){
        s = s + i * i;
        i = i - 1;
    }
    printf("s = %3d\n", s);

    return 0;
}