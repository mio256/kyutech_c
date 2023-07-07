#include <stdio.h>
#include "simplestack.h"

int main(void)
{
    char *str;
    stackInit();

    scanf("%s", str);

    for (; *str != '\0'; str++)
        stackPush(*str);

    while (!stackIsEmpty())
        printf("%c", stackPop());
    printf("\n");

    return 0;
}
