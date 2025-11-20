#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int days(int month, int year);

int main() {
  srand(time(NULL));

  int matrix1[MAX][MAX];
  int freq[MAX] = {0};
  int index = 0;
  int freq_max = 0;
  int m, n;
  int sum = 0;

  printf("ingresa cantidad de filas\n");
  scanf("%d", &m);

  printf("ingresa cantidad de columnas\n");
  scanf("%d", &n);

  if (m > MAX || n > MAX) {
    return 1;
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      matrix1[i][j] = rand() % 10;
      sum += matrix1[i][j];
      printf("%d ", matrix1[i][j]);
      freq[matrix1[i][j]]++;
    }
    printf("\n");
  }

  for (int i = 0; i < m; i++) {
    if (freq[i] > freq_max) {
      freq_max = freq[i];
    }
  }

  printf("suma: %d\n", sum);
  printf("promedio: %d\n", sum / (m * n));
  printf("se repite %d veces: ", freq_max);
  for (int i = 0; i < 10; i++) {
    if (freq[i] == freq_max) {
      printf("%d ", i);
    }
  }
  return 0;
}
