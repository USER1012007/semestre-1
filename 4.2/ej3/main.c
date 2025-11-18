#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int days(int month, int year);

int main() {
  int array[MAX];
  int array1[MAX];
  int array2[MAX];
  int array3[MAX];
  int sum = 0, sum2 = 0, sum3 = 0;

  for (int i = 0; i < MAX; i++) {
    array[i] = rand() % 150;
    printf("%d ", array[i]);
  }

  for (int i = 0; i < MAX; i++) {
    if (array[i] > 0 && array[i] < 50) {
      array1[sum] = array[i];
      sum++;
    } else if (array[i] >= 50 && array[i] < 100) {
      array2[sum2] = array[i];
      sum2++;
    } else if (array[i] >= 100) {
      array3[sum3] = array[i];
      sum3++;
    }
  }

  printf("\nlista 1 (0-49):\n");
  for (int i = 0; i < sum; i++) {
    printf("%d ", array1[i]);
  }
  printf("\n");
  printf("\nlista 2 (50-99):\n");
  for (int i = 0; i < sum2; i++) {
    printf("%d ", array2[i]);
  }
  printf("\n");
  printf("\nlista 3 (100+):\n");
  for (int i = 0; i < sum3; i++) {
    printf("%d ", array3[i]);
  }
  printf("\n");
  return 0;
}
