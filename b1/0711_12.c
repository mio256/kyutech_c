#include <stdio.h>

#define N 10

void swap(int *px, int *py)
{
  int temp;

  temp = *py;
  *py = *px;
  *px = temp;
}

int main(void)
{
  int i, j, a[N];

  for (i = 0; i < N; i++) {
    printf("a[%1d] = ? ", i);
    scanf("%d", &a[i]);
  }
  for (i = 0; i < N - 1; i++) {
    for (j = i + 1; j < N; j++) {
      if (a[i] < a[j]) {
        swap(&a[i], &a[j]);
      }
    }
  }
  for (i = 0; i < N; i++) {
    printf("a[%1d] = %3d\n", i, a[i]);
  }

  return 0;
}