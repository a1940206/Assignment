#include <stdio.h>

int main(void) {
  int m;
  if (scanf("%d", &m) != 1) return 1;

  switch (m) {
    case 1:
      puts("Jan");
      break;
    case 2:
      puts("Feb");
      break;
    case 3:
      puts("Mar");
      break;
    case 4:
      puts("Apr");
      break;
    case 5:
      puts("May");
      break;
    case 6:
      puts("Jun");
      break;
    case 7:
      puts("Jul");
      break;
    case 8:
      puts("Aug");
      break;
    case 9:
      puts("Sep");
      break;
    case 10:
      puts("Oct");
      break;
    case 11:
      puts("Nov");
      break;
    case 12:
      puts("Dec");
      break;
    default:
      puts("Invalid");
      break;
  }
  return 0;
}
