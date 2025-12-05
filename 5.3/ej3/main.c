#include <stdio.h>

void triangle_pattern(int rows);
void rectangle_pattern(int b, int h);
int main() {

  int rows = 0;
  int b = 0;
  int h = 0;

  printf("ingresa el numero de filas: ");
  scanf("%d", &rows);
  printf("ingresa base del rectangulo: ");
  scanf("%d", &b);
  printf("ingresa altura del rectangulo: ");
  scanf("%d", &h);

  triangle_pattern(rows);
  rectangle_pattern(b, h);
}

void triangle_pattern(int rows) {
  for (int i = 0; i <= rows - 1; i++) {
    for (int j = 0; j <= rows - 1 - i; j++) {
      printf(" ");
    }
    for (int k = 0; k <= i; k++) {
      printf("* ");
    }
    printf("\n");
  }
}

void rectangle_pattern(int b, int h) {
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < h / 2 + 1; j++) {
      printf(" ");
    }
    for (int j = 0; j < b; j++) {
      printf("* ");
    }
    printf("\n");
  }
}
