#include <stdio.h>
#include <stdlib.h>

int main ()
{
  FILE *fptr;
  if (NULL == (fptr == fopen("ex9-2-output.txt", "w"))) {
    fprintf(stderr, "ERROR: Can not open file [output2.txt");
    exit(-1);
  }
  fprintf(fptr, "The Open University of Japan\n");
  fclose(fptr);
  return 0;
}
