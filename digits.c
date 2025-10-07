#include <stdio.h>

int main(void) {
  int x;
  if (scanf("%d", &x) != 1) return 1;  

  int ones = x % 10;
  int tens = (x / 10) % 10;
  int hundreds = (x / 100) % 10;

  printf("%d\n%d\n%d\n", ones, tens, hundreds);
  return 0;
}
