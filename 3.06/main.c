#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, tipo, i;
  float demanda, total, iva, subtotal;
  float cargo_fijo;
  float lectura_anterior, lectura_actual, consumo;
  float cargo_consumo;

  printf("recibo de luz\n");
  printf("Ingrese el numero de clientes: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    printf("\ncliente: %d\n", i);
    printf("Tipo de cliente:\n");
    printf("1) Domestico\n");
    printf("2) Comercial\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &tipo);

    switch (tipo) {
    case 1:
      float DAB = 282.84;
      float limite_basico = 75, limite_intermedio = 140;
      float precio_basico = 1.099, precio_intermedio = 1.335, precio_excedente;

      cargo_fijo = 74.10;
      precio_excedente = 3.903;
      printf("ingrese la lectura anterior: ");
      scanf("%f", &lectura_anterior);
      printf("ingrese la lectura actual: ");
      scanf("%f", &lectura_actual);

      if (lectura_actual < lectura_anterior) {
        printf("error\n");
        break;
      }

      consumo = lectura_actual - lectura_anterior;
      cargo_consumo = 0.0;

      if (consumo <= limite_basico) {
        cargo_consumo = consumo * precio_basico;
      } else if (consumo <= (limite_basico + limite_intermedio)) {
        cargo_consumo = limite_basico * precio_basico +
                        (consumo - limite_basico) * precio_intermedio;
      } else {
        cargo_consumo =
            limite_basico * precio_basico +
            limite_intermedio * precio_intermedio +
            (consumo - limite_basico - limite_intermedio) * precio_excedente;
      }
      iva = cargo_consumo * 0.16;
      total = DAB + cargo_fijo + cargo_consumo + iva;

      printf("recibo de cliente: %d\n", i);
      printf("consumo: %.2f kWh\n", consumo);
      printf("DAB: $%.2f\n", DAB);
      printf("cargo por consumo: $%.2f\n", cargo_consumo);
      printf("IVA (16%%): $%.2f\n", iva);
      printf("cargo fijo: $%.2f\n", cargo_fijo);
      printf("total a pagar: $%.2f\n", total);
      break;

    case 2:
      float precio_variable;
      int opcion;

      printf("Seleccione el tipo de tarifa comercial:\n");
      printf("1) PDBT\n");
      printf("2) GDBT\n");
      scanf("%d", &opcion);

      if (opcion == 1) {
        cargo_fijo = 36.89;
        precio_variable = 4.162;
      } else if (opcion == 2) {
        cargo_fijo = 368.95;
        precio_variable = 2.036;
      } else {
        printf("ingrese opcion correcta\n");
        break;
      }

      printf("ingrese la lectura anterior: ");
      scanf("%f", &lectura_anterior);
      printf("ingrese la lectura actual: ");
      scanf("%f", &lectura_actual);

      if (lectura_actual < lectura_anterior) {
        printf("error\n");
        break;
      }

      consumo = lectura_actual - lectura_anterior;
      cargo_consumo = consumo * precio_variable;
      iva = cargo_consumo * .16;
      total = cargo_fijo + cargo_consumo + iva;

      printf("recibo de cliente: %d\n", i);
      printf("consumo: %.2f kWh\n", consumo);
      printf("cargo por consumo: $%.2f\n", cargo_consumo);
      printf("IVA (16%%): $%.2f\n", iva);
      printf("cargo fijo: $%.2f\n", cargo_fijo);
      printf("total a pagar: $%.2f\n", total);
      break;

    default:
      printf("ingrese opcion correcta\n");
      break;
    }
  }

  return 0;
}
