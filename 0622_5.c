#include <stdio.h>
#include <math.h>

#define N 5

double distmin(double x[N], double y[N])
{
    double sum_x, sum_y, avg_x, avg_y, d;
    int i;

    sum_x = 0;
    sum_y = 0;
    for (i = 0; i < N; i++)
    {
        sum_x = sum_x + x[i];
        sum_y = sum_y + x[i];
    }

    avg_x = sum_x / N;
    avg_y = sum_y / N;

    d = 1000;

    for (i = 0; i < N; i++)
    {
        d = sqrt((x[i] - avg_x) * (x[i] - avg_x) + (y[i] - avg_y) * (y[i] - avg_y));
    }

    return d;
}

int main(void)
{
    double x[N], y[N];
    int i;

    for (i = 0; i < N; i++)
    {
        printf("x[%d] = ", i);
        scanf("%lf", &x[i]);
        printf("y[%d] = ", i);
        scanf("%lf", &y[i]);
    }

    printf("distmin = %8.4f\n", distmin(x, y));

    return 0;
}