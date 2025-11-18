#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int days(int month, int year);

int main() {
  int array[MAX];

  for (int i = 0; i < MAX; i++) {
    array[i] = rand() % 10;
    printf("%d ", array[i]);
  }
  printf("\nSuma de los elementos que ocupan posiciones pares: \n");
  int sum = 0;
  for (int i = 2; i < MAX; i += 2) {
    sum += array[i];
    printf("%d ", array[i]);
  }
  printf("\n%d\n", sum);

  printf("El mayor de los numeros que ocupan posiciones impares\n");
  int max_odd = array[1];
  for (int i = 1; i < MAX; i += 2) {
    if (array[i] > max_odd) {
      max_odd = array[i];
    }
  }
  printf("%d\n", max_odd);

  printf("posicion del mayor numero par: \n");
  int max_even = -1;
  int pos = -1;
  for (int i = 0; i < MAX; i++) {
    if (array[i] % 2 == 0 && array[i] > max_even) {
      max_even = array[i];
      pos = i;
    }
  }
  if (pos != -1) {
    printf("El mayor numero par es %d y su posicion es %d\n", max_even, pos);
  }

  return 0;
}
