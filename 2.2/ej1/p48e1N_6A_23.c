/*Nombre del Programa: p48e1N_6A_nl.c
Elaboró: Rojas Badillo Emilio
No Lista: 23
Fecha: 17-9-25
No. Versión: 1
Descripción: Ecuacion movimiento uniformemente acelerado
programa en Lenguaje C */
#include <math.h>  // Incluye cabecera en el archivo
#include <stdio.h> // Incluye cabecera en el archivo

int main(int argc, char *argv[]) {
  int v0, t, d0; // declaracion de variables locales enteros
  float a;       // declaracion de variables locales flotantes
  printf("Ingrese velocidad inicial [m/s]: "); // Imprime pedir datos
  scanf("%d", &v0);               // Almacena en variable el dato ingresado
  printf("Ingrese tiempo [s]: "); // Imprime pedir datos
  scanf("%d", &t);                // Almacena en variable el dato ingresado
  printf("Ingrese desplazamiento inicial [m]: "); // Imprime pedir datos
  scanf("%d", &d0); // Almacena en variable el dato ingresado
  printf("Ingrese aceleracion [m/s^2]: "); // Imprime pedir datos
  scanf("%f", &a); // Almacena en variable el dato ingresado
  float df =
      d0 + (v0 * t) + (a * t * t / 2); // Hace calculo con los datos ingresadoa
  printf("El desplazamiento final es: %.2f\n", df); // Imprime calculo final
  return 0;
}
