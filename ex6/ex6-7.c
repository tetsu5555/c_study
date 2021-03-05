#include <stdio.h>

int main()
{
  char s[4];
  s[0] = 'O';
  s[1] = 'U';
  s[2] = 'J';
  s[0] = '\0';
  printf("%s\n", s);

  return 0;
}
