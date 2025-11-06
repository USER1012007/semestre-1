#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int days(int month, int year);

int main() {
  int matrix1[MAX][MAX];
  int matrix2[MAX][MAX];
  int result[MAX][MAX];
  int n, m, p, q;
  srand(time(NULL));

  printf("ingresa la cantidad de filas de la matriz 1 [max.10]: ");
  scanf("%d", &m);
  printf("ingresa la cantidad de columnas de la matriz 1 [max.10]: ");
  scanf("%d", &n);

  printf("ingresa la cantidad de filas de la matriz 2 [max.10]: ");
  scanf("%d", &p);
  printf("ingresa la cantidad de columnas de la matriz 2 [max.10]: ");
  scanf("%d", &q);

  if (n != p) {
    return 0;
  }

  printf("matriz 1\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      matrix1[i][j] = rand() % 10;
      printf("%d, ", matrix1[i][j]);
    }
    printf("\n");
  }

  printf("matriz 2\n");
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < q; j++) {
      matrix2[i][j] = rand() % 10;
      printf("%d, ", matrix2[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < q; j++) {
      result[i][j] = 0;
      for (int k = 0; k < n; k++) {
        result[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  printf("resultado\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < q; j++) {
      printf("%d, ", result[i][j]);
    }
    printf("\n");
  }
  return 0;
}
