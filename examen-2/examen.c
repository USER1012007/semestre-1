#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  float lado, p, h, a;
  do {
    printf("Ingrese el lado: \n");
    scanf("%f", &lado);
  } while (lado <= 0);
  p = 3.0 * lado;
  h = (sqrt(3) * lado) / 2.0;
  a = (sqrt(3) * pow(lado, 2)) / 4.0;
  printf("perimetro: %.2f\n", p);
  printf("altura: %.2f\n", h);
  printf("area: %.2f\n", a);
  return 0;
}
