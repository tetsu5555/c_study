#include <stdio.h>

void g (void)
{
  int i;
  for (i = 0; i < 3; i ++) {
    printf("a");
  }
}

void f (void)
{
  int i;
  for (i = 0; i < 5; i++) {
    g();
  }
}

int main()
{
  f();
  return 0;
}
