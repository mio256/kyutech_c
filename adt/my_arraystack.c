#include <stdlib.h>
#include "my_arraystack.h"

STACK *newStack(void)
{
    STACK *sp;

    sp = (STACK *)malloc(sizeof(STACK));
    sp->index = 0;

    return sp;
}

void push(STACK *sp, int v)
{
    sp->data[sp->index++] = v;
}
int pop(STACK *sp)
{
    return sp->data[--sp->index];
}
int len(STACK *sp)
{
    return sp->index;
}
int isEmpty(STACK *sp)
{
    if (sp->index == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(STACK *sp)
{
    if (sp->index >= MAX_SIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
