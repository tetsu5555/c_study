#include <stdio.h>
#include <stdlib.h>

#define POINTS 10000

int main()
{
  int i, count, points;
  double x, y, q;
  double pi;

  points = POINTS;
  count = 0;

  for (i = 0; i < points; i++) {
    // ここどういう意味だろう？
    x = (double) rand() / ((double) RAND_MAX + 1.0);
    y = (double) rand() / ((double) RAND_MAX + 1.0);
    // 座標→半径？
    q = (x * x) + (y * y);

    if (q <= 1.00)
      count++;
  }

  // piを求める
  pi = (double) count / (double) points * (double) 4.00;
  printf("circle: %d\t", count);
  printf("points: %d\t", points);
  printf("PI: %f\t", pi);

  return 0;
}
