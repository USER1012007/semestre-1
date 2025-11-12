#include <stdio.h>
#include <stdlib.h>

#define MAX 15
int days(int month, int year);

int main() {
  // int matrix1[MAX][MAX];
  int m = 3;
  int counter = 0, counter_1 = 0, counter_2 = 0, counter_3 = 0;
  unsigned char checksum = 0;
  // 00000000

  int matrix1[3][3] = {
      {1, 0, 0},
      {0, 1, 0},
      {0, 0, 1},
  };

  printf("ingresa cantidad de filas y columnas [mxm]\n");
  scanf("%d", &m);

  if (m > MAX) {
    printf("El tamaño máximo es %d\n", MAX);
    return 1;
  }

  // for (int i = 0; i < m; i++) {
  //   for (int j = 0; j < m; j++) {
  //     matrix1[i][j] = rand() % 10;
  //   }
  // }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d", matrix1[i][j]);
      // printf("%d == %d = %d\n", matrix1[i][j], matrix1[j][i],
      //        matrix1[i][j] == matrix1[j][i]);

      // simetrico
      counter += matrix1[i][j] == matrix1[j][i] ? 1 : 0;

      // identidad
      counter_1 += matrix1[i][i] == 1 ? 1 : 0;

      // triangular superior
      if (i > j) {
        counter_2 += matrix1[i][j] == 0 ? 1 : 0;
      }

      // triangular inferior
      if (i < j) {
        counter_3 += matrix1[i][j] == 0 ? 1 : 0;
      }
    }
    printf("\n");
  }

  if (counter == m * m) {
    printf("La matriz es simetrica\n");
  }

  if (counter_1 == m * m && counter_2 == m && counter_3 == m) {
    printf("La matriz es identidad\n");
  }

  if (counter_2 == m) {
    printf("La matriz es triangular superior\n");
  }

  if (counter_3 == m) {
    printf("La matriz es triangular inferior\n");
  }

  return 0;
}
