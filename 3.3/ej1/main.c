#include <math.h>
#include <stdio.h>

int main() {
  int opcion, horas, costo;
  printf("Ingrese puesto:\n");
  printf("1)intendencia - $35\n2)asistente - $50\n3)administrativo - "
         "$80\n4)directivo - $120\n5)gerente - $150\n");
  scanf("%d", &opcion);
  switch (opcion) {
  case 1:
    costo = 35;
    break;
  case 2:
    costo = 50;
    break;
  case 3:
    costo = 80;
    break;
  case 4:
    costo = 120;
    break;
  case 5:
    costo = 150;
    break;
  default:
    printf("opcion no valida\n");
    break;
  }

  printf("ingrese horas trabajadas: \n");
  scanf("%d", &horas);

  printf("Su paga es: $%d\n", (costo * horas));
  return 0;
}
