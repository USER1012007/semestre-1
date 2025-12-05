#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int odd(int array[]);
int even(int array[]);
int max(int array[]);

int main() {
  int array[MAX];

  for (int i = 0; i < MAX; i++) {
    array[i] = rand() % 10;
    printf("%d ", array[i]);
  }

  printf("\ncantidad pares: %d\n", even(array));

  printf("cantidad impares: %d\n", odd(array));

  printf("cantidad numero maximo: %d\n", max(array));

  return 0;
}

int odd(int array[]) {

  int sum = 0;
  for (int i = 0; i < MAX; i++) {
    if (i % 2 == 0) {
      sum++;
    }
  }

  return sum;
}
int even(int array[]) {

  int sum = 0;
  for (int i = 0; i < MAX; i++) {
    if (i % 2 == 1) {
      sum++;
    }
  }

  return sum;
}
int max(int array[]) {

  int max_even = array[0];
  int sum = 0;

  for (int i = 0; i < MAX; i++) {
    if (max_even < array[i]) {
      max_even = array[i];
    }
  }

  for (int i = 0; i < MAX - 1; i++) {
    if (array[i] == max_even) {
      sum++;
    }
  }

  return sum;
}
