#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int days(int month, int year);

int main() {
  int option;

  do {
    printf("1) ej 11\n2) ej 19\n3) ej 21\n4) Salir\nElija una opción:\n");
    scanf("%d", &option);

    switch (option) {
    case 1:
      srand(time(NULL));

      int input;
      int hits = 0;
      char operators[] = {'+', '-', '*', '/'};
      int num_operators = 5;

      for (int i = 0; i < num_operators; i++) {
        int a = rand() % 10 + 1;
        int b = rand() % 10 + 1;
        char op = operators[rand() % 4];

        if (op == '/') {
          if (a < b) {
            int temp = a;
            a = b;
            b = temp;
          }

          while (a % b != 0) {
            b = rand() % 10 + 1;
            if (a < b) {
              int temp = a;
              a = b;
              b = temp;
            }
          }
        }

        printf("%d %c %d = ", a, op, b);
        scanf("%d", &input);

        if (input == a + b && op == '+') {
          printf("correcto\n");
          hits++;
        } else if (input == a - b && op == '-') {
          printf("correcto\n");
          hits++;
        } else if (input == a * b && op == '*') {
          printf("correcto\n");
          hits++;
        } else if (input == a / b && op == '/') {
          printf("correcto\n");
          hits++;
        } else {
          int answer;
          switch (op) {
          case '+':
            answer = a + b;
            break;
          case '-':
            answer = a - b;
            break;
          case '*':
            answer = a * b;
            break;
          case '/':
            answer = a / b;
            break;
          }
          printf("la respuesta correcta es: %d\n", answer);
        }
      }

      printf("\ntuviste %d aciertos, tu calificación es %d\n", hits,
             (hits * 100) / num_operators);

      break;

    case 2:
      int num, sum = 0;

      printf("ingresa numero entero positivo:");
      scanf("%d", &num);

      if (num <= 0) {
        return 0;
      }

      for (int i = 1; i < num; i++) {
        if (num % i == 0) {
          sum += i;
        }
      }

      if (sum == num) {
        printf("%d es un número perfecto.\n", num);
      } else {
        printf("%d no es un número perfecto.\n", num);
      }
      break;

    case 3:
      int born_day, born_month, born_year;
      int actual_day, actual_month, actual_year;
      int lived_days = 0;
      int leap_year = 0;

      printf("ingrese fecha de nacimiento:\n");
      printf("dia: ");
      scanf("%d", &born_day);
      printf("mes: ");
      scanf("%d", &born_month);
      printf("año: ");
      scanf("%d", &born_year);

      if (born_year <= 0 || born_year >= 2100 || born_month < 1 ||
          born_month > 12 || born_day < 1 ||
          born_day > days(born_month, born_year)) {
        return 0;
      }

      time_t t = time(NULL);
      struct tm *tm_info = localtime(&t);
      actual_day = tm_info->tm_mday;
      actual_month = tm_info->tm_mon + 1;
      actual_year = tm_info->tm_year + 1900;

      for (int j = born_year; j < actual_year; j++) {
        if ((j % 4 == 0 && j % 100 != 0) || (j % 400 == 0)) {
          leap_year++;
        }
      }

      int year = born_year;
      int month = born_month;
      int day = born_day;

      while (
          year < actual_year || (year == actual_year && month < actual_month) ||
          (year == actual_year && month == actual_month && day < actual_day)) {
        day++;
        if (day > days(month, year)) {
          day = 1;
          month++;
          if (month > 12) {
            month = 1;
            year++;
          }
        }
        lived_days++;
      }

      printf("dias vividos: %d\n", lived_days);
      printf("años bisiestos pasados: %d\n", leap_year);

      break;
    case 4:
      printf("bye\n");
      break;
    default:
      printf("ingrese opcion correcta\n");
    }
  } while (option != 4);

  return 0;
}

int days(int month, int year) {
  int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month == 2 && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    return 29;
  }
  return days[month - 1];
}
