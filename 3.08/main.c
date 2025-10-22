#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, mayor, menor, cont = 0, is_odd, temp;

  printf("ingrese el primer numero:\n");
  scanf("%d", &a);
  printf("ingrese el segundo numero:\n");
  scanf("%d", &b);

  if (a > b) {
    mayor = a;
    menor = b;
  } else {
    mayor = b;
    menor = a;
  }

  printf("%d %d\n", menor, mayor);
  if (menor % 2 == 1) {
    menor - 1;
    is_odd = 1;
    temp = mayor;
  }
  do {
    menor /= 2;
    mayor *= 2;
    if (menor % 2 == 1) {
      cont += mayor;
    }
    printf("%d  %d\n", menor, mayor);
  } while (menor != 1);

  if (!is_odd) {
    cont = mayor;
  } else {
    cont += temp;
  }
  printf("total = %d\n", cont);
  return 0;
}
