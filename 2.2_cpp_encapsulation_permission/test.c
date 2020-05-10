#include <stdio.h>

int main()
{
  int array[5] = {1, 3};
  printf("array[1] = %d\n", array[1]);
  printf("array[2] = %d\n", array[2]);
  printf("2[array] = %d\n", 2[array]);
  printf("*(array+1) = %d\n", *(array+1));
  return 0;
}
