#include <stdio.h>

#define ARRAY_SIZE 10

int main()
{
  int a[ARRAY_SIZE] = { 30, 20, 10, 25, 15 };
  int i, sum, avg;

  sum = 0;
  for (i = 0; i < ARRAY_SIZE; i++) {
    sum += a[i];
  }
  
  avg = sum / ARRAY_SIZE;
  printf("%d\n", avg);

  return 0;
}
