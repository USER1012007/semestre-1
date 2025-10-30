#include <math.h>
#include <stdio.h>

int main() {
  int op, n;

  printf("1) serie de fibonacci\n2) ecuaciones\ningrese tu opcion:\n");
  scanf("%d", &op);

  switch (op) {
  case 1:
    int tmp1 = 1;
    int tmp2 = 1;
    printf("Ingrese cantidad de elementos:\n");
    scanf("%d", &n);
    if (n <= 0) {
      break;
    }
    for (int i = 0; i < n; i++) {
      printf("%d, ", tmp2);
      int suma = tmp2 + tmp1;
      tmp2 = tmp1;
      tmp1 = suma;
    }
    printf("\n");
    break;

  case 2:
    float y;
    printf("Ingrese cantidad de ecuaciones:\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
      printf("Ingrese valor de y:\n");
      scanf("%f", &y);
      if (y > 60 || y <= 0) {
        y = 0;
      } else if (y > 0 && y <= 15) {
        y = pow(y, 2) + 15;
      } else if (y > 15 && y <= 30) {
        y = pow(y, 3) - pow(y, 2) + 12;
      } else if (y > 30 && y <= 60) {
        y = 4 * pow(y, 3) / pow(y, 2) + 8;
      }
      printf("y = %.2f\n", y);
    }
    break;

  default:
    printf("ingrese opcion correcta\n");
  }

  return 0;
}
