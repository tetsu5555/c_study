#include <stdio.h>

int main()
{
  int i;
  i = 0;

  while (1) {
    printf("%d ", i);
    if (i == 5) {
      i = 0;
      continue;
    }
    i++;
  }
  
  return 0;
}
