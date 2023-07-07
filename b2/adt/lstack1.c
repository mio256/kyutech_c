#include <stdio.h>
#include <stdlib.h>
#include "simplestack.h"

int main(void)
{
    int i;

    stackInit();

    printf("Element %d\n", stackElement());

    for (i = 0; i < 200; i++)
    {
        if (!stackIsFull())
        {
            stackPush(i);
        }
        else
        {
            fprintf(stderr, "Error: StackOverflow! %d\n", stackElement());
            exit(1);
        }
    }

    printf("Element %d\n", stackElement());

    while (!stackIsEmpty())
        printf("%d\n", stackPop());

    printf("Element %d\n", stackElement());

    return 0;
}
