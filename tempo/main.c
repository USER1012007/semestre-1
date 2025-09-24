#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

  int opcion;
  do {
    printf("Menu\n");
    printf("1) Area\n");
    printf("2) Salir\n");
    printf("Ingrese opcion:\n");
    scanf("%d", &opcion);
    if (opcion == 1) {
      float base, altura;
      printf("Ingrese base:\n");
      scanf("%f", &base);
      printf("Ingrese altura:\n");
      scanf("%f", &altura);
      printf("El area es: %.2f\n", (base * altura) / 2);
    }

  } while (opcion != 2);
  return 0;
}
