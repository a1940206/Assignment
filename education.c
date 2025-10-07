#include <stdio.h>

int main(void) {
  int years;
  printf("Enter years of education: ");
  if (scanf("%d", &years) != 1) return 1;

  printf("Level of education: ");
  if (years >= 0 && years <= 7) {
    printf("Primary level education\n");
  } else if (years <= 12) {
    printf("Secondary level education\n");
  } else {
    printf("Tertiary level education\n");
  }
  return 0;
}
