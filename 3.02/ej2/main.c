#include <math.h>
#include <stdio.h>

int main() {

  int grupos, cantidad, materias;
  float calif, promA, promG;

  printf("Ingrese cantidad de grupos\n");
  scanf("%d", &grupos);

  if (grupos < 0) {
    return 0;
  }

  printf("\033[2J\033[H\n");
  for (int i = 1; i <= grupos; i++) {
    printf("Ingrese la cantidad de alumnos en el grupo %d\n", i);
    scanf("%d", &cantidad);
    if (cantidad < 0) {
      return 0;
    }
    printf("Ingrese la cantidad de materias en el grupo %d\n", i);
    scanf("%d", &materias);
    if (materias < 0) {
      return 0;
    }
    for (int j = 1; j <= cantidad; j++) {
      for (int k = 1; k <= materias; k++) {
        printf("Ingrese calificacion del alumno %d de la materia %d\n", j, k);
        scanf("%f", &calif);
        if (calif < 0) {
          return 0;
        }
        promA += calif;
      }
      promG += promA / materias;
      printf("%f\n", promG);
      printf("Promedio del alumno %d: %f\n", j, (promA / materias));
      promA = 0;
    }
    printf("Promedio del grupo %d: %f\n", i, (promG / cantidad));
    promG = 0;
  }

  return 0;
}
