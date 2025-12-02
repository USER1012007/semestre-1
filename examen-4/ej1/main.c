#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 7

int main() {
  int op = 0;
  srand(time(NULL));

  printf("1)matriz de altura\n2)vector de temperatura\nIngresa una opcion:\n");
  scanf("%d", &op);

  switch (op) {
  case 1: {
    int M[4][6] = {0};
    int M2[6][4] = {0};
    int V[4] = {0};
    int A[6] = {0};

    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 6; j++) {
        M[i][j] = rand() % 2;
        printf("%d ", M[i][j]);

        if (M[i][j] > 0) {
          V[i] += M[i][j];
        }
        // agrega sumatoria por columnas de matri z
      }

      printf("\n");
    }

    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 6; j++) {
        M2[j][i] = M[i][j];

        if (M2[j][i] > 0) {
          A[j] += M2[j][i];
        }
      }
    }

    for (int i = 0; i < 4; i++) {
      printf("Suma del atleta %d: %d\n", i + 1, V[i]);
    }

    for (int j = 0; j < 6; j++) {
      printf("Suma del salto %d: %d\n", j + 1, A[j]);
    }

    printf("\n");
    break;
  }
  case 2:

    float prom = 0.0;
    float V[MAX] = {0.0};
    float T[MAX] = {0.0};
    float mayor = 0.0;
    float menor = 0.0;
    int index1 = 0, index2 = 0;

    printf("temperaturas:\n");
    for (int i = 0; i < MAX; i++) {
      T[i] = ((rand() % 4) + 30.0) + ((rand() % 100) / 100.0);
      printf("%.2f, ", T[i]);
      prom += T[i];
    }
    prom /= MAX;

    for (int i = 0; i < MAX - 1; i++) {
      V[i] = prom - T[i];
    }

    for (int i = 0; i < MAX; i++) {
      if (i == 0) {
        mayor = T[i];
        menor = T[i];
      } else {
        if (T[i] > mayor) {
          mayor = T[i];
          index1 = i;
        }
        if (T[i] < menor) {
          menor = T[i];
          index2 = i;
        }
      }
    }

    printf("\ndiferencias con el promedio:\n");
    for (int i = 0; i < MAX; i++) {
      printf("%.2f, ", V[i]);
    }
    printf("\n");
    printf("\npromedio: %.2f\n", prom);
    printf("temperatura mayor: %.2f en indice %d\n", mayor, index1);
    printf("temperatura menor: %.2f en indice %d\n", menor, index2);

    break;
  default:
    printf("opcion invalida :(");
    break;
  }
  return 0;
}
