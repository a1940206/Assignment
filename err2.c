#include <stdio.h>

int main(void) {
  int x;
  printf("enter a number: ");
  if (scanf("%d", &x) != 1) return 1;
  printf("you entered: %d\n", x);
  return 0;
}
