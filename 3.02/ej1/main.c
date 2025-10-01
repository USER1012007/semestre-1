#include <math.h>
#include <stdio.h>

int main() {

  int n;
  float c, t;
  printf("Ingrese cantidad de tablas\n");
  scanf("%d", &n);

  if (n < 0) {
    return 0;
  }

  printf("\033[2J\033[H\n");
  for (int i = 1; i <= n; i++) {
    printf("tabla del %d\n", i);
    for (int j = 0; j <= 10; j++) {
      printf("%d * %d = %d\n", i, j, (i * j));
    }
  }

  return 0;
}
