#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

  int n = 0;
  int i;

  printf("Que tabla de multiplicar desea?\n");
  scanf("%d", &n);

  if (n < 0) {
    return 0;
  }

  // printf("\033[2J\033[H\n");
  printf("tabla del %d\n", n);

  for (int i = 1; i <= 10; i++) {
    printf("%d\n", n * i);
  }

  printf("while\n");
  while (n != 0) {
    i = 1;
    printf("presione 0 para salir\n");
    printf("Que tabla de multiplicar desea?\n");
    scanf("%d", &n);

    if (n < 0) {
      return 0;
    } else if (n == 0) {
      break;
    }

    // printf("\033[2J\033[H\n");
    printf("tabla del %d\n", n);
    while (i <= 10) {
      printf("%d\n", n * i);
      i++;
    }
  }

  printf("do while\n");
  n = 1;
  do {
    i = 1;
    printf("presione 0 para salir\n");
    printf("Que tabla de multiplicar desea?\n");
    scanf("%d", &n);

    if (n < 0 || n == 0) {
      return 0;
    }

    // printf("\033[2J\033[H\n");
    printf("tabla del %d\n", n);
    do {
      printf("%d\n", n * i);
      i++;
    } while (i <= 10);
  } while (n != 0);
  return 0;
}
