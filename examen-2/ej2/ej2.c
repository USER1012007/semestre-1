#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  float peso, b1000, b500, b200, b100, b50, b10, b5, b2;
  printf("Ingrese peso [gramos]: \n");
  scanf("%f", &peso);

  b1000 = peso / 1000;
  b500 = peso / 500;
  b200 = peso / 200;
  b100 = peso / 100;
  b50 = peso / 50;
  b10 = peso / 10;
  b5 = peso / 5;
  b2 = peso / 2;

  printf("Pesas de 1kg: %.2f\n", b1000);
  printf("Pesas de 500g: %.2f\n", b500);
  printf("Pesas de 200g: %.2f\n", b200);
  printf("Pesas de 100g: %.2f\n", b100);
  printf("Pesas de 50g: %.2f\n", b50);
  printf("Pesas de 10g: %.2f\n", b10);
  printf("Pesas de 5g: %.2f\n", b5);
  printf("Pesas de 1g: %.2f\n", b2);
  return 0;
}
