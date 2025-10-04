#include <math.h>
#include <stdio.h>

int main() {

  int opcion, elementos, contador;
  do {
    printf("Ingrese opcion\n");
    printf("1) serie 1/2\n2) serie pi\n3)serie 1 / n [pares]\n4)salir\n");
    scanf("%d", &opcion);
    printf("Ingrese cantidad de elementos\n");
    scanf("%d", &elementos);

    if (opcion < 0 || elementos < 0 || opcion == 4) {
      return 0;
    }
    switch (opcion) {
    case 1:
      for (int i = 1; i <= elementos; i++) {
        printf("%s1/%d", (i > 1 ? " + " : " "), i);
      }
      printf("\n");
      break;
    case 2:
      contador = 3;
      printf("PI = 4");
      for (int i = 1; i <= elementos; i++) {
        printf("%s4/%d", (i % 2 == 1 ? " + " : " - "), contador);
        contador += 2;
      }
      printf("\n");
      break;
    case 3:
      contador = 2;
      printf("1");
      for (int i = 1; i <= elementos; i++) {
        printf("%s1/%d", (i % 2 == 1 ? " + " : " - "), contador);
        contador += 2;
      }
      printf("\n");
      break;
    case 4:
      return 0;
      break;
    default:
      printf("Ingrese opcion correcta\n");
      break;
    }
  } while (opcion != 4);

  // printf("\033[2J\033[H\n");

  return 0;
}
