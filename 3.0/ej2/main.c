#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

  int opcion;
  float base, altura, radio;
  const float PI = 3.14;

  printf("Menu\n");
  printf("1) Area triangulo\n");
  printf("2) Area circulo\n");
  printf("3) Area cuadrado\n");
  printf("4) Salir\n");
  printf("Ingrese opcion:\n");
  scanf("%d", &opcion);
  if (opcion == 1) {
    printf("Area de triangulo\n");
    printf("Ingrese base:\n");
    scanf("%f", &base);
    printf("Ingrese altura:\n");
    scanf("%f", &altura);
    printf("\033[2J\033[H");
    printf("Area triangulo: %.2f\n", (base * altura) / 2);
  } else if (opcion == 2) {
    printf("Area de circulo\n");
    printf("Ingrese radio:\n");
    scanf("%f", &radio);
    printf("\033[2J\033[H");
    printf("Area circulo: %.2f\n", (PI * radio));
  } else if (opcion == 3) {
    printf("Area de cuadrado\n");
    printf("Ingrese base:\n");
    scanf("%f", &base);
    printf("Ingrese altura:\n");
    scanf("%f", &altura);
    printf("\033[2J\033[H");
    printf("Area cuadrado: %.2f\n", (base * altura));
  } else {
    printf("\033[2J\033[H");
    printf("Ingrese una opcion correcta\n");
  }

  return 0;
}
