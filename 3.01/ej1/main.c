#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

  int n;
  float c, t;
  printf("Ingrese cantidad de alumnos\n");
  scanf("%d", &n);

  if (n < 0) {
    return 0;
  }

  printf("\033[2J\033[H\n");
  printf("cantidad de alumnos: %d\n", n);
  for (int i = 1; i <= n; i++) {
    printf("Ingrese la calificacion final del alumno %d\n", i);
    scanf("%f", &c);
    t += c;
  }
  printf("Promedio de calificaciones: %.2f\n", (t / n));

  return 0;
}
