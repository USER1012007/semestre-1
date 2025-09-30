#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

  int n;
  printf("Que tabla de multiplicar desea?\n");
  scanf("%d", &n);

  if (n < 0) {
    return 0;
  }

  printf("\033[2J\033[H\n");
  printf("tabla del %d\n", n);
  for (int i = 1; i <= 10; i++) {
    printf("%d\n", n * i);
  }

  return 0;
}
