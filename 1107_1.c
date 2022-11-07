#include <stdio.h>

struct DISC_POINT {
  int x;
  int y;
  int z;
};

int trans_p(struct DISC_POINT p) {
  p.x=-1; p.y=2; p.z=-5;
  return p.y-p.x;
}

int main(void)  {
  struct DISC_POINT dp;
  dp.x=10, dp.y=-20;
  dp.z=trans_p(dp);
  printf("%d %d %d\n",dp.x, dp.y, dp.z);
}