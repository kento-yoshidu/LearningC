#include <stdio.h>

int main(void)
{
  int array[10];
  
  printf("%p\n", array);
  printf("%p\n", &array[0]);
  printf("%p\n", &array[1]);
  printf("%p\n", &array[2]);

  return 0;
}
/*
0061FEF8
0061FEF8
0061FEFC
0061FF00
*/

