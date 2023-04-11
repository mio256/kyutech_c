#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,n;
    double s;

    printf("n = ?");
    scanf("%d", &n);
    i = 1;
    s = 1;
    while(i < n){
        i++;
        s = s + sqrt(4 * i - 3);
    }
    printf("s = %3lf\n", s);

    return 0;
}