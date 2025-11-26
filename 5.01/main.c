#include <stdio.h>

#define MAX 10

int a = 0, b = 0;
int sum();
int sub();
int mul();
int divi();

int main() {
  int op = 0;
  printf("Selecciona la operacion a realizar:\n");
  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. Multiplicacion\n");
  printf("4. Division\n");
  scanf("%d", &op);

  switch (op) {
  case 1:
    printf("El resultado de la suma es: %d\n", sum());
    break;
  case 2:
    printf("El resultado de la resta es: %d\n", sub());
    break;
  case 3:
    printf("El resultado de la multiplicacion es: %d\n", mul());
    break;
  case 4:
    printf("El resultado de la division es: %d\n", divi());
    break;
  default:
    printf("ingrese opcion correcta\n");
    break;
    return 0;
  }
}

int sum() {

  printf("ingresa primer numero\n");
  scanf("%d", &a);
  printf("ingresa segundo numero\n");
  scanf("%d", &b);
  return a + b;
}

int sub() {
  printf("ingresa primer numero\n");
  scanf("%d", &a);
  printf("ingresa segundo numero\n");
  scanf("%d", &b);
  return a - b;
}

int mul() {
  printf("ingresa primer numero\n");
  scanf("%d", &a);
  printf("ingresa segundo numero\n");
  scanf("%d", &b);
  return a * b;
}
int divi() {
  printf("ingresa numerador\n");
  scanf("%d", &a);
  do {
    printf("ingresa denominador\n");
    scanf("%d", &b);
  } while (b == 0);

  return a / b;
}
