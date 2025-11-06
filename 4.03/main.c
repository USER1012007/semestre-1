#include <stdio.h>

#define MAX 5

int days(int month, int year);

int main() {
  int matrix1[MAX][MAX];
  int m;

  printf("ingresa cantidad de filas y columnas [mxm]\n");
  scanf("%d", &m);

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      matrix1[i][j] = (j == i ? 1 : 0);
    }
  }

  printf("diagonal principal\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d, ", matrix1[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      matrix1[i][j] = (j == m - i - 1 ? 1 : 0);
    }
  }

  printf("diagonal inversa\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d, ", matrix1[i][j]);
    }
    printf("\n");
  }
  return 0;
}
