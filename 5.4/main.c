#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
#define BUBBLE_MAX 30

int greater();
void average(int m, int n);
void bubble(int n);

int main() {
  int op = 0;
  int s = 0;
  int m = 0, n = 0;
  printf("1. Encuentra el mayor entre tres números enteros\n");
  printf("2. Calcula el promedio entre un conjunto de n números almacenados en "
         "una matriz (MxN) Máximo 10X10\n");
  printf("3. Ordena el vector máximo 30 elementos utilizando el método de "
         "burbuja\n");
  printf("ingresa una opcion\n");
  scanf("%d", &op);

  switch (op) {
  case 1:
    printf("El mayor es: %d\n", greater());
    break;
  case 2:
    printf("ingresa numero de filas [max: 10]\n");
    scanf("%d", &m);
    printf("ingresa numero de columnas [max: 10]\n");
    scanf("%d", &n);
    if (m > MAX || n > MAX) {
      return 0;
    }

    average(m, n);
    break;
  case 3:
    printf("ingresa el tamaño del arreglo [max:30]\n");
    scanf("%d", &s);
    if (s > BUBBLE_MAX) {
      return 0;
    }
    bubble(s);
    break;
  default:
    printf("ingrese opcion correcta\n");
    break;
    return 0;
  }
}

int greater() {
  int a = 0, b = 0, c = 0;
  printf("ingresa primer numero\n");
  scanf("%d", &a);
  printf("ingresa segundo numero\n");
  scanf("%d", &b);
  printf("ingresa tercer numero\n");
  scanf("%d", &c);
  return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

void average(int m, int n) {
  srand(time(NULL));
  int matrix[MAX][MAX];
  float sum = 0.0;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      matrix[i][j] = rand() % 100;
      printf("%d ", matrix[i][j]);
      sum += matrix[i][j];
    }
    printf("\n");
  }

  float average = sum / (m * n);
  printf("El promedio es: %.2f\n", average);
}

void bubble(int n) {
  srand(time(NULL));
  int array[MAX];
  for (int i = 0; i < n; i++) {
    array[i] = rand() % 100;
    printf("%d ", array[i]);
  }
  printf("\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (array[j] > array[j + 1]) {
        array[j] ^= array[j + 1];
        array[j + 1] ^= array[j];
        array[j] ^= array[j + 1];
      }
    }
  }

  printf("arreglo ordenado\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
