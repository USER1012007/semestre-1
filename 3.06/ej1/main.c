#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, tipo, i;
  float servicio, demanda, total, iva, consumo, subtotal;

  printf("=== CALCULO DE RECIBO DE LUZ ===\n");
  printf("Ingrese el numero de clientes: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    printf("\n--- CLIENTE %d ---\n", i);
    printf("Tipo de cliente:\n");
    printf("1) Domestico\n");
    printf("2) Comercial\n");
    printf("3) Industrial\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &tipo);

    switch (tipo) {
    case 1:
      float lectura_anterior, lectura_actual, consumo;
      float cargo_consumo;
      float DAB = 282.84;
      float cargo_fijo = 74.10;
      char servicio[20];
      float limite_basico = 75, limite_intermedio = 140;
      float precio_basico = 1.099, precio_intermedio = 1.335,
            precio_excedente = 3.903;

      printf("Ingrese el No. de Servicio: ");
      scanf("%s", servicio);
      printf("Ingrese la lectura anterior: ");
      scanf("%f", &lectura_anterior);
      printf("Ingrese la lectura actual: ");
      scanf("%f", &lectura_actual);

      if (lectura_actual < lectura_anterior) {
        printf("\n Error: la lectura actual no puede ser menor que la "
               "anterior.\n");
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

      printf("\n--- RECIBO CLIENTE %d ---\n", i);
      printf("Servicio: %s\n", servicio);
      printf("Consumo: %.2f kWh\n", consumo);
      printf("DAB: $%.2f\n", DAB);
      printf("Cargo por consumo: $%.2f\n", cargo_consumo);
      printf("IVA (16%%): $%.2f\n", iva);
      printf("Cargo fijo: $%.2f\n", cargo_fijo);
      printf("TOTAL A PAGAR: $%.2f\n", total);
      break;

    case 2:
      char servicio[20];
      float cargo_fijo = 85.0;
      float precio_energia = 2.700;
      float precio_demanda = 150.0;
      printf("Ingrese el No. de Servicio: ");
      scanf("%s", servicio);
      printf("Ingrese consumo en kWh: ");
      scanf("%f", &consumo);
      printf("Ingrese demanda en kW: ");
      scanf("%f", &demanda);

      subtotal =
          cargo_fijo + (consumo * precio_energia) + (demanda * precio_demanda);
      iva = subtotal * 0.16;
      total = subtotal + iva;
      printf("\n--- RECIBO CLIENTE %d ---\n", i);
      printf("Servicio: %s\n", servicio);
      printf("Consumo: %.2f kWh\n", consumo);
      printf("Demanda: %.2f kW\n", demanda);
      printf("Cargo fijo: $%.2f\n", cargo_fijo);
      printf("Cargo por consumo: $%.2f\n", consumo * precio_energia);
      printf("Cargo por demanda: $%.2f\n", demanda * precio_demanda);
      printf("Subtotal: $%.2f\n", subtotal);
      printf("IVA (16%%): $%.2f\n", iva);
      printf("TOTAL A PAGAR: $%.2f\n", total);
      break;

    case 3:
      printf("POR IMPLEMENTAR.\n");
      break;

    default:
      printf("Opción no válida.\n");
      break;
    }
  }

  return 0;
}
