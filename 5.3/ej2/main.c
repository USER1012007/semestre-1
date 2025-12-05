#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

void odd(int n, int m);
void even(int n, int m);
void fill(int n);

int main() {
  srand(time(NULL));
  int n, m;
  int op = 0;
  printf("1)vector\n2)llenar columnas pares\n3)llenar columnas impares\nescoja "
         "una opcion\n");
  scanf("%d", &op);
  switch (op) {
  case 1:
    printf("ingrese el tamanio del vector\n");
    scanf("%d", &n);
    fill(n);
    break;
  case 2:
    printf("ingrese el numero de filas\n");
    scanf("%d", &n);
    printf("ingrese el numero de columnas\n");
    scanf("%d", &m);
    odd(n, m);
    break;
  case 3:
    printf("ingrese el numero de filas\n");
    scanf("%d", &n);
    printf("ingrese el numero de columnas\n");
    scanf("%d", &m);
    even(n, m);
    break;
  default:
    printf("opcion no valida\n");
    break;
  }
  return 0;
}

void odd(int n, int m) {

  int M[MAX][MAX] = {0};

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (j % 2 == 1) {
        M[i][j] = rand() % 50;
        printf("%d ", M[i][j]);
      } else {
        printf("0 ");
      }
    }
    printf("\n");
  }
}

void even(int n, int m) {

  int M[MAX][MAX] = {0};

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (j % 2 == 0) {
        M[i][j] = (rand() % 50) + 50;
        printf("%d ", M[i][j]);
      } else {
        printf("0 ");
      }
    }
    printf("\n");
  }
}

void fill(int n) {

  int V[MAX] = {0};

  for (int i = 0; i < n; i++) {
    V[i] = (rand() % 75);
    if (V[i] < 25) {
      V[i] += 25;
    }
    printf("%d ", V[i]);
  }
  printf("\n");
}
