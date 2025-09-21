#include <stdio.h>

int main(int argc, char *argv[]) {
  int dias, horas, minutos, segundos;

  do {
    printf("Ingrese dias: \n");
    scanf("%d", &dias);
  } while (dias < 0);
  do {
    printf("Ingrese horas: \n");
    scanf("%d", &horas);
  } while (horas < 0);
  do {
    printf("Ingrese minutos: \n");
    scanf("%d", &minutos);
  } while (minutos < 0);
  do {
    printf("Ingrese segundos: \n");
    scanf("%d", &segundos);
  } while (segundos < 0);

  float total =
      (dias * 24 * 60 * 60) + (horas * 60 * 60) + (minutos * 60) + segundos;

  printf("Total de segundos en %d dias %d horas %d, %d minutos y %d segundos: "
         "%.2f",
         dias, horas, minutos, segundos, total);
  return 0;
}
