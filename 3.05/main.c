#include <math.h>
#include <stdio.h>

int main() {
  int i, opcion;
  float signo, suma, termino;

  printf("Elige una serie:\n");
  printf("1. Serie a: 1/1 + 1/2 + 1/3 + ...\n");
  printf("2. Serie b: Pi = 4 - 4/3 + 4/5 - 4/7 + ...\n");
  printf("3. Serie c: 1 - 1/2 + 1/4 - 1/6 + ...\n");
  printf("Opcion: \n");
  scanf("%i", &opcion);

  suma = 0;
  i = 1;
  signo = 1;

  switch (opcion) {
  case 1:
    do {
      termino = 1.0 / i;
      suma += termino;
      i += 1;
    } while (fabs(termino) >= 0.01);
    printf("Serie 1/n: %f\n", suma);
    printf("cantidad: %d\n", i - 1);
    break;

  case 2:
    do {
      termino = 4.0 / (2 * i - 1);
      suma += signo * termino;
      signo = -signo;
      i += 1;
    } while (fabs(termino) >= .01);
    printf("Serie 4 - 4/n: %f\n", suma);
    printf("cantidad: %d\n", i - 1);
    break;

  case 3:
    do {
      termino = signo / ((i == 1 ? 1 : 2) * (i == 1 ? i : i - 1));
      suma += termino;
      signo = -signo;
      i += 1;
    } while (fabs(termino) >= .01);
    printf("Serie 1 - 1/n: %f\n", suma);
    printf("cantidad: %d\n", i - 1);
    break;

  default:
    printf("Ingrese otra opcion :0\n");
    break;
  }

  return 0;
}
