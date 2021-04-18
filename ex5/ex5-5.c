#include <stdio.h>

float triangle (float base, float height) 
{
  float c;
  c = (base * height) / 2.000F;
  return c;
}

int main()
{
  float t;
  t = triangle(3.00, 4.00);
  printf("triangle = %f\n", t);
  t = triangle(5.00, 6.00);
  printf("triangle = %f\n", t);

  return 0;
}
