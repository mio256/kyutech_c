#include <stdio.h>
#include "arraystack.h"

#define MAXLINE 200

/* 文字列中の文字の位置を取得 */
int findchar(char str[], int c);
/* エラーメッセージの出力 */
void printerror(char msg[], char buff[], int pos);
/* スタックの掃除 */
void stackclean(STACK *sp);

int main(void)
{
    char buff[MAXLINE];
    char bopen[] = "<{([";
    char bclose[] = ">})]";
    int c, i, bidx;
    STACK *sp;

    sp = newStack();

    while (fgets(buff, MAXLINE, stdin) != NULL)
    {
        for (i = 0; buff[i] != '\0'; i++)
        {
            if (findchar(bopen, buff[i]) != -1)
            {
                /* 開き括弧は記録 */
                stackPush(sp, buff[i]);
            }
            else if (findchar(bclose, buff[i]) != -1)
            {
                /* 閉じ括弧の処理 */
                if (stackIsEmpty(sp))
                { /* 対応する開き括弧が記録されていない */
                    printerror("閉じ括弧が多すぎます", buff, i);
                    stackclean(sp);
                    break;
                }
                else
                {
                    c = stackPop(sp);          /* 開き括弧の取得 */
                    bidx = findchar(bopen, c); /* bopen中の括弧の添字を取得 */
                    if (bclose[bidx] != buff[i])
                    { /* bclose[bidx]は対応する閉じ括弧 */
                        printerror("括弧の対応が取れていません", buff, i);
                        stackclean(sp);
                        break;
                    }
                }
            }
            /* 括弧以外の文字は処理しない */
        }

        /* 最後にスタックに開き括弧が残っていたら */
        if (!stackIsEmpty(sp))
        {
            printerror("閉じ括弧が不足しています", buff, i);
            stackclean(sp);
        }
    }

    return 0;
}

int findchar(char str[], int c)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
            return i;
    }

    return -1;
}

void printerror(char msg[], char buff[], int pos)
{
    int i;

    printf("ERROR: %s\n", msg);
    printf("%s", buff);
    for (i = 0; i < pos; i++)
        printf(" ");
    printf("|\n");
}

void stackclean(STACK *sp)
{
    while (!stackIsEmpty(sp))
        stackPop(sp);
}
