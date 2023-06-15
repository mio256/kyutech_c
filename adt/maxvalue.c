#include <stdio.h>
#include <stdlib.h>

#define MAXDATA 100

/* 配列にデータを読み込み読み込んだデータ数を返す */
int readdata(int array[], int size);
/* 配列内のデータの最大値を返す */
int maxvalue(int array[], int size);
/* 第一引数を出力した後に配列のデータをすべて出力する */
void printdata(int maxvalue, int array[], int size);

int main(void)
{
    int array[MAXDATA];
    int size, value;

    size = readdata(array, MAXDATA);

    value = maxvalue(array, size);

    printdata(value, array, size);

    return 0;
}

int readdata(int array[], int size)
{
    int i, value;

    for (i = 0; scanf("%d", &value) != EOF; i++)
    {
        if (i >= size)
        {
            fprintf(stderr, "ERROR: 配列が溢れました。\n");
            exit(1);
        }
        array[i] = value;
    }

    return i;
}

int maxvalue(int array[], int size)
{
    int vmax, i;

    vmax = array[0];
    for (i = 1; i < size; i++)
    {
        if (array[i] > vmax)
            vmax = array[i];
    }

    return vmax;
}

void printdata(int maxvalue, int array[], int size)
{
    int i;

    printf("---DATA---\n");
    for (i = 0; i < size; i++)
    {
        printf("%d: %d\n", i, array[i]);
    }
    printf("MAXVALUE: %d\n", maxvalue);
}
