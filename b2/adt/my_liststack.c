#include <stdlib.h>
#include "my_liststack.h"

STACK *new(void)
{
    STACK *sp;

    sp = (STACK *)malloc(sizeof(STACK));
    sp->root = NULL;
    sp->size = 0;

    return sp;
}
void push(STACK *sp, int v)
{
    NODE *np;

    np = (NODE *)malloc(sizeof(NODE));
    np->value = v;

    np->next = sp->root;
    sp->root = np;

    sp->size++;
}
int pop(STACK *sp)
{
    int v;
    NODE *np;

    np = sp->root;
    sp->root = np->next;

    v = np->value;
    free(np);

    sp->size--;

    return v;
}
int len(STACK *sp)
{
    return sp->size;
}
int isEmpty(STACK *sp)
{
    if (sp->root = NULL)
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
    return 0;
}
