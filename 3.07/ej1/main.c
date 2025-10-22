#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, tipo, i;
  float demanda, total, iva, consumo, subtotal;
  float cargo_fijo;

  printf("recibo de agua\n");
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
      float lectura_anterior, lectura_actual, consumo;
      float cargo_consumo;
      float DAB = 282.84;
      float limite_basico = 75, limite_intermedio = 140;
      float precio_basico = 1.099, precio_intermedio = 1.335,
            precio_excedente = 3.903;

      cargo_fijo = 74.10;
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
      float precio_energia = 2.700;
      float precio_demanda = 150.0;
      cargo_fijo = 85.0;

      printf("ingrese consumo en kWh: ");
      scanf("%f", &consumo);
      printf("ingrese demanda en kW: ");
      scanf("%f", &demanda);

      subtotal =
          cargo_fijo + (consumo * precio_energia) + (demanda * precio_demanda);
      iva = subtotal * 0.16;
      total = subtotal + iva;
      printf("recibo de cliente: %d\n", i);
      printf("consumo: %.2f kWh\n", consumo);
      printf("demanda: %.2f kW\n", demanda);
      printf("cargo fijo: $%.2f\n", cargo_fijo);
      printf("cargo por consumo: $%.2f\n", consumo * precio_energia);
      printf("cargo por demanda: $%.2f\n", demanda * precio_demanda);
      printf("subtotal: $%.2f\n", subtotal);
      printf("IVA (16%%): $%.2f\n", iva);
      printf("total a pagar: $%.2f\n", total);
      break;

    default:
      printf("ingrese opcion correcta\n");
      break;
    }
  }

  return 0;
}
