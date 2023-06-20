#include <stdlib.h>
#include "simplestack.h"

typedef struct node
{
    struct node *next;
    int value;
} NODE;

NODE *root;

void stackInit(void)
{
    root = NULL; /* 最初はノードなし */
}

void stackPush(int v)
{
    NODE *np;

    /* ノードの確保と値の設定 */
    np = (NODE *)malloc(sizeof(NODE));
    np->value = v;

    /* ノードの挿入 */
    np->next = root;
    root = np;
}

int stackPop(void)
{
    NODE *np;
    int v;

    /* ノードの除去 */
    np = root;
    root = np->next;

    v = np->value; /* ノードの開放前に値を確保 */
    free(np);      /* ノードの開放 */

    return v;
}

int stackElement(void)
{
    NODE *np;
    int num;

    /* ノードをたどって要素数を数える */
    for (num = 0, np = root; np != NULL; np = np->next)
        num++;

    return num;
}

int stackIsEmpty(void)
{
    if (root == NULL)
        return TRUE;
    else
        return FALSE;
}

int stackIsFull(void)
{
    return FALSE; /* あふれることはない */
}
