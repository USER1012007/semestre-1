/*Nombre del Programa: p48e4N_6A_nl.c
Elaboró: Rojas Badillo Emilio
No Lista: 23
Fecha: 17-9-25
No. Versión: 1
Descripción: Area y volumenes de figuras geometricas
programa en Lenguaje C */
#include <math.h>  // Incluye cabecera en el archivo
#include <stdio.h> // Incluye cabecera en el archivo

int main(int argc, char *argv[]) {
  int l1 = 0, l2 = 0, l3 = 0, r = 0,
      h = 0;         // Declaracion de variables locales enteras
  float a, v;        // Declaracion de variables locales flotantes
  float PI = 3.1416; // Declaracion de constate pi
  printf("\033[2J\033[H");
  printf("Ingrese l1: \n");               // Imprimir pedir datos
  scanf("%d", &l1);                       // Almacena dato ingresado en memoria
  a = 6 * pow(l1, 2);                     // Calculo de area
  v = pow(l1, 3);                         // Calculo de volumen
  printf("Area de cubo = %.2f \n", a);    // Imprimir area
  printf("Volumen de cubo = %.2f \n", v); // Imprimir volumen

  printf("Ingrese l1: \n"); // Imprimir pedir datos
  scanf("%d", &l1);         // Almacena dato ingresado en memoria
  printf("Ingrese l2: \n"); // Imprimir pedir datos
  scanf("%d", &l2);         // Almacena dato ingresado en memoria
  printf("Ingrese l3: \n"); // Imprimir pedir datos
  scanf("%d", &l3);         // Almacena dato ingresado en memoria

  a = 2 * l1 * l2 + 2 * l1 * l3 + 2 * l2 * l3; // Calculo de area
  v = l1 * l2 * l3;                            // Calculo de volumen
  printf("Area de paralelepipedo recto rectangular = %.2f \n",
         a); // Imprimir area
  printf("Volumen de paralelepipedo recto rectangular = %.2f \n",
         v); // Imprimir volumen

  printf("Ingrese el radio: \n");  // Imprimir pedir datos
  scanf("%d", &r);                 // Almacena dato ingresado en memoria
  printf("Ingrese la altura: \n"); // Imprimir pedir datos
  scanf("%d", &h);                 // Almacena dato ingresado en memoria
  a = (2 * PI * pow(r, 2)) + (2 * PI * r * h);            // Calculo de area
  v = PI * h * pow(r, 2);                                 // Calculo de volumen
  printf("Area de cilindro recto circular = %.2f \n", a); // Imprimir area
  printf("Volumen de cilindro recto circular= %.2f \n", v); // Imprimir volumen

  printf("Ingrese el radio: \n");       // Imprimir pedir datos
  scanf("%d", &r);                      // Almacena dato ingresado en memoria
  printf("Ingrese la altura: \n");      // Imprimir pedir datos
  scanf("%d", &h);                      // Almacena dato ingresado en memoria
  printf("Ingrese l1: \n");             // Imprimir pedir datos
  scanf("%d", &l1);                     // Almacena dato ingresado en memoria
  a = (PI * pow(r, 2)) + (PI * r * l1); // Calculo de area
  v = (PI * h * pow(r, 2)) / 3;         // Calculo de volumen
  printf("Area de cono recto circular = %.2f \n", a);   // Imprimir area
  printf("Volumen de cono recto circular= %.2f \n", v); // Imprimir volumen

  return 0;
}
