#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  float costo, valor, vida, d1, d2, d3, d4, d5, d6;
  costo = 20000.0;
  valor = 2000.0;
  vida = 6.0;
  d1 = (costo - valor);
  d2 = (costo - valor) / 2;
  d3 = (costo - valor) / 3;
  d4 = (costo - valor) / 4;
  d5 = (costo - valor) / 5;
  d6 = (costo - valor) / 6;

  printf("Depreciacion, valor real\n");
  printf("%.2f, %.2f\n", (costo - d1), d1);
  printf("%.2f, %.2f\n", (costo - d2), d2);
  printf("%.2f, %.2f\n", (costo - d3), d3);
  printf("%.2f, %.2f\n", (costo - d4), d4);
  printf("%.2f, %.2f\n", (costo - d5), d5);
  printf("%.2f, %.2f\n", (costo - d6), d6);
  return 0;
}
