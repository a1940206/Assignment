#include <stdio.h>

int main(void) {
  int c;
  printf("Enter temperature in Celsius: ");
  if (scanf("%d", &c) != 1) return 1;

  double f =
      c * 9.0 / 5.0 + 32.0; 
  printf("%d degrees Celsius is %.0f degrees Fahrenheit\n", c, f);
  return 0;
}
