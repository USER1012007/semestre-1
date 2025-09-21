#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  float x1, y1, x2, y2, x3, y3, a;
  printf("ingrese coordenada A: \n");
  scanf("%f %f", &x1, &y1);
  printf("ingrese coordenada B: \n");
  scanf("%f %f", &x2, &y2);
  printf("ingrese coordenada C: \n");
  scanf("%f %f", &x3, &y3);

  a = fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;

  printf("El area total es: %.2f \n", a);
  return 0;
}
