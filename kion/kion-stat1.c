#include <stdio.h>

#define ARRAYSIZE 24

void kion_print(double array[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%2d時: %2.1lf\n", i, array[i]);
    }
}

double kion_heikin(double array[], int size)
{
    int i;
    int sum;

    for (i = 0, sum = 0; i < size; i++)
    {
        sum += array[i];
    }

    return (double)sum / size;
}

int main(void)
{
    double kion[ARRAYSIZE] = {
        12.8,
        12.0,
        11.4,
        11.2,
        10.6,
        10.6,
        10.3,
        10.6,
        13.1,
        16.9,
        20.1,
        22.2,
        21.9,
        22.5,
        23.9,
        24.1,
        22.9,
        21.9,
        20.1,
        18.9,
        17.6,
        17.0,
        16.4,
        15.7,
    };

    kion_print(kion, ARRAYSIZE);
    printf("平均: %2.1lf\n", kion_heikin(kion, ARRAYSIZE));

    return 0;
}