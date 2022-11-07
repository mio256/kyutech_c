/* prog0506.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10000

struct POINT2D_EX
{
    double x;
    double y;
    double dist;
};

void read_point(struct POINT2D_EX po[])
{
    FILE *file;
    int i;

    file = fopen("data2.txt", "r");
    for (i = 0; i < N; i++)
    {
        fscanf(file, "%lf %lf", &po[i].x, &po[i].y);
    }
    fclose(file);
}

void calc_dist(struct POINT2D_EX pt, struct POINT2D_EX po[])
{
    int i;

    for (i = 0; i < N; i++)
    {
        po[i].dist = sqrt(pow(pt.x - po[i].x, 2) + pow(pt.y - po[i].y, 2));
    }
}

void swap_point(struct POINT2D_EX po[], int x, int y)
{
    struct POINT2D_EX t;

    t.x = po[x].x;
    t.y = po[x].y;
    t.dist = po[x].dist;

    po[x].x = po[y].x;
    po[x].y = po[y].y;
    po[x].dist = po[y].dist;

    po[y].x = t.x;
    po[y].y = t.y;
    po[y].dist = t.dist;
}

int partition_point(struct POINT2D_EX po[], int left, int right)
{
    int i, j;
    double pivot;

    pivot = po[right].dist;

    i = left;
    j = right - 1;
    while (i <= j)
    {
        while (po[i].dist < pivot)
            i++;
        while (po[j].dist >= pivot && j >= i)
            j--;
        if (i < j)
        {
            swap_point(po, i, j);
        }
    }
    swap_point(po, i, right);

    return i;
}

void qsort_point(struct POINT2D_EX po[], int left, int right)
{
    int p_index;

    if (left < right)
    {
        p_index = partition_point(po, left, right);
        qsort_point(po, left, p_index - 1);
        qsort_point(po, p_index + 1, right);
    }
}

int main(void)
{
    struct POINT2D_EX pt[N];
    struct POINT2D_EX ref_p;

    read_point(pt);

    // printf("基準点のx座標とy座標を入力: ");
    scanf("%lf %lf", &ref_p.x, &ref_p.y);
    
    printf(" "); //Expected bug

    calc_dist(ref_p, pt);
    qsort_point(pt, 0, N - 1);

    printf("最初の座標 x=%.5f y=%.5f\n", pt[0].x, pt[0].y);
    printf("最後の座標 x=%.5f y=%.5f\n", pt[N - 1].x, pt[N - 1].y);
    printf("N/2番目の座標 x=%.5f y=%.5f\n", pt[N / 2 - 1].x, pt[N / 2 - 1].y);

    return 0;
}