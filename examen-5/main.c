#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5

float average(int V[12]);
int cant_greaters(int V[12]);
void greater(int V[12]);

void repeated();
void greaters();
void lowers();

int M[MAX][MAX] = {0};
int n = 0;
int m = 0;
int x = 0;

int main() {
  srand(time(NULL));
  int op1 = 0;
  int op2 = 0;
  int s = 0;
  int m = 0, n = 0;
  printf("1. vector [paso de parametros]\n");
  printf("2. matriz [sin paso de parametros]\n");
  printf("ingresa una opcion\n");
  scanf("%d", &op1);

  switch (op1) {
  case 1:
    int V[12] = {0};

    printf("1. promedio anual\n");
    printf("2. cantidad mayores al promedio\n");
    printf("3. mes con mayor toneladas\n");
    printf("ingresa una opcion\n");
    scanf("%d", &op2);

    for (int i = 0; i < 12; i++) {
      V[i] = rand() % 10;
      printf("%d, ", V[i]);
    }
    printf("\n");

    switch (op2) {
    case 1:
      printf("promedio anual: %.2f\n", average(V));
      break;
    case 2:
      printf("cantidad mayores al promedio: %d\n", cant_greaters(V));
      break;
    case 3:
      greater(V);
      break;
    default:
      printf("ingrese opcion correcta\n");
      break;
      return 0;
    }
    break;
  case 2:

    printf("1. cantidad de veces que se repite x\n");
    printf("2. cantidad mayores a x\n");
    printf("3. cantidad menores a x\n");
    printf("ingresa una opcion\n");
    scanf("%d", &op2);

    switch (op2) {
    case 1:
      repeated();
      break;
    case 2:
      greaters();
      break;
    case 3:
      lowers();
      break;
    default:
      printf("ingrese opcion correcta\n");
      break;
      return 0;
    }
    break;
  default:
    printf("ingrese opcion correcta\n");
    break;
    return 0;
  }
}

float average(int V[12]) {
  float prom = 0.0;

  for (int i = 0; i < 12; i++) {
    prom += V[i];
  }
  return prom / 12;
}

void greater(int V[12]) {
  int max1 = V[0];
  int index1 = 0;

  for (int i = 0; i < 3; i++) {
    if (V[i] > max1) {
      max1 = V[i];
      index1 = i;
    }
  }
  printf("mes con mayor toneladas: %d\n", index1 + 1);
  printf("toneladas: %d\n", max1);
}

int cant_greaters(int V[12]) {
  int count = 0;
  float max = average(V);

  for (int i = 1; i < 12; i++) {
    if (V[i] > max) {
      count++;
    }
  }
  return count;
}

void repeated() {
  int count = 0;

  printf("ingresa el numero de filas\n");
  scanf("%d", &m);
  printf("ingresa el numero de columnas\n");
  scanf("%d", &n);
  printf("ingresa x\n");
  scanf("%d", &x);

  if (m > MAX || n > MAX) {
    return;
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      M[i][j] = rand() % 10;
      if (M[i][j] == x) {
        count++;
        break;
      }
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }

  printf("cantidad de numeros iguales a %d: %d\n", x, count);
}

void greaters() {
  int count = 0;

  printf("ingresa el numero de filas\n");
  scanf("%d", &m);
  printf("ingresa el numero de columnas\n");
  scanf("%d", &n);
  printf("ingresa x\n");
  scanf("%d", &x);

  if (m > MAX || n > MAX) {
    return;
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      M[i][j] = rand() % 10;
      if (M[i][j] > x) {
        count++;
        break;
      }
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }

  printf("cantidad de numeros mayores a %d: %d\n", x, count);
}

void lowers() {
  int count = 0;

  printf("ingresa el numero de filas\n");
  scanf("%d", &m);
  printf("ingresa el numero de columnas\n");
  scanf("%d", &n);
  printf("ingresa x\n");
  scanf("%d", &x);

  if (m > MAX || n > MAX) {
    return;
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      M[i][j] = rand() % 10;
      if (M[i][j] < x) {
        count++;
        break;
      }
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }

  printf("cantidad de numeros menores a %d: %d\n", x, count);
}
