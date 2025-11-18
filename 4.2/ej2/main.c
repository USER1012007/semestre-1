#include <stdio.h>
#include <stdlib.h>

#define MAX 30
int days(int month, int year);

int main() {
  int array[MAX];
  int n;

  printf("ingrese tamano del arreglo\n");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    array[i] = rand() % 10;
    printf("%d ", array[i]);
  }

  printf("\nSuma posiciones pares: \n");
  int sum = 0;
  for (int i = 2; i < n; i += 2) {
    sum += array[i];
    printf("%d ", array[i]);
  }
  printf("\n%d\n", sum);

  printf("\nSuma posiciones impares: \n");
  sum = 0;
  for (int i = 1; i < n; i += 2) {
    sum += array[i];
    printf("%d ", array[i]);
  }
  printf("\n%d\n", sum);

  printf("\nSuma todas las posiciones: \n");
  sum = 0;
  for (int i = 0; i < n; i += 1) {
    sum += array[i];
  }
  printf("\n%d\n", sum);

  return 0;
}
