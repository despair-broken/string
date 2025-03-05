#include "sprintf.h"

int main() {
  char buffer[10000] = {0};
  char std_buffer[1000] = {0};
  int test_num = 1;

  // Тест 1: Модификатор `L` с положительным числом
  s21_sprintf(buffer, "Привет, число: %10.5Lf", 123.456L);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10.5Lf", 123.456L);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 2: Модификатор `L` с отрицательным числом
  s21_sprintf(buffer, "Привет, число: %10.5Lf", -123.456L);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10.5Lf", -123.456L);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // // Тест 3: `LONG_MIN` с шириной
  // s21_sprintf(buffer, "Привет, число: %20ld", LONG_MIN);
  // snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %20ld", LONG_MIN);
  // if (strcmp(buffer, std_buffer) == 0) {
  //   printf("ACCESS: Тест %d пройден успешно\n", test_num);
  // } else {
  //   printf("**FAIL: Тест %d не пройден\n", test_num);
  //   printf("********Ваш вывод: %s\n", buffer);
  //   printf("Стандартный вывод: %s\n", std_buffer);
  // }
  // test_num++;

  // // Тест 4: `LONG_MIN` с динамической шириной
  // s21_sprintf(buffer, "Привет, число: %*ld", 20, LONG_MIN);
  // snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*ld", 20,
  // LONG_MIN); if (strcmp(buffer, std_buffer) == 0) {
  //   printf("ACCESS: Тест %d пройден успешно\n", test_num);
  // } else {
  //   printf("**FAIL: Тест %d не пройден\n", test_num);
  //   printf("********Ваш вывод: %s\n", buffer);
  //   printf("Стандартный вывод: %s\n", std_buffer);
  // }
  // test_num++;

  // Тест 5: Символ с обычной шириной
  s21_sprintf(buffer, "Привет, символ: %5c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %5c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 6: Символ с динамической шириной
  s21_sprintf(buffer, "Привет, символ: %*c", 5, 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %*c", 5, 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 7: Символ с флагом `-` и обычной шириной
  s21_sprintf(buffer, "Привет, символ: %-5c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %-5c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 8: Символ с флагом `-` и динамической шириной
  s21_sprintf(buffer, "Привет, символ: %-*c", 5, 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %-*c", 5, 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 9: Строка с обычной шириной и точностью
  s21_sprintf(buffer, "Привет, строка: %10.5s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %10.5s",
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 10: Строка с динамической шириной и точностью
  s21_sprintf(buffer, "Привет, строка: %*.*s", 10, 5, "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %*.*s", 10, 5,
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 11: Строка с флагом `-`, обычной шириной и точностью
  s21_sprintf(buffer, "Привет, строка: %-10.5s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %-10.5s",
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Строка с флагом `-`, динамической шириной и точностью
  s21_sprintf(buffer, "Привет, строка: %-*.*s", 10, 5, "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %-*.*s", 10, 5,
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 13: Строка без флага, обычная ширина
  s21_sprintf(buffer, "Привет, строка: %5s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %5s", "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 14: Строка без флага, динамическая ширина
  s21_sprintf(buffer, "Привет, строка: %*s", 5, "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %*s", 5,
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 15: Строка с флагом `-`, обычная ширина
  s21_sprintf(buffer, "Привет, строка: %-5s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %-5s",
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 16: Строка с флагом `-`, динамическая ширина
  s21_sprintf(buffer, "Привет, строка: %-*s", 5, "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %-*s", 5,
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 17: Символ без флага, обычная ширина
  s21_sprintf(buffer, "Привет, символ: %5c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %5c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 18: Символ без флага, динамическая ширина
  s21_sprintf(buffer, "Привет, символ: %*c", 5, 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %*c", 5, 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 19: Символ с флагом `-`, обычная ширина
  s21_sprintf(buffer, "Привет, символ: %-5c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %-5c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 20: Символ с флагом `-`, динамическая ширина
  s21_sprintf(buffer, "Привет, символ: %-*c", 5, 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %-*c", 5, 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 21: Символ без ширины
  s21_sprintf(buffer, "Привет, символ: %c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 22: Символ `\0`
  s21_sprintf(buffer, "Привет, символ: %5c", '\0');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %5c", '\0');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 23: Строка без флага, обычная ширина и точность
  s21_sprintf(buffer, "Привет, строка: %10.5s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %10.5s",
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 24: Строка без флага, динамическая ширина и точность
  s21_sprintf(buffer, "Привет, строка: %*.*s", 10, 5, "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %*.*s", 10, 5,
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 25: Строка с флагом `-`, обычная ширина и точность
  s21_sprintf(buffer, "Привет, строка: %-10.5s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %-10.5s",
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 26: Строка с флагом `-`, динамическая ширина и точность
  s21_sprintf(buffer, "Привет, строка: %-*.*s", 10, 5, "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %-*.*s", 10, 5,
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 27: Пустая строка
  s21_sprintf(buffer, "Привет, строка: %10s", "");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %10s", "");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 28: Ширина равна 0 для строки
  s21_sprintf(buffer, "Привет, строка: %s", "Hello");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %s", "Hello");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 29: Точность равна 0
  s21_sprintf(buffer, "Привет, строка: %10.0s", "Hello");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %10.0s", "Hello");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 30: Без флага для целого числа
  s21_sprintf(buffer, "Привет, число: %5d", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5d", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 31: С флагом `-` для целого числа
  s21_sprintf(buffer, "Привет, число: %-5d", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-5d", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 32: С флагом `+` для целого числа
  s21_sprintf(buffer, "Привет, число: %+5d", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+5d", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 33: С флагом пробел для целого числа
  s21_sprintf(buffer, "Привет, число: % 5d", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 5d", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 34: С флагом `0` для целого числа
  s21_sprintf(buffer, "Привет, число: %05d", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %05d", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 35: С флагом `+` и `0` для целого числа
  s21_sprintf(buffer, "Привет, число: %+05d", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+05d", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 36: С флагом пробел и `0` для целого числа
  s21_sprintf(buffer, "Привет, число: % 05d", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 05d", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 37: Без флага для динамической ширины целого числа
  s21_sprintf(buffer, "Привет, число: %*d", 5, 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*d", 5, 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 38: С флагом `-` для динамической ширины целого числа
  s21_sprintf(buffer, "Привет, число: %-*d", 5, 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*d", 5, 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 39: С флагом `+` для динамической ширины целого числа
  s21_sprintf(buffer, "Привет, число: %+*d", 5, 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*d", 5, 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 40: С флагом пробел для динамической ширины целого числа
  s21_sprintf(buffer, "Привет, число: % *d", 5, 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *d", 5, 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 41: Длина `h` для целого числа
  s21_sprintf(buffer, "Привет, число: %5hd", (short)123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5hd", (short)123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 42: Длина `h` для отрицательного целого числа
  s21_sprintf(buffer, "Привет, число: %5hd", (short)-123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5hd", (short)-123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 43: Длина `l` для целого числа
  s21_sprintf(buffer, "Привет, число: %5ld", (long)123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5ld", (long)123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 44: Длина `l` для отрицательного целого числа с точностью
  s21_sprintf(buffer, "Привет, число: %5.15ld", (long)-123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5.15ld",
           (long)-123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 45: Ширина равна 0 для целого числа
  s21_sprintf(buffer, "Привет, число: %0d", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %0d", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 46: Число равно 0
  s21_sprintf(buffer, "Привет, число: %5d", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5d", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 47: Число равно -0
  s21_sprintf(buffer, "Привет, число: %5d", -0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5d", -0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 48: Отрицательное целое число
  s21_sprintf(buffer, "Привет, число: %5d", -123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5d", -123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 49: Положительное целое число
  s21_sprintf(buffer, "Привет, число: %5d", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5d", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 50: Отрицательное целое число
  s21_sprintf(buffer, "Привет, число: %5d", -123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5d", -123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 51: short с обычной шириной
  s21_sprintf(buffer, "Привет, число: %5hd", (short)123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5hd", (short)123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 52: short с отрицательным числом
  s21_sprintf(buffer, "Привет, число: %5hd", (short)-123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5hd", (short)-123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 53: long с обычной шириной
  s21_sprintf(buffer, "Привет, число: %5ld", (long)123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5ld", (long)123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 54: long с отрицательным числом
  s21_sprintf(buffer, "Привет, число: %5ld", (long)-123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5ld", (long)-123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 55: int с динамической шириной
  s21_sprintf(buffer, "Привет, число: %*d", 5, 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*d", 5, 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 56: int с отрицательным числом и динамической шириной
  s21_sprintf(buffer, "Привет, число: %*d", 5, -123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*d", 5, -123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 57: short с динамической шириной
  s21_sprintf(buffer, "Привет, число: %*hd", 5, (short)123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*hd", 5,
           (short)123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 58: short с отрицательным числом и динамической шириной
  s21_sprintf(buffer, "Привет, число: %*hd", 5, (short)-123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*hd", 5,
           (short)-123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 59: long с динамической шириной
  s21_sprintf(buffer, "Привет, число: %*ld", 5, (long)123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*ld", 5, (long)123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 60: long с отрицательным числом и динамической шириной
  s21_sprintf(buffer, "Привет, число: %*ld", 5, (long)-123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*ld", 5,
           (long)-123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 61: Ширина равна 0 для целого числа
  s21_sprintf(buffer, "Привет, число: %0d", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %0d", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 62: Число равно 0
  s21_sprintf(buffer, "Привет, число: %5d", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5d", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 63: Число равно -0
  s21_sprintf(buffer, "Привет, число: %5d", -0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %5d", -0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 64: int с флагом `+` и статической шириной
  s21_sprintf(buffer, "Привет, число: %+10d", INT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10d", INT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 65: int с флагом пробел и статической шириной
  s21_sprintf(buffer, "Привет, число: % 10d", INT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10d", INT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 66: int с флагом `0` и статической шириной
  s21_sprintf(buffer, "Привет, число: %010d", INT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010d", INT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 67: short с флагом `+` и статической шириной
  s21_sprintf(buffer, "Привет, число: %+10hd", SHRT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10hd", SHRT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 68: short с флагом пробел и статической шириной
  s21_sprintf(buffer, "Привет, число: % 10hd", SHRT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10hd", SHRT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 69: short с флагом `0` и статической шириной
  s21_sprintf(buffer, "Привет, число: %010hd", SHRT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010hd", SHRT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 70: long с флагом `+` и статической шириной
  s21_sprintf(buffer, "Привет, число: %+20ld", LONG_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+20ld", LONG_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 71: long с флагом пробел и статической шириной
  s21_sprintf(buffer, "Привет, число: % 20ld", LONG_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 20ld", LONG_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 72: long с флагом `0` и статической шириной
  s21_sprintf(buffer, "Привет, число: %020ld", LONG_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %020ld", LONG_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 73: int с динамической шириной и максимальным значением
  s21_sprintf(buffer, "Привет, число: %*d", 10, INT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*d", 10, INT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 74: int с динамической шириной и минимальным значением
  s21_sprintf(buffer, "Привет, число: %*d", 10, INT_MIN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*d", 10, INT_MIN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 75: short с динамической шириной и максимальным значением
  s21_sprintf(buffer, "Привет, число: %*hd", 10, SHRT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*hd", 10, SHRT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 76: short с динамической шириной и минимальным значением
  s21_sprintf(buffer, "Привет, число: %*hd", 10, SHRT_MIN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*hd", 10, SHRT_MIN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 78: Флаг '0' и статическая ширина для unsigned int
  s21_sprintf(buffer, "Привет, число: %020u", UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %020u", UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 79: Флаг '0' и статическая ширина для 0
  s21_sprintf(buffer, "Привет, число: %010u", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010u", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 80: Динамическая ширина для unsigned int
  s21_sprintf(buffer, "Привет, число: %*u", 20, UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*u", 20, UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 81: Динамическая ширина для 0
  s21_sprintf(buffer, "Привет, число: %*u", 10, 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*u", 10, 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 82: Флаг '-' и динамическая ширина для unsigned int
  s21_sprintf(buffer, "Привет, число: %-*u", 20, UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*u", 20, UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 83: Флаг '-' и динамическая ширина для 0
  s21_sprintf(buffer, "Привет, число: %-*u", 10, 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*u", 10, 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 84: Флаг '0' и динамическая ширина для unsigned int
  s21_sprintf(buffer, "Привет, число: %0*u", 20, UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %0*u", 20, UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 85: Флаг '0' и динамическая ширина для 0
  s21_sprintf(buffer, "Привет, число: %0*u", 10, 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %0*u", 10, 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 86: Модификатор 'h' с обычной шириной
  s21_sprintf(buffer, "Привет, число: %20hu", USHRT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %20hu", USHRT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 87: Модификатор 'h' с флагом '-' и обычной шириной
  s21_sprintf(buffer, "Привет, число: %-20hu", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-20hu", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 88: Модификатор 'h' с флагом '0' и обычной шириной
  s21_sprintf(buffer, "Привет, число: %020hu", USHRT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %020hu", USHRT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 89: Модификатор 'l' с обычной шириной
  s21_sprintf(buffer, "Привет, число: %20lu", ULONG_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %20lu", ULONG_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 90: Модификатор 'l' с флагом '0' и обычной шириной
  s21_sprintf(buffer, "Привет, число: %020lu", ULONG_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %020lu", ULONG_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 91: unsigned int с обычной шириной
  s21_sprintf(buffer, "Привет, число: %20u", UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %20u", UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 92: unsigned int с флагом '-' и обычной шириной
  s21_sprintf(buffer, "Привет, число: %-20u", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-20u", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 93: unsigned int с флагом '0' и обычной шириной
  s21_sprintf(buffer, "Привет, число: %020u", 1);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %020u", 1);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 94: unsigned int с флагом '-' и обычной шириной
  s21_sprintf(buffer, "Привет, число: %-20u", UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-20u", UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 95: unsigned int с флагом '-' и обычной шириной для 0
  s21_sprintf(buffer, "Привет, число: %-10u", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10u", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 96: unsigned int с флагом '0' и обычной шириной
  s21_sprintf(buffer, "Привет, число: %020u", UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %020u", UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 97: unsigned int с флагом '0' и обычной шириной для 0
  s21_sprintf(buffer, "Привет, число: %010u", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010u", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 98: unsigned int с динамической шириной
  s21_sprintf(buffer, "Привет, число: %*u", 20, UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*u", 20, UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 99: unsigned int с динамической шириной для 0
  s21_sprintf(buffer, "Привет, число: %*u", 10, 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*u", 10, 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 100: unsigned int с флагом '-' и динамической шириной
  s21_sprintf(buffer, "Привет, число: %-*u", 20, UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*u", 20, UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 101: unsigned int с флагом '-' и динамической шириной для 0
  s21_sprintf(buffer, "Привет, число: %-*u", 10, 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*u", 10, 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 102: unsigned int с флагом '0' и динамической шириной
  s21_sprintf(buffer, "Привет, число: %0*u", 20, UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %0*u", 20, UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 103: unsigned int с флагом '0' и динамической шириной для 0
  s21_sprintf(buffer, "Привет, число: %0*u", 10, 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %0*u", 10, 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 105: Минимальное значение unsigned int без флага
  s21_sprintf(buffer, "Привет, число: %20u", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %20u", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 106: Минимальное значение unsigned int с флагом `-`
  s21_sprintf(buffer, "Привет, число: %-20u", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-20u", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 107: Минимальное значение unsigned int с флагом `0`
  s21_sprintf(buffer, "Привет, число: %020u", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %020u", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 108: Максимальное значение unsigned int без флага
  s21_sprintf(buffer, "Привет, число: %20u", UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %20u", UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 109: Максимальное значение unsigned int с флагом `-`
  s21_sprintf(buffer, "Привет, число: %-20u", UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-20u", UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 110: Максимальное значение unsigned int с флагом `0`
  s21_sprintf(buffer, "Привет, число: %020u", UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %020u", UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 111: Динамическая ширина для минимального значения unsigned int
  s21_sprintf(buffer, "Привет, число: %*u", 20, 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*u", 20, 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 112: Динамическая ширина для максимального значения unsigned int
  s21_sprintf(buffer, "Привет, число: %*u", 10, UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*u", 10, UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 113: Флаг `-` и динамическая ширина для минимального значения unsigned
  // int
  s21_sprintf(buffer, "Привет, число: %-*u", 20, 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*u", 20, 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 114: Флаг `-` и динамическая ширина для максимального значения
  // unsigned int
  s21_sprintf(buffer, "Привет, число: %-*u", 10, UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*u", 10, UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 115: Флаг `0` и динамическая ширина для минимального значения unsigned
  // int
  s21_sprintf(buffer, "Привет, число: %0*u", 20, 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %0*u", 20, 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 116: Флаг `0` и динамическая ширина для максимального значения
  // unsigned int
  s21_sprintf(buffer, "Привет, число: %0*u", 10, UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %0*u", 10, UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 117: Флаг `-` и статическая ширина для float
  s21_sprintf(buffer, "Привет, число: %-10.5f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 118: Флаг `-` и статическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %-10.5f", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5f", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 119: Флаг `+` и статическая ширина для float
  s21_sprintf(buffer, "Привет, число: %+10.5f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 120: Флаг `+` и статическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %+10.5f", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5f", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 121: Флаг пробел и статическая ширина для float
  s21_sprintf(buffer, "Привет, число: % 10.5f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 122: Флаг пробел и статическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: % 10.5f", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5f", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 123: Флаг `0` и статическая ширина для float
  s21_sprintf(buffer, "Привет, число: %010.5f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 124: Флаг `0` и статическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %010.5f", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5f", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 125: Флаг `#` и статическая ширина для float
  s21_sprintf(buffer, "Привет, число: %#10.5f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 126: Флаг `#` и статическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %#10.5f", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5f", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 127: Динамическая ширина и точность для float
  s21_sprintf(buffer, "Привет, число: %*.*f", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*f", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 128: Динамическая ширина и точность для отрицательного float
  s21_sprintf(buffer, "Привет, число: %*.*f", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*f", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 129: Флаг `-` и динамическая ширина для float
  s21_sprintf(buffer, "Привет, число: %-*.*f", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*f", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 130: Флаг `-` и динамическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %-*.*f", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*f", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 131: Флаг `+` и динамическая ширина для float
  s21_sprintf(buffer, "Привет, число: %+*.*f", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*f", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 132: Флаг `+` и динамическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %+*.*f", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*f", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 133: Флаг пробел и динамическая ширина для float
  s21_sprintf(buffer, "Привет, число: % *.*f", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*f", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 134: Флаг пробел и динамическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: % *.*f", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*f", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 135: Флаг `#` и динамическая ширина для float
  s21_sprintf(buffer, "Привет, число: %#*.*f", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#*.*f", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 136: Флаг `#` и динамическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %#*.*f", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#*.*f", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 137: Ширина равна 0 для float
  s21_sprintf(buffer, "Привет, число: %0.5f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %0.5f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 138: Точность равна 0 для float
  s21_sprintf(buffer, "Привет, число: %10.0f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10.0f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 139: Флаг `-` и статическая ширина для float
  s21_sprintf(buffer, "Привет, число: %-10.5f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 140: Флаг `-` и статическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %-10.5f", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5f", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 141: Флаг `+` и статическая ширина для float
  s21_sprintf(buffer, "Привет, число: %+10.5f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 142: Флаг `+` и статическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %+10.5f", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5f", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 143: Флаг пробел и статическая ширина для float
  s21_sprintf(buffer, "Привет, число: % 10.5f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 144: Флаг пробел и статическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: % 10.5f", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5f", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 145: Флаг `0` и статическая ширина для float
  s21_sprintf(buffer, "Привет, число: %010.5f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 146: Флаг `0` и статическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %010.5f", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5f", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 147: Флаг `#` и статическая ширина для float
  s21_sprintf(buffer, "Привет, число: %#10.5f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 148: Флаг `#` и статическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %#10.5f", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5f", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 149: Динамическая ширина и точность для float
  s21_sprintf(buffer, "Привет, число: %*.*f", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*f", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 150: Динамическая ширина и точность для отрицательного float
  s21_sprintf(buffer, "Привет, число: %*.*f", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*f", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 151: float с обычной шириной и точностью
  float f_num = 123.456f;
  s21_sprintf(buffer, "Привет, число: %10.5f", f_num);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10.5f", f_num);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 152: float с обычной шириной и точностью для отрицательного числа
  f_num = -123.456f;
  s21_sprintf(buffer, "Привет, число: %10.5f", f_num);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10.5f", f_num);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 153: Флаг `-` и динамическая ширина для float
  s21_sprintf(buffer, "Привет, число: %-*.*f", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*f", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 154: Флаг `-` и динамическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %-*.*f", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*f", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 155: Флаг `+` и динамическая ширина для float
  s21_sprintf(buffer, "Привет, число: %+*.*f", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*f", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 156: Флаг `+` и динамическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %+*.*f", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*f", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 157: Флаг пробел и динамическая ширина для float
  s21_sprintf(buffer, "Привет, число: % *.*f", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*f", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 158: Флаг пробел и динамическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: % *.*f", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*f", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 159: Флаг `#` и динамическая ширина для float
  s21_sprintf(buffer, "Привет, число: %#*.*f", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#*.*f", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 160: Флаг `#` и динамическая ширина для отрицательного float
  s21_sprintf(buffer, "Привет, число: %#*.*f", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#*.*f", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 161: Модификатор `l` для float
  s21_sprintf(buffer, "Привет, число: %10.5lf", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10.5lf", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 162: Базовый тест для шестнадцатеричного вывода
  s21_sprintf(buffer, "Hex: %x", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Hex: %x", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 163: Шестнадцатеричный вывод с шириной
  s21_sprintf(buffer, "Hex with width: %5x", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Hex with width: %5x", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 164: Шестнадцатеричный вывод с заполнением нулями
  s21_sprintf(buffer, "Hex with zero padding: %05x", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Hex with zero padding: %05x", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 165: Шестнадцатеричный вывод с выравниванием влево
  s21_sprintf(buffer, "Hex with left alignment: %-5x", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Hex with left alignment: %-5x",
           255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 166: Шестнадцатеричный вывод с динамической шириной
  s21_sprintf(buffer, "Hex with dynamic width: %*x", 5, 255);
  snprintf(std_buffer, sizeof(std_buffer), "Hex with dynamic width: %*x", 5,
           255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 167: Шестнадцатеричный вывод максимального значения
  s21_sprintf(buffer, "Hex max: %x", UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Hex max: %x", UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 168: Шестнадцатеричный вывод короткого целого
  s21_sprintf(buffer, "Hex short: %hx", (unsigned short)65535);
  snprintf(std_buffer, sizeof(std_buffer), "Hex short: %hx",
           (unsigned short)65535);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 169: Шестнадцатеричный вывод с точностью
  s21_sprintf(buffer, "Hex with precision: %.8x", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Hex with precision: %.8x", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 170: Шестнадцатеричный вывод с шириной и точностью
  s21_sprintf(buffer, "Hex with width and precision: %10.8x", 255);
  snprintf(std_buffer, sizeof(std_buffer),
           "Hex with width and precision: %10.8x", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 171: Шестнадцатеричный вывод с флагом `#` и нулевым значением
  int num = 0;
  s21_sprintf(buffer, "%#10.5X", num);
  snprintf(std_buffer, sizeof(std_buffer), "%#10.5X", num);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 172: Шестнадцатеричный вывод нуля
  s21_sprintf(buffer, "Hex zero: %x", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Hex zero: %x", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 173: Нулевое значение и точность для шестнадцатеричного вывода
  s21_sprintf(buffer, "Hex with zero value and precision: %.0x", 3);
  snprintf(std_buffer, sizeof(std_buffer),
           "Hex with zero value and precision: %.0x", 3);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 174: Нулевое значение и точность для шестнадцатеричного вывода
  s21_sprintf(buffer, "Hex with zero value and precision: %.0x", 0);
  snprintf(std_buffer, sizeof(std_buffer),
           "Hex with zero value and precision: %.0x", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 175: Нулевое значение и точность для шестнадцатеричного вывода
  s21_sprintf(buffer, "Hex with zero value and precision: %.1x", 0);
  snprintf(std_buffer, sizeof(std_buffer),
           "Hex with zero value and precision: %.1x", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 176: Нулевое значение и точность для шестнадцатеричного вывода
  s21_sprintf(buffer, "Hex with zero value and precision: %.2x", 0);
  snprintf(std_buffer, sizeof(std_buffer),
           "Hex with zero value and precision: %.2x", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 177: Нулевое значение и точность для шестнадцатеричного вывода
  s21_sprintf(buffer, "Hex with zero value and precision: %.3x", 0);
  snprintf(std_buffer, sizeof(std_buffer),
           "Hex with zero value and precision: %.3x", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 178: Базовый тест для шестнадцатеричного вывода с заглавными буквами
  s21_sprintf(buffer, "Hex: %X", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Hex: %X", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 179: Шестнадцатеричный вывод с шириной и заглавными буквами
  s21_sprintf(buffer, "Hex with width: %5X", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Hex with width: %5X", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 180: Шестнадцатеричный вывод с заполнением нулями и заглавными буквами
  s21_sprintf(buffer, "Hex with zero padding: %05X", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Hex with zero padding: %05X", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 181: Шестнадцатеричный вывод с выравниванием влево и заглавными
  // буквами
  s21_sprintf(buffer, "Hex with left alignment: %-5X", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Hex with left alignment: %-5X",
           255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 182: Шестнадцатеричный вывод с динамической шириной и заглавными
  // буквами
  s21_sprintf(buffer, "Hex with dynamic width: %*X", 5, 255);
  snprintf(std_buffer, sizeof(std_buffer), "Hex with dynamic width: %*X", 5,
           255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 183: Шестнадцатеричный вывод нуля с заглавными буквами
  s21_sprintf(buffer, "Hex zero: %X", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Hex zero: %X", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 184: Шестнадцатеричный вывод максимального значения с заглавными
  // буквами
  s21_sprintf(buffer, "Hex max: %X", UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Hex max: %X", UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 185: Шестнадцатеричный вывод короткого целого с заглавными буквами
  s21_sprintf(buffer, "Hex short: %hX", (unsigned short)65535);
  snprintf(std_buffer, sizeof(std_buffer), "Hex short: %hX",
           (unsigned short)65535);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 186: Шестнадцатеричный вывод с точностью и заглавными буквами
  s21_sprintf(buffer, "Hex with precision: %.8X", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Hex with precision: %.8X", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 187: Нулевое значение и точность для шестнадцатеричного вывода с
  // заглавными буквами
  s21_sprintf(buffer, "Hex with zero value and precision: %.0X", 0);
  snprintf(std_buffer, sizeof(std_buffer),
           "Hex with zero value and precision: %.0X", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 188: Шестнадцатеричный вывод с шириной и точностью и заглавными
  // буквами
  s21_sprintf(buffer, "Hex with width and precision: %10.8X", 255);
  snprintf(std_buffer, sizeof(std_buffer),
           "Hex with width and precision: %10.8X", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 189: Базовый тест для восьмеричного вывода
  s21_sprintf(buffer, "Octal: %o", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Octal: %o", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 190: Восьмеричный вывод с шириной
  s21_sprintf(buffer, "Octal with width: %5o", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Octal with width: %5o", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 191: Восьмеричный вывод с заполнением нулями
  s21_sprintf(buffer, "Octal with zero padding: %05o", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Octal with zero padding: %05o",
           255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 192: Восьмеричный вывод с выравниванием влево
  s21_sprintf(buffer, "Octal with left alignment: %-5o", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Octal with left alignment: %-5o",
           255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 193: Восьмеричный вывод с динамической шириной
  s21_sprintf(buffer, "Octal with dynamic width: %*o", 5, 255);
  snprintf(std_buffer, sizeof(std_buffer), "Octal with dynamic width: %*o", 5,
           255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 194: Восьмеричный вывод нуля
  s21_sprintf(buffer, "Octal zero: %o", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Octal zero: %o", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 195: Восьмеричный вывод максимального значения
  s21_sprintf(buffer, "Octal max: %o", UINT_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Octal max: %o", UINT_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 196: Восьмеричный вывод короткого целого
  s21_sprintf(buffer, "Octal short: %ho", (unsigned short)65535);
  snprintf(std_buffer, sizeof(std_buffer), "Octal short: %ho",
           (unsigned short)65535);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 197: Восьмеричный вывод с точностью
  s21_sprintf(buffer, "Octal with precision: %.8o", 255);
  snprintf(std_buffer, sizeof(std_buffer), "Octal with precision: %.8o", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 198: Восьмеричный вывод с нулевым значением и точностью
  s21_sprintf(buffer, "Octal with zero value and precision: %.0o", 0);
  snprintf(std_buffer, sizeof(std_buffer),
           "Octal with zero value and precision: %.0o", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 199: Восьмеричный вывод с шириной и точностью
  s21_sprintf(buffer, "Octal with width and precision: %10.8o", 255);
  snprintf(std_buffer, sizeof(std_buffer),
           "Octal with width and precision: %10.8o", 255);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Базовый тест для указателя
  int www = 42;
  int *ptr = &www;
  s21_sprintf(buffer, "Pointer: %p", (void *)ptr);
  snprintf(std_buffer, sizeof(std_buffer), "Pointer: %p", (void *)ptr);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Нулевой указатель
  s21_sprintf(buffer, "Null pointer: %p", (void *)NULL);
  snprintf(std_buffer, sizeof(std_buffer), "Null pointer: %p", (void *)NULL);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Указатель с шириной
  s21_sprintf(buffer, "Pointer with width: %20p", (void *)ptr);
  snprintf(std_buffer, sizeof(std_buffer), "Pointer with width: %20p",
           (void *)ptr);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Базовый тест для символа
  s21_sprintf(buffer, "Привет, символ: %c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Символ с шириной
  s21_sprintf(buffer, "Привет, символ: %5c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %5c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Символ с выравниванием влево
  s21_sprintf(buffer, "Привет, символ: %-5c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %-5c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Символ с динамической шириной
  s21_sprintf(buffer, "Привет, символ: %*c", 5, 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %*c", 5, 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Символ с динамической шириной и выравниванием влево
  s21_sprintf(buffer, "Привет, символ: %-*c", 5, 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %-*c", 5, 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 206: Широкий символ
  s21_sprintf(buffer, "Привет, символ: %c", 0x10410);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %c", 0x10410);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 207: Минимальная ширина для символа
  s21_sprintf(buffer, "Привет, символ: %1c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %1c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 208: Очень большая ширина для символа
  s21_sprintf(buffer, "Привет, символ: %50c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %50c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 209: Нулевой символ с шириной
  s21_sprintf(buffer, "Привет, символ: %5c", '\0');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %5c", '\0');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 210: Нулевой символ с динамической шириной
  s21_sprintf(buffer, "Привет, символ: %*c", 5, '\0');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %*c", 5, '\0');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Широкий символ (хотя %c ожидает int)
  // ВНИМАНИЕ: поведение может быть непредсказуемым, так как %c ожидает int
  // Это тест на потенциальную ошибку, а не на корректную работу!

  // // Тесты с флагом `-` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %-10.5g", 123.456);
  // printf("Привет, число: %-10.5g", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-10.5g", -123.456);
  // printf("Привет, число: %-10.5g", -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-10.5G", 123.456);
  // printf("Привет, число: %-10.5G", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-10.5G", -123.456);
  // printf("Привет, число: %-10.5G", -123.456);
  // printf("\n%s\n", buffer);
  // s21_sprintf(buffer, "Привет, число: % 10.5g", -123.456);
  // printf("Привет, число: % 10.5g", -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % 10.5G", 123.456);
  // printf("Привет, число: % 10.5G", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % 10.5G", -123.456);
  // printf("Привет, число: % 10.5G", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `#` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %#10.5g", 123.456);
  // printf("Привет, число: %#10.5g", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %#10.5g", -123.456);
  // printf("Привет, число: %#10.5g", -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %#10.5G", 123.456);
  // printf("Привет, число: %#10.5G", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %#10.5G", -123.456);
  // printf("Привет, число: %#10.5G", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с динамической шириной
  // s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, 123.456);
  // printf("Привет, число: %*.*g", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, -123.456);
  // printf("Привет, число: %*.*g", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, 123.456);
  // printf("Привет, число: %*.*G", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, -123.456);
  // printf("Привет, число: %*.*G", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `-` и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, 123.456);
  // printf("Привет, число: %-*.*g", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, -123.456);
  // printf("Привет, число: %-*.*g", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, 123.456);
  // printf("Привет, число: %-*.*G", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, -123.456);
  // printf("Привет, число: %-*.*G", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `+` и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, 123.456);
  // printf("Привет, число: %+*.*g", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, -123.456);
  // printf("Привет, число: %+*.*g", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, 123.456);
  // printf("Привет, число: %+*.*G", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, -123.456);
  // printf("Привет, число: %+*.*G", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `#` и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, 123.456);
  // printf("Привет, число: %#*.*g", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, 123.456);
  // printf("Привет, число: % *.*G", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, -123.456);
  // printf("Привет, число: %#*.*g", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом пробел и динамической шириной
  // s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, 123.456);
  // printf("Привет, число: % *.*g", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, -123.456);
  // printf("Привет, число: % *.*g", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, -123.456);
  // printf("Привет, число: % *.*G", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `+` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %+10.5g", 123.456);
  // printf("Привет, число: %+10.5g", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5G", 123.456);
  // printf("Привет, число: %+10.5G", 123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом пробел и статической шириной
  // s21_sprintf(buffer, "Привет, число: % 10.5g", 123.456);
  // printf("Привет, число: % 10.5g", 123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `0` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %010.5g", 123.456);
  // printf("Привет, число: %010.5g", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5G", 123.456);
  // printf("Привет, число: %010.5G", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5G", -123.456);
  // printf("Привет, число: %010.5G", -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5g", -123.456);
  // printf("Привет, число: %010.5g", -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5g", -123.456);
  // printf("Привет, число: %+10.5g", -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5G", -123.456);
  // printf("Привет, число: %+10.5G", -123.456);
  // printf("\n%s\n", buffer);

  // Без флага, динамическая ширина и точность
  // Тест 217: Строка с динамической шириной и точностью, содержащая `\0`
  s21_sprintf(buffer, "Привет, строка: %*.*s", 10, 5, "He\0lloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %*.*s", 10, 5,
           "He\0lloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 218: Строка с динамической шириной и точностью, содержащая `\0`, и
  // флагом `-`
  s21_sprintf(buffer, "Привет, строка: %-*.*s", 10, 5, "He\0lloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %-*.*s", 10, 5,
           "He\0lloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 219: Краевой случай для float: ноль
  s21_sprintf(buffer, "Привет, число: %f", 0.0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %f", 0.0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 220: Краевой случай для float: отрицательный ноль
  s21_sprintf(buffer, "Привет, число: %f", -0.0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %f", -0.0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 221: Краевой случай для float: бесконечность
  s21_sprintf(buffer, "Привет, число: %f", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %f", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 222: Краевой случай для float: отрицательная бесконечность
  s21_sprintf(buffer, "Привет, число: %f", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %f", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 223: Краевой случай для float: NaN
  s21_sprintf(buffer, "Привет, число: %f", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %f", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 224: NaN с шириной
  s21_sprintf(buffer, "Привет, число: %10f", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10f", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 225: Точность 0 для float
  s21_sprintf(buffer, "Привет, число: %.0f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.0f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 226: Точность 1 для float
  s21_sprintf(buffer, "Привет, число: %.1f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.1f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 227: Точность 2 для float
  s21_sprintf(buffer, "Привет, число: %.2f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.2f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 228: Точность 3 для float
  s21_sprintf(buffer, "Привет, число: %.3f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.3f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 229: Точность 4 для float
  s21_sprintf(buffer, "Привет, число: %.4f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.4f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 230: Точность 5 для float
  s21_sprintf(buffer, "Привет, число: %.5f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.5f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 231: Точность 6 для float
  s21_sprintf(buffer, "Привет, число: %.6f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.6f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 232: Точность 7 для float
  s21_sprintf(buffer, "Привет, число: %.7f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.7f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 233: Точность 0 для float с другим числом
  s21_sprintf(buffer, "Привет, число: %.0f", 1234.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.0f", 1234.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 234: Точность 1 для float с другим числом
  s21_sprintf(buffer, "Привет, число: %.1f", 1235.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.1f", 1235.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 235: Точность 2 для float с другим числом
  s21_sprintf(buffer, "Привет, число: %.2f", 1236.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.2f", 1236.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 236: Точность 3 для float с другим числом
  s21_sprintf(buffer, "Привет, число: %.3f", 1234.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.3f", 1234.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 237: Точность 4 для float
  s21_sprintf(buffer, "Привет, число: %.4f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.4f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 238: Точность 7 для float с другим числом
  s21_sprintf(buffer, "Привет, число: %.7f", 1236.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.7f", 1236.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 239: Точность 5 для float с другим числом
  s21_sprintf(buffer, "Привет, число: %.5f", 1235.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.5f", 1235.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 240: Точность 6 для float
  s21_sprintf(buffer, "Привет, число: %.6f", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.6f", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 241: Малое число с плавающей точкой
  s21_sprintf(buffer, "Привет, число: %f", 0.010100);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %f", 0.010100);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 242: Отрицательное число с плавающей точкой и шириной
  s21_sprintf(buffer, "%7.6f\n", -1.000001);
  snprintf(std_buffer, sizeof(std_buffer), "%7.6f\n", -1.000001);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 243: Краевой случай для экспоненциального вывода: ноль
  s21_sprintf(buffer, "Привет, число: %e", 0.0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", 0.0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 244: Краевой случай для экспоненциального вывода: отрицательный ноль
  s21_sprintf(buffer, "Привет, число: %e", -0.0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", -0.0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 245: Краевой случай для экспоненциального вывода: бесконечность
  s21_sprintf(buffer, "Привет, число: %e", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 246: Краевой случай для экспоненциального вывода: отрицательная
  // бесконечность
  s21_sprintf(buffer, "Привет, число: %e", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 247: NaN с шириной для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %10e", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10e", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 248: Точность 0 для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %.0e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.0e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 249: Точность 1 для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %.1e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.1e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 250: Точность 2 для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %.2e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.2e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 251: Точность 3 для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %.3e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.3e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 252: Точность 4 для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %.4e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.4e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 253: Точность 5 для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %.5e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.5e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 254: Точность 6 для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %.6e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.6e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 255: Точность 7 для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %.7e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.7e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 256: Точность 0 для экспоненциального вывода с другим числом
  s21_sprintf(buffer, "Привет, число: %.0e", 1234.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.0e", 1234.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 257: Точность 1 для экспоненциального вывода с другим числом
  s21_sprintf(buffer, "Привет, число: %.1e", 1235.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.1e", 1235.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 258: Точность 2 для экспоненциального вывода с другим числом
  s21_sprintf(buffer, "Привет, число: %.2e", 1236.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.2e", 1236.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 259: Точность 3 для экспоненциального вывода с другим числом
  s21_sprintf(buffer, "Привет, число: %.3e", 1234.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.3e", 1234.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 260: Точность 4 для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %.4e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.4e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 261: Точность 7 для экспоненциального вывода с другим числом
  s21_sprintf(buffer, "Привет, число: %.7e", 1236.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.7e", 1236.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 262: Точность 5 для экспоненциального вывода с другим числом
  s21_sprintf(buffer, "Привет, число: %.5e", 1235.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.5e", 1235.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 263: Точность 6 для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %.6e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.6e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 264: Малое число с экспоненциальным выводом
  s21_sprintf(buffer, "Привет, число: %e", 0.010100);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", 0.010100);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 265: Отрицательное число с экспоненциальным выводом и шириной
  s21_sprintf(buffer, "%7.6e\n", -1.000001);
  snprintf(std_buffer, sizeof(std_buffer), "%7.6e\n", -1.000001);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 266: Флаг `+` для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %+e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 267: Флаг `+` для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %+e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 270: Флаг пробел для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: % e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 271: Флаг пробел для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: % e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 272: Флаг `#` для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %#e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 273: Флаг `#` для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %#e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 274: Точность 5 для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %.5e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.5e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 275: Точность 5 для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %.5e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %.5e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 276: Ширина и точность для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %10.5e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10.5e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 277: Ширина и точность для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %10.5e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10.5e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 278: Краевой случай для экспоненциального вывода: ноль
  s21_sprintf(buffer, "Привет, число: %e", 0.0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", 0.0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 279: Краевой случай для экспоненциального вывода: отрицательный ноль
  s21_sprintf(buffer, "Привет, число: %e", -0.0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", -0.0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 280: Краевой случай для экспоненциального вывода: бесконечность
  s21_sprintf(buffer, "Привет, число: %e", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 281: Краевой случай для экспоненциального вывода: отрицательная
  // бесконечность
  s21_sprintf(buffer, "Привет, число: %e", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 282: Краевой случай для экспоненциального вывода: NaN
  s21_sprintf(buffer, "Привет, число: %e", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 283: Очень большое число для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %e", 1e308);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", 1e308);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 284: Очень большое отрицательное число для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %e", -1e308);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", -1e308);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 285: Очень маленькое число для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %e", 1e-323);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", 1e-323);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 286: Очень маленькое отрицательное число для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %e", -1e-323);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", -1e-323);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 287: NaN с шириной для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %10e", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10e", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 288: Ширина и точность для экспоненциального вывода с заполнением
  // нулями
  s21_sprintf(buffer, "Привет, число: %010.3e   ", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3e   ",
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 289: Ширина и точность для отрицательного экспоненциального вывода с
  // заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010.3e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 290: Малое число с экспоненциальным выводом и шириной
  s21_sprintf(buffer, "Привет, число: %010e", 0.010100);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", 0.010100);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 291: Отрицательное число с экспоненциальным выводом и шириной
  s21_sprintf(buffer, "%010.6e\n", -1.000001);
  snprintf(std_buffer, sizeof(std_buffer), "%010.6e\n", -1.000001);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 292: Флаг `+` и заполнение нулями для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %+010e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+010e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 293: Флаг `+` и заполнение нулями для отрицательного экспоненциального
  // вывода
  s21_sprintf(buffer, "Привет, число: %+010e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+010e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 294: Заполнение нулями для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %010.3e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 295: Заполнение нулями для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %010.3e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 296: Ширина для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %010e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 297: Ширина для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %010e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 298: Флаг пробел и заполнение нулями для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: % 010e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 010e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 299: Флаг пробел и заполнение нулями для отрицательного
  // экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: % 010e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 010e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 300: Флаг `#` и заполнение нулями для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %#010e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#010e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 301: Флаг `#` и заполнение нулями для отрицательного экспоненциального
  // вывода
  s21_sprintf(buffer, "Привет, число: %#010e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#010e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 302: Точность и заполнение нулями для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %010.5e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 303: Точность и заполнение нулями для отрицательного экспоненциального
  // вывода
  s21_sprintf(buffer, "Привет, число: %010.5e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 304: Ширина и заполнение нулями для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %010.5e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 305: Ширина и заполнение нулями для отрицательного экспоненциального
  // вывода
  s21_sprintf(buffer, "Привет, число: %010.5e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 306: Краевой случай с заполнением нулями: ноль
  s21_sprintf(buffer, "Привет, число: %010e", 0.0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", 0.0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 307: Краевой случай с заполнением нулями: отрицательный ноль
  s21_sprintf(buffer, "Привет, число: %010e", -0.0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", -0.0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 308: Краевой случай с заполнением нулями: NaN
  s21_sprintf(buffer, "Привет, число: %010e", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 309: Очень большое число с заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010e", 1e308);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", 1e308);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 310: Очень большое отрицательное число с заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010e", -1e308);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", -1e308);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 311: Очень маленькое число с заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010e", 1e-323);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", 1e-323);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 312: Очень маленькое отрицательное число с заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010e", -1e-323);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", -1e-323);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 313: NaN с заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010e", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 314: Бесконечность с заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010e", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 315: Краевой случай с заполнением нулями: ноль
  s21_sprintf(buffer, "Привет, число: %010e", 0.0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", 0.0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 316: Краевой случай с заполнением нулями: отрицательный ноль
  s21_sprintf(buffer, "Привет, число: %010e", -0.0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", -0.0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 317: Краевой случай с заполнением нулями: отрицательная бесконечность
  s21_sprintf(buffer, "Привет, число: %010e", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 318: NaN с заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010e", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 319: Ширина и точность для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %010.3e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 320: Ширина и точность для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %010.3e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 322: NaN с заполнением нулями и пробелом после формата
  s21_sprintf(buffer, "Привет, число: %010e ", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e ", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 323: NaN с заполнением нулями и двумя пробелами после формата
  s21_sprintf(buffer, "Привет, число: %010e  ", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e  ", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 324: NaN с заполнением нулями для формата f
  s21_sprintf(buffer, "Привет, число: %010f", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 326: NaN с выравниванием влево и текстом после формата
  s21_sprintf(buffer, "Привет, число: %-10fASD", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10fASD", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 327: NaN с заполнением нулями и текстом после формата
  s21_sprintf(buffer, "Привет, число: %010fASD", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010fASD", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 328: Бесконечность с заполнением нулями для формата f
  s21_sprintf(buffer, "Привет, число: %010f", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 329: Бесконечность с выравниванием влево для формата f
  s21_sprintf(buffer, "Привет, число: %-10f", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10f", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 330: Отрицательная бесконечность с заполнением нулями для формата f
  s21_sprintf(buffer, "Привет, число: %010f", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 331: Отрицательная бесконечность с выравниванием влево для формата f
  s21_sprintf(buffer, "Привет, число: %-10f", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10f", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 332: Бесконечность с заполнением нулями для формата f без пробела
  // после формата
  s21_sprintf(buffer, "Привет, число: %010f", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 333: Бесконечность с заполнением нулями для формата f с пробелом после
  // формата
  s21_sprintf(buffer, "Привет, число: %010f ", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f ", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 334: Бесконечность с заполнением нулями для формата f с двумя
  // пробелами после формата
  s21_sprintf(buffer, "Привет, число: %010f  ", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f  ", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 335: Отрицательная бесконечность с заполнением нулями для формата f
  // без пробела после формата
  s21_sprintf(buffer, "Привет, число: %010f", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 336: Отрицательная бесконечность с заполнением нулями для формата f с
  // пробелом после формата
  s21_sprintf(buffer, "Привет, число: %010f ", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f ", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 337: Отрицательная бесконечность с заполнением нулями для формата f с
  // двумя пробелами после формата
  s21_sprintf(buffer, "Привет, число: %010f  ", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f  ", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 338: Отрицательная бесконечность с заполнением нулями для
  // экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %010e", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 339: Бесконечность с заполнением нулями для экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %010e", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 340: Бесконечность с заполнением нулями для формата f
  s21_sprintf(buffer, "Привет, число: %010f", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 341: Бесконечность с заполнением нулями для экспоненциального вывода
  // без пробела после формата
  s21_sprintf(buffer, "Привет, число: %010e", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 342: Бесконечность с заполнением нулями для экспоненциального вывода с
  // пробелом после формата
  s21_sprintf(buffer, "Привет, число: %010e ", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e ", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 343: Бесконечность с заполнением нулями для экспоненциального вывода с
  // двумя пробелами после формата
  s21_sprintf(buffer, "Привет, число: %010e  ", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e  ", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 344: Отрицательная бесконечность с заполнением нулями для
  // экспоненциального вывода без пробела после формата
  s21_sprintf(buffer, "Привет, число: %010e", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 345: Отрицательная бесконечность с заполнением нулями для
  // экспоненциального вывода с пробелом после формата
  s21_sprintf(buffer, "Привет, число: %010e ", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e ", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 346: Отрицательная бесконечность с заполнением нулями для
  // экспоненциального вывода с двумя пробелами после формата
  s21_sprintf(buffer, "Привет, число: %010e  ", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e  ", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 347: Бесконечность с экспоненциальным выводом и текстом после формата
  s21_sprintf(buffer, "Привет, число: %e  qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e  qq", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 348: Отрицательная бесконечность с экспоненциальным выводом и текстом
  // после формата
  s21_sprintf(buffer, "Привет, число: %010e  qqq", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e  qqq",
           -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 349: Бесконечность с заполнением нулями для формата f и текстом после
  // формата
  s21_sprintf(buffer, "Привет, число: %010f  qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f  qq",
           INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 350: Бесконечность с выравниванием влево для формата f и текстом после
  // формата
  s21_sprintf(buffer, "Привет, число: %-10f  qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10f  qq",
           INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 351: Отрицательная бесконечность с заполнением нулями для формата f и
  // текстом после формата
  s21_sprintf(buffer, "Привет, число: %010f  qq", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f  qq",
           -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 352: Отрицательная бесконечность с выравниванием влево для формата f и
  // текстом после формата
  s21_sprintf(buffer, "Привет, число: %-10f  qq", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10f  qq",
           -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 353: Бесконечность с заполнением нулями для формата f и текстом после
  // формата без пробела после формата
  s21_sprintf(buffer, "Привет, число: %010f  qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f  qq",
           INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 354: Бесконечность с заполнением нулями для формата f и текстом после
  // формата с двумя пробелами после формата
  s21_sprintf(buffer, "Привет, число: %010f   qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f   qq",
           INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 355: Бесконечность с заполнением нулями для формата f и текстом после
  // формата с тремя пробелами после формата
  s21_sprintf(buffer, "Привет, число: %010f    qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f    qq",
           INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 356: Отрицательная бесконечность с заполнением нулями для формата f и
  // текстом после формата без пробела после формата
  s21_sprintf(buffer, "Привет, число: %010f  qq", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f  qq",
           -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 357: Отрицательная бесконечность с заполнением нулями для формата f и
  // текстом после формата с двумя пробелами после формата
  s21_sprintf(buffer, "Привет, число: %010f   qq", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f   qq",
           -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 358: Отрицательная бесконечность с заполнением нулями для формата f и
  // текстом после формата с тремя пробелами после формата
  s21_sprintf(buffer, "Привет, число: %010f    qq", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f    qq",
           -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 359: Отрицательная бесконечность с экспоненциальным выводом и текстом
  // после формата
  s21_sprintf(buffer, "Привет, число: %010e  qq", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e  qq",
           -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 360: Бесконечность с экспоненциальным выводом и текстом после формата
  s21_sprintf(buffer, "Привет, число: %010e  qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e  qq",
           INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 361: Бесконечность с экспоненциальным выводом и текстом после формата
  // без пробела после формата
  s21_sprintf(buffer, "Привет, число: %010e  qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e  qq",
           INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 362: Бесконечность с экспоненциальным выводом и текстом после формата
  // с двумя пробелами после формата
  s21_sprintf(buffer, "Привет, число: %010e   qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e   qq",
           INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 363: Бесконечность с экспоненциальным выводом и текстом после формата
  // с тремя пробелами после формата
  s21_sprintf(buffer, "Привет, число: %010e    qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e    qq",
           INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 364: Отрицательная бесконечность с экспоненциальным выводом и текстом

  // // С длинным целым  ЕСЛИ БУДУ ПЕРЕДЕЛЫВАТЬ ТУТ ПЕРЕДЕЛАТЬ!
  // s21_sprintf(buffer, "Hex with long: %lx", LONG_MAX);
  // printf("Hex with long: %lx\n", LONG_MAX);
  // printf("%s\n", buffer);

  // Тесты с флагом `-` и статической шириной

  // s21_sprintf(buffer, "Привет, число: %+10.5g", 0.00012345);
  // printf("Привет, число: %+10.5g", 0.00012345);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5G", 0.00012345);
  // printf("Привет, число: %+10.5G", 0.00012345);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % 10.5g", 0.00012345);
  // printf("Привет, число: % 10.5g", 0.00012345);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5g", 0.00012345);
  // printf("Привет, число: %010.5g", 0.00012345);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5G", 0.00012345);
  // printf("Привет, число: %010.5G", 0.00012345);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5G", -0.00012345);
  // printf("Привет, число: %010.5G", -0.00012345);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5g", -0.00012345);
  // printf("Привет, число: %010.5g", -0.00012345);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5e", -0.00012345);
  // printf("Привет, число: %+10.5e", -0.00012345);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5G", -12345678.9);
  // printf("Привет, число: %+10.5G", -12345678.9);
  // printf("\n%s\n", buffer);

  // // Тест 9: Маленькое число с использованием `%G`
  // s21_sprintf(buffer, "Привет, число: %12.2G", -0.00012345);
  // printf("Привет, число: %12.2G", -0.00012345);
  // printf("\n%s\n", buffer);

  // // Тест 7: Маленькое число с флагом `0` и выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %012.2g", -0.00012345);
  // printf("Привет, число: %012.2g", -0.00012345);
  // printf("\n%s\n", buffer);

  // // Тест 3: Маленькое число с выравниванием по левому краю
  // s21_sprintf(buffer, "Привет, число: %-12.2g", -0.00012345);
  // printf("Привет, число: %-12.2g", -0.00012345);
  // printf("\n%s\n", buffer);

  // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %+12.2g", -0.00012345);
  // printf("Привет, число: %+12.2g", -0.00012345);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %12.2g", -0.00012345);
  // printf("Привет, число: %12.2g", -0.00012345);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %12.2G", -12345.6789);
  // printf("Привет, число: %12.2G", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-12.2G", -12345.6789);
  // printf("Привет, число: %-12.2G", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+12.2G", -12345.6789);
  // printf("Привет, число: %+12.2G", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %012.2G", -12345.6789);
  // printf("Привет, число: %012.2G", -12345.6789);
  // printf("\n%s\n", buffer);

  // // Тест 2: Большое число с выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %12.2g", 1234567890123.45);
  // printf("Привет, число: %12.2g", 1234567890123.45);
  // printf("\n%s\n", buffer);

  // // Тест 4: Большое число с выравниванием по левому краю
  // s21_sprintf(buffer, "Привет, число: %-12.2g", 1234567890123.45);
  // printf("Привет, число: %-12.2g", 1234567890123.45);
  // printf("\n%s\n", buffer);

  // // Тест 6: Большое число с флагом `+` и выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %+12.2g", 1234567890123.45);
  // printf("Привет, число: %+12.2g", 1234567890123.45);
  // printf("\n%s\n", buffer);

  // // Тест 8: Большое число с флагом `0` и выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %012.2g", 1234567890123.45);
  // printf("Привет, число: %012.2g", 1234567890123.45);
  // printf("\n%s\n", buffer);

  // // Тест 10: Большое число с использованием `%G`
  // s21_sprintf(buffer, "Привет, число: %12.2G", 1234567890123.45);
  // printf("Привет, число: %12.2G", 1234567890123.45);
  // printf("\n%s\n", buffer);

  // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %12g", -0.00012345);
  // printf("Привет, число: %12g", -0.00012345);
  // printf("\n%s\n", buffer);

  // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %+12g", -0.00012345);
  // printf("Привет, число: %+12g", -0.00012345);
  // printf("\n%s\n", buffer);

  // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %-12g", -0.00012345);
  // printf("Привет, число: %-12g", -0.00012345);
  // printf("\n%s\n", buffer);

  // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %012g", -0.00012345);
  // printf("Привет, число: %012g", -0.00012345);
  // printf("\n%s\n", buffer);

  // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %12.4g", -0.00012345);
  // printf("Привет, число: %12.4g", -0.00012345);
  // printf("\n%s\n", buffer);

  // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %+12.4g", -0.00012345);
  // printf("Привет, число: %+12.4g", -0.00012345);
  // printf("\n%s\n", buffer);

  // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %-12.4g", -0.00012345);
  // printf("Привет, число: %-12.4g", -0.00012345);
  // printf("\n%s\n", buffer);

  // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  // s21_sprintf(buffer, "Привет, число: %012.4g", -0.00012345);
  // printf("Привет, число: %012.4g", -0.00012345);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5G", -12345.6789);
  // printf("Привет, число: %+10.5G", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5G", -0.000000000);
  // printf("Привет, число: %+10.5G", -0.000000000);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-10.5g", 123.456);
  // printf("Привет, число: %-10.5g", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-10.5g", -123.456);
  // printf("Привет, число: %-10.5g", -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-10.5G", 123.456);
  // printf("Привет, число: %-10.5G", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-10.5G", -123.456);
  // printf("Привет, число: %-10.5G", -123.456);
  // printf("\n%s\n", buffer);
  // s21_sprintf(buffer, "Привет, число: % 10.5g", -123.456);
  // printf("Привет, число: % 10.5g", -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % 10.5G", 123.456);
  // printf("Привет, число: % 10.5G", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % 10.5G", -123.456);
  // printf("Привет, число: % 10.5G", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `#` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %#10.5g", 123.456);
  // printf("Привет, число: %#10.5g", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %#10.5g", -123.456);
  // printf("Привет, число: %#10.5g", -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %#10.5G", 123.456);
  // printf("Привет, число: %#10.5G", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %#10.5G", -123.456);
  // printf("Привет, число: %#10.5G", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с динамической шириной
  // s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, 123.456);
  // printf("Привет, число: %*.*g", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, -123.456);
  // printf("Привет, число: %*.*g", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, 123.456);
  // printf("Привет, число: %*.*G", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, -123.456);
  // printf("Привет, число: %*.*G", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `-` и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, 123.456);
  // printf("Привет, число: %-*.*g", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, -123.456);
  // printf("Привет, число: %-*.*g", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, 123.456);
  // printf("Привет, число: %-*.*G", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, -123.456);
  // printf("Привет, число: %-*.*G", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `+` и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, 123.456);
  // printf("Привет, число: %+*.*g", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, -123.456);
  // printf("Привет, число: %+*.*g", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, 123.456);
  // printf("Привет, число: %+*.*G", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, -123.456);
  // printf("Привет, число: %+*.*G", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `#` и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, 123.456);
  // printf("Привет, число: %#*.*g", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, 123.456);
  // printf("Привет, число: % *.*G", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, -123.456);
  // printf("Привет, число: %#*.*g", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом пробел и динамической шириной
  // s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, 123.456);
  // printf("Привет, число: % *.*g", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, -123.456);
  // printf("Привет, число: % *.*g", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, -123.456);
  // printf("Привет, число: % *.*G", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `+` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %+10.5g", 123.456);
  // printf("Привет, число: %+10.5g", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5G", 123.456);
  // printf("Привет, число: %+10.5G", 123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом пробел и статической шириной
  // s21_sprintf(buffer, "Привет, число: % 10.5g", 123.456);
  // printf("Привет, число: % 10.5g", 123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `0` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %010.5g", 123.456);
  // printf("Привет, число: %010.5g", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5G", 123.456);
  // printf("Привет, число: %010.5G", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5G", -123.456);
  // printf("Привет, число: %010.5G", -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5g", -123.456);
  // printf("Привет, число: %010.5g", -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5g", -123.456);
  // printf("Привет, число: %+10.5g", -123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5G", -123.456);
  // printf("Привет, число: %+10.5G", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `+` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %+10.5g", 12345.6789);
  // printf("Привет, число: %+10.5g", 12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5G", 12345.6789);
  // printf("Привет, число: %+10.5G", 12345.6789);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом пробел и статической шириной
  // s21_sprintf(buffer, "Привет, число: % 10.5g", 12345.6789);
  // printf("Привет, число: % 10.5g", 12345.6789);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `0` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %010.5g", 12345.6789);
  // printf("Привет, число: %010.5g", 12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5G", 12345.6789);
  // printf("Привет, число: %010.5G", 12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5G", -12345.6789);
  // printf("Привет, число: %010.5G", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5g", -12345.6789);
  // printf("Привет, число: %010.5g", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5g", -12345.6789);
  // printf("Привет, число: %+10.5g", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5G", -12345.6789);
  // printf("Привет, число: %+10.5G", -12345.6789);
  // printf("\n%s\n", buffer);

  // printf("\n");

  // s21_sprintf(buffer, "Привет, число: %-11G", -12345.6789);
  // printf("Привет, число: %-11G", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+11G", -12345.6789);
  // printf("Привет, число: %+11G", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %011G", -12345.6789);
  // printf("Привет, число: %011G", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % 11G", -12345.6789);
  // printf("Привет, число: % 11G", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-11.6G", -12345.6789);
  // printf("Привет, число: %-11.6G", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+11.6G", -12345.6789);
  // printf("Привет, число: %+11.6G", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %011.6G", -12345.6789);
  // printf("Привет, число: %011.6G", -12345.6789);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % 11.7G", -12345.6789);
  // printf("Привет, число: % 11.7G", -12345.6789);
  // printf("\n%s\n", buffer);

  // Тест 365: Отрицательная бесконечность с заполнением нулями для
  // экспоненциального вывода и текстом после формата
  s21_sprintf(buffer, "Привет, число: %010e    qq", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010e    qq",
           -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 367: Бесконечность с заполнением нулями для формата f и текстом после
  // формата
  s21_sprintf(buffer, "Привет, число: %010f  qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f  qq",
           INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 368: Бесконечность с заполнением нулями для формата f с пробелом после
  // формата
  s21_sprintf(buffer, "Привет, число: %010f   qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f   qq",
           INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 369: Бесконечность с заполнением нулями для формата f с двумя
  // пробелами после формата
  s21_sprintf(buffer, "Привет, число: %010f    qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f    qq",
           INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 370: Отрицательная бесконечность с заполнением нулями для формата f с
  // пробелом после формата
  s21_sprintf(buffer, "Привет, число: %010f ", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f ", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 371: Отрицательная бесконечность с выравниванием влево для формата f и
  // текстом после формата
  s21_sprintf(buffer, "Привет, число: %-10f ", -INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10f ", -INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS :Тест %d пройден успешно \n", test_num);
  } else {
    printf("**FAIL :Тест%dнепройден \n", test_num);
    printf("********Вашвывод :%s \n", buffer);
    printf("Стандартныйвывод :%s \n", std_buffer);
  }
  test_num++;

  // Тест 1
  s21_sprintf(buffer, "Привет, символ: %c", 500);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %c", 500);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 2
  s21_sprintf(buffer, "Привет, символ: %-c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %-c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 3
  s21_sprintf(buffer, "Привет, символ: %-10c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %-10c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 4
  s21_sprintf(buffer, "Привет, символ: %10c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %10c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 5
  s21_sprintf(buffer, "Привет, символ: %c", 47);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %c", 47);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 6
  s21_sprintf(buffer, "Привет, символ: %-10c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %-10c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 7
  s21_sprintf(buffer, "Привет, символ: %10c", '\0');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %10c", '\0');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 8
  s21_sprintf(buffer, "Привет, символ: %100c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %100c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 9
  s21_sprintf(buffer, "Привет, символ: %c", '\n');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %c", '\n');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 10
  s21_sprintf(buffer, "Привет, символ: %c", '\t');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %c", '\t');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 11
  s21_sprintf(buffer, "Привет, символ: %10c", 'A');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %10c", 'A');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12
  s21_sprintf(buffer, "Привет, строка: %10.5s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %10.5s",
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 13: Ширина меньше длины строки без точности
  s21_sprintf(buffer, "Привет, строка: %5s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %5s", "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 14: Ширина больше длины строки без точности
  s21_sprintf(buffer, "Привет, строка: %15s", "Hello");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %15s", "Hello");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 15: Точность меньше длины строки
  s21_sprintf(buffer, "Привет, строка: %.5s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %.5s",
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 16: Точность больше длины строки
  s21_sprintf(buffer, "Привет, строка: %.10s", "Hello");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %.10s", "Hello");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 17: Ширина и точность заданы
  s21_sprintf(buffer, "Привет, строка: %10.5s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %10.5s",
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 18: Флаг минус с шириной и точностью
  s21_sprintf(buffer, "Привет, строка: %-10.5s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %-10.5s",
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 19: Пустая строка
  s21_sprintf(buffer, "Привет, строка: %s", "");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %s", "");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 212: Нулевой символ с динамической шириной и выравниванием влево
  s21_sprintf(buffer, "Привет, символ: %-*c", 5, '\0');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %-*c", 5, '\0');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 213: Нулевой символ
  s21_sprintf(buffer, "Привет, символ: %c", '\0');
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %c", '\0');
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  s21_sprintf(buffer, "Привет, символ: %-5c %d", '\0', 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %-5c %d", '\0',
           123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  s21_sprintf(buffer, "Привет, символ: %c %d", '\0', 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, символ: %c %d", '\0', 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 20: Ширина меньше точности
  s21_sprintf(buffer, "Привет, строка: %3.10s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %3.10s",
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 21: Точность равна нулю
  s21_sprintf(buffer, "Привет, строка: %.0s", "HelloWorld");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %.0s",
           "HelloWorld");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 325: NaN с заполнением нулями для формата f и пробелом после формата
  s21_sprintf(buffer, "Привет, число: %010f ", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f ", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // // Тест 214: Восьмеричный вывод с модификатором `l`
  // s21_sprintf(buffer, "Octal with long: %lo", LONG_MAX);
  // snprintf(std_buffer, sizeof(std_buffer), "Octal with long: %lo", LONG_MAX);
  // if (strcmp(buffer, std_buffer) == 0) {
  //   printf("ACCESS: Тест %d пройден успешно\n", test_num);
  // } else {
  //   printf("**FAIL: Тест %d не пройден\n", test_num);
  //   printf("********Ваш вывод: %s\n", buffer);
  //   printf("Стандартный вывод: %s\n", std_buffer);
  // }
  // test_num++;

  // // Тест 215: Шестнадцатеричный вывод с модификатором `l` и заглавными
  // буквами s21_sprintf(buffer, "Hex with long: %lX", LONG_MAX);
  // snprintf(std_buffer, sizeof(std_buffer), "Hex with long: %lX", LONG_MAX);
  // if (strcmp(buffer, std_buffer) == 0) {
  //   printf("ACCESS: Тест %d пройден успешно\n", test_num);
  // } else {
  //   printf("**FAIL: Тест %d не пройден\n", test_num);
  //   printf("********Ваш вывод: %s\n", buffer);
  //   printf("Стандартный вывод: %s\n", std_buffer);
  // }
  // test_num++;

  // // Тест 216: Шестнадцатеричный вывод с модификатором `l`
  // s21_sprintf(buffer, "Hex with long: %lx", LONG_MAX);
  // snprintf(std_buffer, sizeof(std_buffer), "Hex with long: %lx", LONG_MAX);
  // if (strcmp(buffer, std_buffer) == 0) {
  //   printf("ACCESS: Тест %d пройден успешно\n", test_num);
  // } else {
  //   printf("**FAIL: Тест %d не пройден\n", test_num);
  //   printf("********Ваш вывод: %s\n", buffer);
  //   printf("Стандартный вывод: %s\n", std_buffer);
  // }
  // test_num++;

  // Тест 211: Нулевой символ с шириной и выравниванием влево

  // Тест 22: Отрицательная ширина

  // Тест 372: Бесконечность с выравниванием влево для формата f и текстом после
  // формата
  s21_sprintf(buffer, "Привет, число:%-10f ", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число:%-10f ", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS :Тест %d пройден успешно \n", test_num);
  } else {
    printf("**FAIL :Тест %d не пройден \n", test_num);
    printf("********Вашвывод :%s \n", buffer);
    printf("Стандартныйвывод :%s \n", std_buffer);
  }
  test_num++;
  s21_sprintf(buffer, "Привет, строка: %-10s", "Hello");
  snprintf(std_buffer, sizeof(std_buffer), "Привет, строка: %-10s", "Hello");
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

    // Тест 366: Бесконечность с заглавными буквами и текстом после формата
  s21_sprintf(buffer, "Привет, число: %E  qq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %E  qq", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 321: NaN с заглавными буквами и заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010F", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010F", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 373: Бесконечность с форматом f и текстом после формата без пробела
  s21_sprintf(buffer, "Привет, число: %fqq", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %fqq", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 374: NaN с заполнением нулями для формата f и текстом после формата
  s21_sprintf(buffer, "Привет, число: %010f  qq", NAN);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010f  qq", NAN);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 268: Флаг `-` и экспоненциальный вывод
  s21_sprintf(buffer, "Привет, число: %-10.3e", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.3e", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 269: Флаг `-` для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %-10.3e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.3e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  return 0;
}

int s21_sprintf(char *str, const char *format, ...) {
  va_list factor;
  va_start(factor, format);
  int i = 0, l = 0;
  flags f;
  while (format[i] != '\0') {
    if (format[i] != '%') {
      str[l++] = format[i++];
      continue;
    }
    initialize_flags(&f);
    i++;
    parse_flags(format, &i, &f);
    parse_width(format, &i, &f, factor);
    parse_precision(format, &i, &f, factor);
    parse_length(format, &i, &f);
    handle_specifier(format, &i, factor, str, &l, &f);
  }
  str[l] = '\0';
  va_end(factor);
  return l;
}

void initialize_flags(flags *f) {
  f->minus = 0;
  f->plus = 0;
  f->space = 0;
  f->sharp = 0;
  f->zero = 0;
  f->width = 0;
  f->precision = -100;
  f->short_ = 0;
  f->long_ = 0;
  f->longlong_ = 0;
}

void parse_flags(const char *format, int *i, flags *f) {
  while (strchr(("-+ #0"), format[*i])) {
    switch (format[*i]) {
      case '-':
        f->minus = 1;
        break;
      case '+':
        f->plus = 1;
        break;
      case ' ':
        f->space = 1;
        break;
      case '#':
        f->sharp = 1;
        break;
      case '0':
        f->zero = 1;
        break;
    }
    (*i)++;
  }
}

void parse_width(const char *format, int *i, flags *f, va_list args) {
  if (format[*i] == '*') {
    f->width = va_arg(args, int);
    (*i)++;
  } else {
    while (isdigit(format[*i])) {
      f->width = f->width * 10 + (format[*i] - '0');
      (*i)++;
    }
  }
}

void parse_precision(const char *format, int *i, flags *f, va_list args) {
  if (format[*i] == '.') {
    (*i)++;
    if (format[*i] == '*') {
      f->precision = va_arg(args, int);
      (*i)++;
    } else {
      f->precision = 0;
      while (isdigit(format[*i])) {
        f->precision = f->precision * 10 + (format[*i] - '0');
        (*i)++;
      }
    }
  }
}

void parse_length(const char *format, int *i, flags *f) {
  if (format[*i] == 'h') {
    f->short_ = 1;
    (*i)++;
  } else if (format[*i] == 'l') {
    f->long_ = 1;
    (*i)++;
  } else if (format[*i] == 'L') {
    f->longlong_ = 1;
    (*i)++;
  }
}

void handle_specifier(const char *format, int *i, va_list factor, char *str,
                      int *l, flags *f) {
  if (format[*i] == 'c') {
    handle_char(factor, str, l, f);
  } else if (format[*i] == 's') {
    handle_string(factor, str, l, f);
  } else if (format[*i] == 'd') {
    handle_int(factor, str, l, f);
  } else if (format[*i] == 'u') {
    handle_unsigned(factor, str, l, f);
  } else if (format[*i] == '%') {
    str[(*l)++] = '%';
  } else if (format[*i] == 'f' || format[*i] == 'F') {
    handle_float(factor, str, l, f, format[*i] == 'F');
  } else if (format[*i] == 'g' || format[*i] == 'G') {
    handle_general(factor, str, l, f, format[*i] == 'G');
  } else if (format[*i] == 'x' || format[*i] == 'X') {
    handle_hex(factor, str, l, f, format[*i] == 'X');
  } else if (format[*i] == 'e' || format[*i] == 'E') {
    handle_e(factor, str, l, f, format[*i] == 'E');
  } else if (format[*i] == 'o') {
    handle_o(factor, str, l, f);
  } else if (format[*i] == 'p') {
    handle_p(factor, str, l, f);
  }
  (*i)++;
}

void handle_char(va_list factor, char *str, int *l, flags *f) {
  char c = (char)va_arg(factor, int);
  int flag_end = 1;
  if (c == '\0') {
    c = ' ';
    flag_end = 0;
  }
  if (f->minus) {
    print_c(str, l, flag_end, c);
    print_space_c(str, f->width, l);
  } else if (f->width > 1) {
    print_space_c(str, f->width, l);
    print_c(str, l, flag_end, c);
  } else {
    print_c(str, l, flag_end, c);
  }
}

void print_space_c(char *str, int count, int *l) {
  for (int i = 1; i < count; i++) {
    str[(*l)++] = ' ';
  }
}

void print_c(char *str, int *l, int flag, char c) {
  if (flag) {
    str[(*l)++] = c;
  } else {
    str[(*l)++] = '\0';
  }
}

void handle_string(va_list factor, char *str, int *l, flags *f) {
  char *s = va_arg(factor, char *);
  int len = strlen(s);
  char new_s[len + 1];
  strcpy(new_s, s);
  int actual_len = len;
  if (f->precision > -1 && f->precision < actual_len) {
    actual_len = f->precision;
  }
  if (f->minus) {
    print_char(str, new_s, actual_len, l);
    print_space(str, f->width - actual_len, l);
  } else {
    print_space(str, f->width - actual_len, l);
    print_char(str, new_s, actual_len, l);
  }
}

void print_char(char *str, char *buff, int width, int *l) {
  for (int i = 0; i < width; i++) {
    str[(*l)++] = buff[i];
  }
}

void pirnt_char_reverse(char *str, char *buff, int width, int *l) {
  for (int i = width - 1; i >= 0; i--) {
    str[(*l)++] = buff[i];
  }
}

void print_space(char *str, int count, int *l) {
  for (int i = 0; i < count; i++) {
    str[(*l)++] = ' ';
  }
}

void get_int_number_and_sign_and_len(va_list factor, flags *f,
                                     long long int *num, int *sign, char *buff,
                                     int *len) {
  if (f->short_) {
    short s_num = (short)va_arg(factor, int);
    *num = s_num;
  } else if (f->long_) {
    *num = va_arg(factor, long int);
  } else if (f->longlong_) {
    *num = va_arg(factor, long long int);
  } else {
    *num = va_arg(factor, int);
  }
  if (signbit(*num)) {
    *sign = -1;
    *num = -(*num);
  } else if (f->plus) {
    *sign = 1;
  } else if (f->space) {
    *sign = 2;
  }
  if (!*num) {
    *sign = 0;
  }
  if (*num == 0) {
    if (f->precision == 0)
      buff[(*len)++] = ' ';
    else
      buff[(*len)++] = '0';
  } else {
    while (*num > 0) {
      buff[(*len)++] = *num % 10 + '0';
      *num /= 10;
    }
  }
}

void get_uns_number(va_list factor, flags *f, long long unsigned *num) {
  if (f->short_) {
    unsigned short s_num = va_arg(factor, int);
    *num = s_num;
  } else if (f->long_) {
    *num = va_arg(factor, unsigned long);
  } else {
    *num = va_arg(factor, unsigned int);
  }
}

void get_uns_number_and_len(va_list factor, flags *f, long long unsigned *num,
                            char *buff, int *len) {
  if (f->short_) {
    unsigned short s_num = va_arg(factor, int);
    *num = s_num;
  } else if (f->long_) {
    *num = va_arg(factor, unsigned long);
  } else {
    *num = va_arg(factor, unsigned int);
  }
  if (*num == 0) {
    if (f->precision == 0)
      buff[(*len)++] = ' ';
    else
      buff[(*len)++] = '0';
  } else {
    while (*num > 0) {
      buff[(*len)++] = *num % 10 + '0';
      *num /= 10;
    }
  }
}

void get_doub_number_and_sign(va_list factor, flags *f, long double *num,
                              int *sign) {
  if (f->longlong_) {
    *num = va_arg(factor, long double);
  } else {
    *num = va_arg(factor, double);
  }
  if (!isinf(*num)) {
    if (signbit(*num)) {
      *sign = -1;
      *num = -(*num);
    } else if (f->plus) {
      *sign = 1;
    } else if (f->space) {
      *sign = 2;
    }
  }
}

void add_sign(int sign, char *str, int *l) {
  if (sign == -1) {
    str[(*l)++] = '-';
  } else if (sign == 1) {
    str[(*l)++] = '+';
  } else if (sign == 2) {
    str[(*l)++] = ' ';
  }
}

void print_zero(char *str, int count, int *l) {
  for (int i = 0; i < count; i++) {
    str[(*l)++] = '0';
  }
}

void calculate_leading_zeros(int *count_zero, flags *f, int len) {
  if (f->precision > 0 && f->precision > len) *count_zero = f->precision - len;
}

void handle_int(va_list factor, char *str, int *l, flags *f) {
  char num_str[50] = {0};
  long long int num = 0;
  int sign = 0;
  int len = 0;
  int count_zero = 0;
  get_int_number_and_sign_and_len(factor, f, &num, &sign, num_str, &len);
  calculate_leading_zeros(&count_zero, f, len);
  if (f->minus) {
    add_sign(sign, str, l);
    print_zero(str, count_zero, l);
    pirnt_char_reverse(str, num_str, len, l);
    print_space(str, f->width - len - (sign != 0) - count_zero, l);
  } else {
    if (f->zero) {
      add_sign(sign, str, l);
      print_zero(str, f->width - len - (sign != 0), l);
      pirnt_char_reverse(str, num_str, len, l);
    } else {
      if (sign == 2) str[(*l)++] = ' ';
      print_space(str, f->width - len - (sign != 0) - count_zero, l);
      if (sign == -1) str[(*l)++] = '-';
      if (sign == 1) str[(*l)++] = '+';
      print_zero(str, count_zero, l);
      pirnt_char_reverse(str, num_str, len, l);
    }
  }
}

void handle_unsigned(va_list factor, char *str, int *l, flags *f) {
  char num_str[50] = {0};
  unsigned long long num = 0;
  int len = 0;
  int count_zero = 0;
  get_uns_number_and_len(factor, f, &num, num_str, &len);
  calculate_leading_zeros(&count_zero, f, len);
  if (f->minus) {
    print_zero(str, count_zero, l);
    pirnt_char_reverse(str, num_str, len, l);
    print_space(str, f->width - len - count_zero, l);
  } else {
    if (f->zero) {
      print_zero(str, f->width - len, l);
      pirnt_char_reverse(str, num_str, len, l);
    } else {
      print_space(str, f->width - len - count_zero, l);
      print_zero(str, count_zero, l);
      pirnt_char_reverse(str, num_str, len, l);
    }
  }
}

void print_nan_inf(long double num, flags *f, char *str, int *l,
                   int uppercase) {
  int len = 3;
  if (isnan(num)) {
    char *nan_str = uppercase ? "NAN" : "nan";
    if (f->minus) {
      print_char(str, nan_str, len, l);
      print_space(str, f->width - len, l);
    } else {
      print_space(str, f->width - len, l);
      print_char(str, nan_str, len, l);
    }
  } else if (isinf(num)) {
    if (num < 0) {
      char *inf_str = uppercase ? "-INF" : "-inf";
      len = 4;
      if (f->minus) {
        print_char(str, inf_str, len, l);
        print_space(str, f->width - len, l);
      } else {
        print_space(str, f->width - len, l);
        print_char(str, inf_str, len, l);
      }
    } else {
      char *inf_str = uppercase ? "INF" : "inf";
      if (f->minus) {
        print_char(str, inf_str, len, l);
        print_space(str, f->width - len, l);
      } else {
        print_space(str, f->width - len, l);
        print_char(str, inf_str, len, l);
      }
    }
  }
}

void print_point(char *str, flags *f, int *l) {
  if (f->precision != 0) {
    str[(*l)++] = '.';
  }
}

int get_len_and_precision_float(flags *f, int *frac_len, int sign,
                                long double *num) {
  int int_part = (int)*num;
  int flag_point = 1;
  int int_len = 0;
  if (f->precision == 0) {
    flag_point = 0;
    int digit = (int)(*num * 10) % 10;
    if (digit > 5) {
      (*num)++;
    }
  }
  if (int_part == 0) {
    int_len = 1;
  } else {
    while (int_part > 0) {
      int_len++;
      int_part /= 10;
    }
  }
  if (f->precision == -100) {
    *frac_len = 6;
  }
  int len = int_len + *frac_len + flag_point + (sign != 0);
  return len;
}

void handle_float(va_list factor, char *str, int *l, flags *f, int uppercase) {
  long double num = 0.0;
  int sign = 0;
  get_doub_number_and_sign(factor, f, &num, &sign);
  if (isnan(num) || isinf(num)) {
    print_nan_inf(num, f, str, l, uppercase);
  } else {
    int frac_len = f->precision;
    int len = get_len_and_precision_float(f, &frac_len, sign, &num);
    if (f->minus) {
      add_sign(sign, str, l);
      print_int_part(str, l, num);
      print_point(str, f, l);
      print_frac_part(str, l, num, frac_len);
      print_space(str, f->width - len, l);
    } else {
      if (f->zero) {
        add_sign(sign, str, l);
        print_zero(str, f->width - len, l);
      } else {
        print_space(str, f->width - len, l);
        add_sign(sign, str, l);
      }
      print_int_part(str, l, num);
      print_point(str, f, l);
      print_frac_part(str, l, num, frac_len);
    }
  }
}

void handle_hex(va_list factor, char *str, int *l, flags *f, int uppercase) {
  unsigned long long int num = 0;
  get_uns_number(factor, f, &num);
  int len = 0;
  unsigned int temp = num;
  if (temp == 0) {
    len = 1;
  } else {
    while (temp) {
      len++;
      temp /= 16;
    }
  }
  int count_zero = 0;
  calculate_leading_zeros(&count_zero, f, len);
  char temp_str[20] = {0};
  int temp_len = 0;
  temp = num;
  if (num == 0) {
    if (f->precision < 1 && f->precision != -100) {
      temp_str[temp_len] = ' ';
    } else {
      temp_str[temp_len++] = '0';
    }
  } else {
    while (temp) {
      int digit = temp % 16;
      if (digit < 10) {
        temp_str[temp_len++] = digit + '0';
      } else {
        temp_str[temp_len++] = uppercase ? 'A' + digit - 10 : 'a' + digit - 10;
      }
      temp /= 16;
    }
  }
  if (f->minus) {
    if (f->sharp) {
      if (num != 0) {
        str[(*l)++] = '0';
        str[(*l)++] = uppercase ? 'X' : 'x';
      } else {
        str[(*l)++] = ' ';
        str[(*l)++] = ' ';
      }
    }
    print_zero(str, count_zero, l);
    pirnt_char_reverse(str, temp_str, temp_len, l);
    print_space(str, f->width - len - (f->sharp ? 2 : 0) - count_zero, l);
  } else {
    if (f->zero) {
      print_zero(str, f->width - len - (f->sharp ? 2 : 0), l);
    } else {
      print_space(str, f->width - len - (f->sharp ? 2 : 0) - count_zero, l);
    }
    if (f->sharp) {
      if (num != 0) {
        str[(*l)++] = '0';
        str[(*l)++] = uppercase ? 'X' : 'x';
      } else {
        str[(*l)++] = ' ';
        str[(*l)++] = ' ';
      }
    }
    print_zero(str, count_zero, l);
    pirnt_char_reverse(str, temp_str, temp_len, l);
  }
}

void handle_o(va_list factor, char *str, int *l, flags *f) {
  long long unsigned int num = 0;
  get_uns_number(factor, f, &num);
  int len = 0;
  unsigned int temp = num;
  if (temp == 0) {
    len = 1;
  } else {
    while (temp) {
      len++;
      temp /= 8;
    }
  }
  int count_zero = 0;
  calculate_leading_zeros(&count_zero, f, len);
  char temp_str[20] = {0};
  int temp_len = 0;
  temp = num;
  if (num == 0) {
    if (f->precision < 1 && f->precision != -100) {
      temp_str[temp_len] = ' ';
    } else {
      temp_str[temp_len++] = '0';
    }
  } else {
    while (temp) {
      int digit = temp % 8;
      temp_str[temp_len++] = digit + '0';
      temp /= 8;
    }
  }
  if (f->minus) {
    if (f->sharp) {
      if (num != 0) {
        str[(*l)++] = '0';
      } else {
        str[(*l)++] = ' ';
      }
    }
    print_zero(str, count_zero, l);
    pirnt_char_reverse(str, temp_str, temp_len, l);
    print_space(str, f->width - len - (f->sharp ? 2 : 0) - count_zero, l);
  } else {
    if (f->zero) {
      print_zero(str, f->width - len - (f->sharp ? 1 : 0), l);
    } else {
      print_space(str, f->width - len - (f->sharp ? 2 : 0) - count_zero, l);
    }
    if (f->sharp) {
      if (num != 0) {
        str[(*l)++] = '0';
      } else {
        str[(*l)++] = ' ';
      }
    }
    print_zero(str, count_zero, l);
    pirnt_char_reverse(str, temp_str, temp_len, l);
  }
}

void handle_p(va_list factor, char *str, int *l, flags *f) {
  void *ptr = va_arg(factor, void *);
  char buffer[20];
  sprintf(buffer, "%p", ptr);
  int len = strlen(buffer);  // ИЗМЕНИТЬ
  if (f->minus) {
    print_char(str, buffer, len, l);
    print_zero(str, f->width - len, l);
  } else {
    if (f->zero) {
      print_zero(str, f->width - len, l);
      print_char(str, buffer, len, l);
    } else {
      print_space(str, f->width - len, l);
      print_char(str, buffer, len, l);
    }
  }
}

void print_int_part(char *str, int *l, long double num) {
  int int_part = (int)num;
  char int_str[50] = {0};
  int len = 0;
  if (int_part == 0) {
    str[(*l)++] = '0';
  } else {
    while (int_part > 0) {
      int_str[len++] = int_part % 10 + '0';
      int_part /= 10;
    }
    pirnt_char_reverse(str, int_str, len, l);
  }
}

void print_frac_part(char *str, int *l, long double num, int frac_len) {
  int int_part = (int)num;
  if (int_part > -1 && frac_len != 0) {
    long double frac = num - (int)num;
    int buff_digit = 0;
    int flag_zero = 1;
    int count_zero = 0;
    for (int i = 0; i < frac_len; i++) {
      frac *= 10;
      int digit = (int)frac;
      if (digit == 0 && flag_zero) {
        count_zero++;
      } else {
        buff_digit = buff_digit * 10 + digit;
        frac -= digit;
        flag_zero = 0;
      }
    }
    print_zero(str, count_zero - flag_zero, l);
    if ((int)(frac * 10) >= 5) {
      buff_digit++;
    }
    char buff_str[20];
    sprintf(buff_str, "%d", buff_digit);
    for (size_t i = 0; i < strlen(buff_str); i++) {  // ЗАМЕНИТЬ НА С21
      str[(*l)++] = buff_str[i];
    }
    int len = (int)strlen(buff_str);
    print_space(str, frac_len - len - count_zero, l);
  }
}

void handle_e(va_list factor, char *str, int *l, flags *f, int uppercase) {
  long double num = 0.0;
  int sign = 0;
  get_doub_number_and_sign(factor, f, &num, &sign);
  if (isnan(num) || isinf(num)) {
    print_nan_inf(num, f, str, l, uppercase);
  } else {
    int precision = (f->precision == -100) ? 6 : f->precision;
    int exponent = 0;
    if (num != 0.0) {
      exponent = floorl(log10l(num));
      num /= powl(10, exponent);
    }
    char num_str[50] = {0};
    snprintf(num_str, sizeof(num_str), "%.*Lf", precision, num);
    int num_len = strlen(num_str);
    int exponent_sign = (exponent >= 0) ? '+' : '-';
    exponent = abs(exponent);
    char exponent_str[20] = {0};
    snprintf(exponent_str, sizeof(exponent_str), "%c%02d", exponent_sign,
             exponent);
    int total_len = num_len + 1 + 2 + (sign != 0);
    int count_space = 0;
    if (f->width > 0 && f->width > total_len)
      count_space = f->width - total_len;
    if (f->minus) {
      add_sign(sign, str, l);
      for (int i = 0; num_str[i] != '\0'; i++) str[(*l)++] = num_str[i];
      str[(*l)++] = (uppercase ? 'E' : 'e');
      for (int i = 0; exponent_str[i] != '\0'; i++)
        str[(*l)++] = exponent_str[i];
      for (int i = 0; i < count_space; i++) str[(*l)++] = ' ';
    } else {
      if (f->zero) {
        add_sign(sign, str, l);
        for (int i = 0; i < count_space - 1; i++) str[(*l)++] = '0';
      } else {
        for (int i = 0; i < count_space; i++) str[(*l)++] = ' ';
        add_sign(sign, str, l);
      }
      for (int i = 0; num_str[i] != '\0'; i++) str[(*l)++] = num_str[i];
      str[(*l)++] = (uppercase ? 'E' : 'e');
      for (int i = 0; exponent_str[i] != '\0'; i++)
        str[(*l)++] = exponent_str[i];
    }
  }
}

void handle_general(va_list factor, char *str, int *l, flags *f,
                    int uppercase) {
  long double num = 0.0;
  int sign = 0;
  get_doub_number_and_sign(factor, f, &num, &sign);
  int flag_inf_nan = 1;
  if (isnan(num)) {
    const char *nan_str = uppercase ? "NAN" : "nan";
    flag_inf_nan = 0;
    int len = 3;
    if (f->minus) {
      for (int i = 0; i < len; i++) {
        str[(*l)++] = nan_str[i];
      }
      for (int i = 0; i < f->width - len; i++) {
        str[(*l)++] = ' ';
      }
    } else {
      for (int i = 0; i < f->width - len; i++) {
        str[(*l)++] = ' ';
      }
      for (int i = 0; i < len; i++) {
        str[(*l)++] = nan_str[i];
      }
    }
  } else if (isinf(num)) {
    const char *inf_str;
    flag_inf_nan = 0;
    if (num < 0) {
      inf_str = uppercase ? "-INF" : "-inf";
      int len = 4;
      if (f->minus) {
        for (int i = 0; i < len; i++) {
          str[(*l)++] = inf_str[i];
        }
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
      } else {
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
        for (int i = 0; i < len; i++) {
          str[(*l)++] = inf_str[i];
        }
      }
    } else {
      int len = 3;
      inf_str = uppercase ? "INF" : "inf";
      if (f->minus) {
        for (int i = 0; i < len; i++) {
          str[(*l)++] = inf_str[i];
        }
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
      } else {
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
        for (int i = 0; i < len; i++) {
          str[(*l)++] = inf_str[i];
        }
      }
    }
  }
  int flag_num = 0;
  if (num < 0) {
    num = -num;
    flag_num = 1;
  }
  int exp_x = 0;
  long double temp_num = num;
  if (temp_num != 0.0) {
    exp_x = floorl(log10l(temp_num));
    temp_num /= powl(10, exp_x);
  }
  if (flag_num) {
    num = -num;
  }
  int precision = (f->precision == -100) ? 6 : f->precision;
  if (flag_inf_nan) {
    if (exp_x >= -4 && exp_x < precision) {
      int int_len = 0;
      int int_part = (int)num;
      int flag_point = 1;
      if (f->precision == 0) {
        flag_point = 0;
        int digit = (int)(num * 10) % 10;
        if (digit > 5) {
          num++;
        }
      }
      if (int_part == 0) {
        int_len = 1;
      } else {
        while (int_part > 0) {
          int_len++;
          int_part /= 10;
        }
      }
      int frac_len;
      if (num < 10) {
        frac_len = f->precision + 3;
        if (f->precision == -100) {
          frac_len = 8;
        }
      } else {
        frac_len = f->precision - 5;
        if (f->precision == -100) {
          frac_len = 1;
        }
      }
      int len = int_len + frac_len + flag_point + (sign != 0);
      if (flag_inf_nan) {
        if (f->minus) {
          add_sign(sign, str, l);
          print_int_part(str, l, num);
          if ((f->precision != 0 && num < 1) || (num > 10 && precision != 5)) {
            str[(*l)++] = '.';
          }
          print_frac_part(str, l, num, frac_len);
          for (int i = 0; i < f->width - len; i++) {
            str[(*l)++] = ' ';
          }
        } else {
          if (f->zero) {
            add_sign(sign, str, l);
            for (int i = 0; i < f->width - len; i++) {
              str[(*l)++] = '0';
            }
          } else {
            for (int i = 0; i < f->width - len; i++) {
              str[(*l)++] = ' ';
            }
            add_sign(sign, str, l);
          }
          print_int_part(str, l, num);
          if ((f->precision != 0 && num < 1) || (num > 10 && precision != 5)) {
            str[(*l)++] = '.';
          }
          print_frac_part(str, l, num, frac_len);
        }
      } else {
        if (f->zero) {
          add_sign(sign, str, l);
          for (int i = 0; i < f->width - len; i++) {
            str[(*l)++] = '0';
          }
        } else {
          for (int i = 0; i < f->width - len; i++) {
            str[(*l)++] = ' ';
          }
          add_sign(sign, str, l);
        }
        print_int_part(str, l, num);
        if ((f->precision != 0 && num < 1) || (num > 10 && precision != 5)) {
          str[(*l)++] = '.';
        }
        print_frac_part(str, l, num, frac_len);
      }
    } else {
      int sign = 0;  //  в теории можно удалить вызвал функцию в самом начале
      if (signbit(num)) {
        sign = -1;
        num = -num;
      } else if (f->plus) {
        sign = 1;
      } else if (f->space) {
        sign = 2;
      }  // установил сигн еще так, он вроде как не меняется
      int precision = (f->precision == -100) ? 5 : f->precision - 1;
      int exponent = 0;
      if (num != 0.0) {
        exponent = floorl(log10l(num));
        num /= powl(10, exponent);
      }
      char num_str[50] = {0};
      snprintf(num_str, sizeof(num_str), "%.*Lf", precision, num);
      int num_len = strlen(num_str);
      int exponent_sign = (exponent >= 0) ? '+' : '-';
      exponent = abs(exponent);
      char exponent_str[20] = {0};
      snprintf(exponent_str, sizeof(exponent_str), "%c%02d", exponent_sign,
               exponent);
      int total_len = num_len + 1 + 2 + (sign != 0);
      int count_space = 0;
      int qqq_flag = 1;
      if (f->zero || f->minus) {
        qqq_flag = 0;
      }
      if (f->width > 0 && f->width > total_len)
        count_space = f->width - total_len - qqq_flag;
      if (flag_inf_nan) {
        if (f->minus) {
          add_sign(sign, str, l);
          for (int i = 0; num_str[i] != '\0'; i++) str[(*l)++] = num_str[i];
          str[(*l)++] = (uppercase ? 'E' : 'e');
          for (int i = 0; exponent_str[i] != '\0'; i++)
            str[(*l)++] = exponent_str[i];
          for (int i = 0; i < count_space; i++) str[(*l)++] = ' ';
        } else {
          if (f->zero) {
            add_sign(sign, str, l);
            for (int i = 0; i < count_space - 1; i++) str[(*l)++] = '0';
          } else {
            for (int i = 0; i < count_space; i++) str[(*l)++] = ' ';
            add_sign(sign, str, l);
          }
          for (int i = 0; num_str[i] != '\0'; i++) str[(*l)++] = num_str[i];
          str[(*l)++] = (uppercase ? 'E' : 'e');
          for (int i = 0; exponent_str[i] != '\0'; i++)
            str[(*l)++] = exponent_str[i];
        }
      }
    }
  }
}