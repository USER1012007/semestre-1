#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int days(int month, int year);

int main() {
  int matrix1[MAX][MAX];
  int m;
  int DP[MAX];
  int DI[MAX];
  int sum1 = 0, sum2 = 0;

  printf("ingresa cantidad de filas y columnas [mxm]\n");
  scanf("%d", &m);
  if (m > MAX) {
    return 1;
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      matrix1[i][j] = rand() % 100;
    }
  }

  printf("diagonal principal\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      if (i == j) {
        DP[i] = matrix1[i][j];
      } else if (i + j == m - 1) {
        DI[i] = matrix1[i][j];
      }

      printf("%d ", matrix1[i][j]);
    }
    printf("\n");
  }

  printf("diagonal principal\n");
  for (int i = 0; i < m; i++) {
    printf("%d ", DP[i]);
    sum1 += DP[i];
  }
  printf("\n");
  printf("diagonal inversa\n");
  for (int i = 0; i < m; i++) {
    printf("%d ", DI[i]);
    sum2 += DI[i];
  }
  printf("\n");

  printf("suma diagonal principal: %d\n", sum1);
  printf("suma diagonal inversa: %d\n", sum2);
  return 0;
}
