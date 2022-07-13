/* ビンゴマシンから出た番号を人が入れるバージョン */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5       /* 縦横の大きさ */
#define M 15      /* 同じ列内の数の幅 */
#define HOLE (-1) /* 穴 */

/* numset(): ダブりなく x[][] に乱数を入れ中央に穴を空ける */
void numset(int x[][N])
{
    /* ダブりなく x[][] に乱数を入れ中央に穴を空ける */
    int available[100];
    int i, j, tmp;

    for (i = 0; i < 100; i++)
    {
        available[i] = 1;
    }

    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            tmp = rand() % M + 1;
            tmp += M * i;
            while (available[tmp] == 0)
            {
                tmp = rand() % M + 1;
                tmp += M * i;
            }
            x[i][j] = tmp;
            available[tmp] = 0;
        }
    }

    x[2][2] = HOLE;
}

/* search(): x[*pi][*pj] = num になる (*pi, *pj) を探す．その有無も
 *pfound に入れて返す */
void search(int num, int x[][N], int *pfound, int *pi, int *pj)
{
    int i, j;

    /* x[*pi][*pj] = num になる (*pi, *pj) を探す．
       その有無も *pfound に入れて返す */
    *pfound = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (x[i][j] == num)
            {
                *pi = i;
                *pj = j;
                *pfound = 1;
            }
        }
    }
}

/* check(): x[inum][jnum] でゲームが継続するかを判定し，継続か否かを
 *pcont に入れて返す */
void check(int x[][N], int inum, int jnum, int *pcont)
{
    int i, j, bingo_cnt;

    /* x[inum][jnum] の縦横対角線方向を調べてBINGOになったか(ゲームが
        継続するか)を判定し，継続か否かを *pcont に入れて返す */

    // bingo j
    bingo_cnt = 0;
    for (j = 0; j < 5; j++)
    {
        if (x[inum][j] == HOLE)
        {
            bingo_cnt++;
        }
    }
    if (bingo_cnt == 5)
    {
        *pcont = 0;
    }

    // bingo i
    bingo_cnt = 0;
    for (i = 0; i < 5; i++)
    {
        if (x[i][jnum] == HOLE)
        {
            bingo_cnt++;
        }
    }
    if (bingo_cnt == 5)
    {
        *pcont = 0;
    }

    // bingo cross
    if (jnum == inum)
    {
        bingo_cnt = 0;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (x[i][j] == HOLE)
                {
                    bingo_cnt++;
                }
            }
        }
        if (bingo_cnt == 5)
        {
            *pcont = 0;
        }
    }
    if (jnum + inum == N - 1)
    {
        bingo_cnt = 0;
        for (i = 0; i < 5; i++)
        {
            for (j = 5; j > 0; j--)
            {
                if (x[i][j] == HOLE)
                {
                    bingo_cnt++;
                }
            }
        }
        if (bingo_cnt == 5)
        {
            *pcont = 0;
        }
    }
}

/* numout(): 現在の x[][] の状態を出力する */
void numout(int x[][N])
{
    int i, j;

    /* 現在の x[][] の状態(盤面)を出力する */
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (x[i][j] == HOLE)
            {
                printf("  --");
            }
            else
            {
                printf("%4d", x[i][j]);
            }
        }
        printf("\n");
    }
}

/* メインプログラム */
int main(void)
{
    int num;     /* ビンゴマシンから出た番号 */
    int cont;    /* BINGO になっていないかを示す(1：未達; 0: BINGO) */
    int a[N][N]; /* 盤面 */
    /* 他にも必要な変数を加える */
    int pfound, pi, pj;

    /* 最初に numset() で最初の盤面にし，numout() で出力する */
    numset(a);
    numout(a);

    cont = 1;
    while (cont == 1)
    {
        /* (1) 1 <= n <= 75 である num を scanf で入力する */
        printf("num=");
        scanf("%d", &num);
        /* (2) search() で 盤面に num があるか調べる */
        search(num, a, &pfound, &pi, &pj);
        /* (3) (2) で見つかったらその場所に穴を開け，
               check() で BINGO になったか調べ，
               BINGO になったら cont を 0 にする(while 文を抜ける) */
        if (pfound == 1)
        {
            a[pi][pj] = HOLE;
            check(a, pi, pj, &cont);
        }
        /* (4) 毎回 numout() で変化した盤面を表示する */
        numout(a);
        /* 終了表示 */
    }
}