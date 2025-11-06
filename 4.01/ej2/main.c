#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 30

int days(int month, int year);

int main() {
  int students, units, sum = 0;
  float qualifications[4][MAX][5];
  float prom[MAX];

  printf("ingrese cantidad de estudiantes[max. 30]: \n");
  scanf("%d", &students);

  if (students > 30 || students < 0) {
    return 0;
  }

  for (int i = 0; i < students; i++) {
    prom[i] = 0;
    printf("estudiante: %d\n", i + 1);
    for (int j = 0; j < 4; j++) {
      printf("parcial: %d\n", j + 1);
      for (int k = 0; k < 5; k++) {
        printf("estudiante %d [1-10] ; parcial %d ; materia %d: \n", i + 1,
               j + 1, k + 1);
        scanf("%f", &qualifications[i][j][k]);
        sum += qualifications[i][j][k];
      }
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
      for (int k = 0; k < 5; k++) {
        printf("%.2f, ", qualifications[i][j][k]);
      }
      printf("\n");
    }
  }

  printf("promedios de los estudiantes: \n");
  for (int i = 0; i < students; i++) {
    printf("estudiante %d: %.2f\n", i + 1, prom[i]);
  }

  return 0;
}
