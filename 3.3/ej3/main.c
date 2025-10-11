#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int value = (rand() % 100) + 1;
  float total, discount;
  char *ball = "";

  printf("ingrese importe de la compra:\n");
  scanf("%f", &total);

  if (value < 20) {
    discount = 20.0;
    ball = "verde";
  } else if (value < 45) {
    discount = 25.0;
    ball = "amarilla";
  } else if (value < 75) {
    discount = 30.0;
    ball = "negra";
  } else {
    discount = 100.0;
    ball = "blanca";
  }

  printf("bola: %s\n", ball);
  printf("descuento %.0f%%: $%.2f\n", discount, total * (discount / 100.0));
  printf("total a pagar: $%.2f\n", total - (total * (discount / 100.0)));
  return 0;
}
