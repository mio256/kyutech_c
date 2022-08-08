#include <stdio.h>
#define NAMSIZE 16    /* 名前の最大長 +1 */
#define NUMSEAT 10    /* 座席数 */
#define COMBUFSIZE 80 /* コマンド用バッファサイズ */

int occup[NUMSEAT];           /* 予約済/未済 */
char names[NUMSEAT][NAMSIZE]; /* 予約者名 */
int numres;                   /* 予約者数 */

/* skipln(): scanf() の後に入れる */
void skipln(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
        ;
    }
}

/* initialize(): 内部データ初期化 */
void initialize(void)
{
    int i;
    for (i = 0; i < NUMSEAT; i++)
    {
        occup[i] = 0;
    }
    numres = 0;
}

/* append(): 予約追加 */
void append(void)
{
    int i, unres;
    if (numres >= NUMSEAT)
    {
        printf("満席.\n");
        return;
    }
    unres = 1;
    for (i = 0; unres && i < NUMSEAT; i++)
    {
        if (occup[i] == 0)
        {
            occup[i] = 1;
            printf("氏名 ? ");
            gets(names[i]);
            numres++;
            printf("座席番号: %2d\n", i);
            unres = 0;
        }
    }
}
/* list(): 予約状況表示 */
void list(void)
{
    int i;
    for (i = 0; i < NUMSEAT; i++)
    {
        if (occup[i] == 1)
        {
            printf("座席番号: %1d 氏名: %s\n", i, names[i]);
        }
    }
}

/* delnum(): 予約取消 (座席番号) */
void delnum(void)
{
    int n;
    printf("座席番号 ? ");
    scanf("%d", &n);
    skipln();
    if (occup[n] == 1)
    {
        occup[n] = 0;
        numres--;
        printf("取消完了.\n");
    }
    else
    {
        printf("未予約座席.\n");
    }
}

/* help(): ヘルプ */
void help(void)
{
    printf("a: 予約追加\n");
    printf("l: 予約状況表示\n");
    printf("d: 座席番号から予約取消\n");
    printf("h: ヘルプ\n");
    printf("q: 終了\n");
}

/* メインプログラム */
int main(void)
{
    char command[COMBUFSIZE]; /* 命令 */
    initialize();
    /* 命令入力 (1) */
    printf("命令 ? ");
    gets(command);
    while (command[0] != 'q')
    {
        /* 命令毎の処理 */
        if (command[0] == 'a')
        {
            append();
        }
        else if (command[0] == 'l')
        {
            list();
        }
        else if (command[0] == 'd')
        {
            delnum();
        }
        else if (command[0] == 'h')
        {
            help();
        }
        else
        {
            printf("命令エラー.\n");
        }
        /* 命令入力 (2) */
        printf("命令 ? ");
        gets(command);
    }
    return 0;
}