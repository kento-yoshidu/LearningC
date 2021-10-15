#include <stdio.h>

int main (void) {
  int n1, n2;

  printf("first\n"); scanf("%d", &n1);
  printf("second\n"); scanf("%d", &n2);

  printf("%d", n1 + n2);

  return 0;
}