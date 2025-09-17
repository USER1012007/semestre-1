/*Nombre del Programa: p48e2N_6A_nl.c
Elaboró: Rojas Badillo Emilio
No Lista: 23
Fecha: 17-9-25
No. Versión: 1
Descripción: Ecuaciones lineales
programa en Lenguaje C */
#include <math.h>  // Incluye cabecera en el archivo
#include <stdio.h> // Incluye cabecera en el archivo

#define PI 3.1416;

int main(int argc, char *argv[]) {
  int l1, l2, l3, r, h;
  float a, v;
  printf("Ingrese l1: \n");
  scanf("%d", &l1);
  a = 6 * pow(l1, 2);
  printf("Area de cubo = %.2f \n", a);

  return 0;
}
