#include <stdio.h>

int main(void)
{
    int i,n,s;

    printf("n = ?");
    scanf("%d", &n);
    s = 0;
    for(i = 1 ; i <= n ; i++){
        s = s + i;
    }
    printf("s = %3d\n", s);

    return 0;
}