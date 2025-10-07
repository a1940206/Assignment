#include <stdio.h>

int main(void) {
  char first[11], last[11];  
  int age;
  double frac;

  printf("Enter your name, age and employment fraction: ");
  if (scanf("%10s %10s %d %lf", first, last, &age, &frac) != 4) return 1;

  printf(
      "Your name is %s %s, you are %d years old and your employment fraction "
      "is %.1f.\n",
      first, last, age, frac);
  return 0;
}
