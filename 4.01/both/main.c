#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 30

int days(int month, int year);

int main() {
  int option;
  int students, units;
  float prom[MAX];
  float sum = 0;
  printf("1) 2d\n2) 3d\ningrese una opcion: \n");
  scanf("%d", &option);

  printf("ingrese cantidad de estudiantes[max. 30]: \n");
  scanf("%d", &students);

  if (students > 30 || students < 0) {
    return 0;
  }

  switch (option) {
  case 1:

    float qualifications1[MAX][4];
    for (int i = 0; i < students; i++) {
      prom[i] = 0;
      printf("estudiante: %d\n", i + 1);
      for (int j = 0; j < 4; j++) {
        printf("parcial: %d\n", j + 1);
        printf("ingrese nota del estudiante %d [1-10]: \n", i + 1);
        scanf("%f", &qualifications1[i][j]);
        sum += qualifications1[i][j];
      }
      prom[i] = sum / 4;
      printf("prom: %.2f\n", prom[i]);
      sum = 0;
    }

    printf("tabla de resultados\n");
    printf("estudiantes\tcalificaciones\n");
    for (int i = 0; i < students; i++) {
      printf("%d \t\t", i + 1);
      for (int j = 0; j < 4; j++) {
        printf("%d = %.2f, ", j + 1, qualifications1[i][j]);
      }
      printf("\n");
    }

    break;
  case 2:

    float qualifications[MAX][4][MAX];
    int units;

    printf("ingrese cantidad de materias\n");
    scanf("%d", &units);

    for (int i = 0; i < students; i++) {
      prom[i] = 0;
      printf("estudiante: %d\n", i + 1);
      for (int j = 0; j < 4; j++) {
        printf("parcial: %d\n", j + 1);
        for (int k = 0; k < units; k++) {
          printf("estudiante %d [1-10] ; parcial %d ; materia %d: \n", i + 1,
                 j + 1, k + 1);
          scanf("%f", &qualifications[i][j][k]);
          sum += qualifications[i][j][k];
        }
      }
      prom[i] = sum / (4 * units);
      printf("prom: %.2f\n", prom[i]);
      sum = 0;
    }

    printf("tabla de resultados\n");
    printf("estudiantes\tcalificaciones\n");
    for (int i = 0; i < students; i++) {
      printf("%d \t\t", i + 1);
      for (int j = 0; j < 4; j++) {
        for (int k = 0; k < units; k++) {
          printf("\t\t%.2f, ", qualifications[i][j][k]);
        }
        printf("\n");
      }
    }

    break;
  default:
    return 0;
  }

  printf("promedios de los estudiantes: \n");
  for (int i = 0; i < students; i++) {
    printf("estudiante %d: %.2f\n", i + 1, prom[i]);
  }
  return 0;
}
