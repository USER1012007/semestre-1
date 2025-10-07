#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

  int i;

  printf("\033[2J\033[H\n");
  printf("multiplos del 7 en 150\n");
  for (i = 7; i <= 150; i += 7) {
    printf("%d, ", i);
  }

  printf("\n");
  printf("while\n");
  i = 7;
  while (i < 150) {
    printf("%d, ", i);
    i += 7;
  }
  printf("\n");

  printf("do-while\n");
  i = 7;
  do {
    printf("%d, ", i);
    i += 7;
  } while (i < 150);
  printf("\n");

  return 0;
}
