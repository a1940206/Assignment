#include <stdio.h>

int main(void) {
  int x = 0;
  printf("enter a number and I'll double it: ");
  if (scanf("%d", &x) != 1) return 1;
  printf("twice %d is %d\n", x, 2 * x);
  return 0;
}
