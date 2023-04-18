#include <stdio.h>
#include <stdlib.h>

struct kisyou
{ /* 気温データを管理するレコード */
    int month;
    int day;
    int hour;
    double kion;
};

/* 実験のため配列のサイズを少し小さく */
#define ARRAYSIZE 1000

void input_file(int* size, struct kisyou kisyoudata[])
{
    FILE *fp;
    int month, day, hour;
    double data;
    char file[100];

    printf("file>");
    scanf("%s", file);

    // "kion-20180401.csv"
    if ((fp = fopen(file, "r")) == NULL)
    {
        fprintf(stderr, "Error: File Open\n");
        exit(1);
    }

    *size = 0;
    while (fscanf(fp, "%d,%d,%d,%lf", &month, &day, &hour, &data) != EOF)
    {
        /* すべてのデータを構造体のメンバに保存 */
        kisyoudata[*size].month = month;
        kisyoudata[*size].day = day;
        kisyoudata[*size].hour = hour;
        kisyoudata[*size].kion = data;
        (*size)++;
    }

    fclose(fp);
}

int main(void)
{
    struct kisyou kisyoudata[ARRAYSIZE]; /* 構造体の配列を追加 */
    int size, i;

    input_file(&size, kisyoudata);

    for (i = 0; i < size; i++)
    {
        printf("%d月%d日%d時 %.1f\n", /* 構造体のメンバを出力 */
               kisyoudata[i].month, kisyoudata[i].day,
               kisyoudata[i].hour, kisyoudata[i].kion);
    }

    return 0;
}
