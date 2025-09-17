/*Nombre del Programa: p48e2N_6A_nl.c
Elaboró: Rojas Badillo Emilio
No Lista: 23
Fecha: 17-9-25
No. Versión: 1
Descripción: Ecuaciones lineales
programa en Lenguaje C */
#include <stdio.h> // Incluye cabecera en el archivo

int main(int argc, char *argv[]) {
  int a, b, c, d, e, f;    // declaracion de variables locales enteros
  printf("Ingrese A: \n"); // Imprime pedir dato
  scanf("%d", &a);         // Almacena dato en memoria
  printf("Ingrese B: \n"); // Imprime pedir dato
  scanf("%d", &b);         // Almacena dato en memoria
  printf("Ingrese C: \n"); // Imprime pedir dato
  scanf("%d", &c);         // Almacena dato en memoria
  printf("Ingrese D: \n"); // Imprime pedir dato
  scanf("%d", &d);         // Almacena dato en memoria
  printf("Ingrese E: \n"); // Imprime pedir dato
  scanf("%d", &e);         // Almacena dato en memoria
  printf("Ingrese F: \n"); // Imprime pedir dato
  scanf("%d", &f);         // Almacena dato en memoria

  float x = (c * e - b * f) / (a * e - b * d); // Calculo de datos
  printf("X es: %.2f\n", x);                   // Imprime calculo final
  float y = (a * f - c * d) / (a * e - b * d); // Calculo de datos
  printf("Y es: %.2f\n", y);                   // Imprime calculo final
  return 0;
}
