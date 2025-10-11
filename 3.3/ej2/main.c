#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int value = (rand() % 6) + 1;
  printf("%d\n", value);
  switch (value) {
  case 1:
    printf("seis\n");
    break;
  case 2:
    printf("cinco\n");
    break;
  case 3:
    printf("cuatro\n");
    break;
  case 4:
    printf("tres\n");
    break;
  case 5:
    printf("dos\n");
    break;
  case 6:
    printf("uno\n");
    break;
  default:
    printf("Un DADO no tiene ese número\n");
    break;
  }
  return 0;
}
