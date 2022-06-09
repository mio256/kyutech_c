#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    int n[10];
    srand((unsigned int)time(NULL));

    for (i = 0; i < 10; i++)
    {
        n[i] = rand() % 10 + 1;
        printf("%d ", n[i]);
    }
    printf("\n\n");

    printf("奇数:");
    for (i = 0; i < 10; i++)
    {
        if (n[i] % 2 == 1)
        {
            printf("%d ", n[i]);
        }
    }
    printf("\n");

    printf("偶数:");
    for (i = 0; i < 10; i++)
    {
        if (n[i] % 2 == 0)
        {
            printf("%d ", n[i]);
        }
    }
    printf("\n");

    return 0;
}
