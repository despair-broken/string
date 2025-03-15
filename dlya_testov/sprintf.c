#include "sprintf.h"

int main() {
  char buffer[10000] = {0};
  char std_buffer[1000] = {0};
  int test_num = 1;

  int flag_huesos = 0;

  // // Тест 3: Вывод указателя с шириной и выравниванием по левому краю
  // s21_sprintf(buffer, "Привет, указатель: %-20p", &x);
  // snprintf(std_buffer, sizeof(std_buffer), "Привет, указатель: %-20p", &x);
  // if (strcmp(buffer, std_buffer) == 0) {
  //   printf("ACCESS: Тест %d пройден успешно\n", test_num);
  // } else {
  //   printf("**FAIL: Тест %d не пройден\n", test_num);
  //   printf("********Ваш вывод: %s\n", buffer);
  //   printf("Стандартный вывод: %s\n", std_buffer);
  // }
  // test_num++;

  // // Указатель с шириной и флагом -      НЕ ПРОХОДИТ
  // s21_sprintf(buffer, "Pointer with width and minus: %-20p", (void *)ptr);
  // snprintf(std_buffer, sizeof(std_buffer),
  //          "Pointer with width and minus: %-20p", (void *)ptr);
  // if (strcmp(buffer, std_buffer) == 0) {
  //   printf("ACCESS: Тест %d пройден успешно\n", test_num);
  // } else {
  //   printf("**FAIL: Тест %d не пройден\n", test_num);
  //   printf("********Ваш вывод: %s\n", buffer);
  //   printf("Стандартный вывод: %s\n", std_buffer);
  // }
  // test_num++;

  // // Тест 6: Вывод указателя с шириной для большого указателя НЕ ПРОХОДИТ
  // void *ptr_y = (void *)0x1234567890abcdef;
  // s21_sprintf(buffer, "Привет, указатель: %20p", ptr_y);
  // snprintf(std_buffer, sizeof(std_buffer), "Привет, указатель: %20p", ptr_y);
  // if (strcmp(buffer, std_buffer) == 0) {
  //   printf("ACCESS: Тест %d пройден успешно\n", test_num);
  // } else {
  //   printf("**FAIL: Тест %d не пройден\n", test_num);
  //   printf("********Ваш вывод: %s\n", buffer);
  //   printf("Стандартный вывод: %s\n", std_buffer);
  // }
  // test_num++;
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

  int www = 42;
  int *ptr = &www;

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

  // Указатель без флагов
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
    printf("ACCESS: Тест %d пройден успешно \n", test_num);
  } else {
    printf("**FAIL: Тест%dнепройден \n", test_num);
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

  // Тест 269: Флаг `-` для отрицательного экспоненциального вывода
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
  s21_sprintf(buffer, "Привет, число:%-10f ", INFINITY);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число:%-10f ", INFINITY);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно \n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден \n", test_num);
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

  // Тест 269: Флаг `-` для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 269: Флаг `-` для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %10e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 269: Флаг `-` для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %10.3e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %10.3e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 269: Флаг `-` для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %+10.3e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.3e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 269: Флаг `-` для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: % 10.3e", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.3e", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 269: Флаг `-` для отрицательного экспоненциального вывода
  s21_sprintf(buffer, "Привет, число: %-10.3E", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.3E", 123.456);
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

  // Тест 1: Базовый вывод шестнадцатеричного числа
  s21_sprintf(buffer, "Привет, число: %x", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %x", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 2: Базовый вывод шестнадцатеричного числа с большой буквой
  s21_sprintf(buffer, "Привет, число: %X", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %X", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 3: Вывод с шириной и выравниванием по левому краю
  s21_sprintf(buffer, "Привет, число: %-10x", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10x", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 4: Вывод с шириной и заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010x", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010x", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 5: Вывод с шириной и выравниванием по левому краю для %X
  s21_sprintf(buffer, "Привет, число: %-10X", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10X", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 6: Вывод с шириной и заполнением нулями для %X
  s21_sprintf(buffer, "Привет, число: %010X", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010X", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 7: Вывод нулевого числа
  s21_sprintf(buffer, "Привет, число: %x", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %x", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 8: Вывод нулевого числа с шириной и заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010x", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010x", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 13: Вывод с шириной и заполнением нулями для отрицательного числа
  s21_sprintf(buffer, "Привет, число: %010x", -123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010x", -123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 14: Вывод с шириной и заполнением нулями для отрицательного числа с %X
  s21_sprintf(buffer, "Привет, число: %010X", -123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010X", -123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 1: Базовый вывод восьмеричного числа
  s21_sprintf(buffer, "Привет, число: %o", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %o", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 2: Вывод восьмеричного числа с шириной и выравниванием по левому краю
  s21_sprintf(buffer, "Привет, число: %-10o", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10o", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 3: Вывод восьмеричного числа с шириной и заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010o", 123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010o", 123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 4: Вывод нулевого числа
  s21_sprintf(buffer, "Привет, число: %o", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %o", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 5: Вывод нулевого числа с шириной и заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010o", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010o", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 6: Вывод отрицательного числа (должно быть преобразовано в
  // положительное)
  s21_sprintf(buffer, "Привет, число: %o", -123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %o", -123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 7: Вывод отрицательного числа с шириной и заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010o", -123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010o", -123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 11: Вывод с шириной и выравниванием по левому краю для отрицательного
  // числа
  s21_sprintf(buffer, "Привет, число: %-10o", -123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10o", -123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с
  // выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %010o", -123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010o", -123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 13: Вывод с шириной и выравниванием по левому краю для нулевого числа
  s21_sprintf(buffer, "Привет, число: %-10o", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10o", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 14: Вывод с шириной и заполнением нулями для нулевого числа
  s21_sprintf(buffer, "Привет, число: %010o", 0);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010o", 0);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 17: Вывод с шириной и заполнением нулями для отрицательного числа с
  // выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %010o", -123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010o", -123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 18: Вывод с шириной и выравниванием по левому краю для отрицательного
  // числа
  s21_sprintf(buffer, "Привет, число: %-10o", -123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10o", -123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 19: Вывод с шириной и заполнением нулями для большого числа
  s21_sprintf(buffer, "Привет, число: %010o", 123456789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010o", 123456789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 1: Базовый вывод указателя
  int x = 123;
  s21_sprintf(buffer, "Привет, указатель: %p", &x);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, указатель: %p", &x);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 2: Вывод нулевого указателя
  s21_sprintf(buffer, "Привет, указатель: %p", NULL);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, указатель: %p", NULL);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 4: Вывод указателя с шириной
  s21_sprintf(buffer, "Привет, указатель: %20p", &x);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, указатель: %20p", &x);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 5: Вывод нулевого указателя с шириной
  s21_sprintf(buffer, "Привет, указатель: %20p", NULL);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, указатель: %20p", NULL);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 1: Базовый вывод в научной записи
  double qwq = 123.456;
  s21_sprintf(buffer, "Привет, число: %e", qwq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", qwq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 2: Базовый вывод в научной записи с большой буквой
  s21_sprintf(buffer, "Привет, число: %E", qwq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %E", qwq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 3: Вывод с шириной и выравниванием по левому краю
  s21_sprintf(buffer, "Привет, число: %-10.3e", qwq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.3e", qwq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 4: Вывод с шириной и заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010.3e", qwq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3e", qwq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 5: Вывод с шириной и выравниванием по левому краю для %E
  s21_sprintf(buffer, "Привет, число: %-10.3E", qwq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.3E", qwq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 6: Вывод с шириной и заполнением нулями для %E
  s21_sprintf(buffer, "Привет, число: %010.3E", qwq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3E", qwq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 7: Вывод нулевого числа
  double y = 0.0;
  s21_sprintf(buffer, "Привет, число: %e", y);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", y);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 8: Вывод нулевого числа с шириной и заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010.3e", y);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3e", y);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 9: Вывод отрицательного числа
  double z = -123.456;
  s21_sprintf(buffer, "Привет, число: %e", z);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", z);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 10: Вывод отрицательного числа с шириной и заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010.3e", z);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3e", z);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 1: Базовый вывод в научной записи
  double qqqq = 123.456;
  s21_sprintf(buffer, "Привет, число: %e", qqqq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", qqqq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 2: Базовый вывод в научной записи с большой буквой
  s21_sprintf(buffer, "Привет, число: %E", qqqq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %E", qqqq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 3: Вывод с шириной и выравниванием по левому краю
  s21_sprintf(buffer, "Привет, число: %-10.3e", qqqq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.3e", qqqq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 4: Вывод с шириной и заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010.3e", qqqq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3e", qqqq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 5: Вывод с шириной и выравниванием по левому краю для %E
  s21_sprintf(buffer, "Привет, число: %-10.3E", qqqq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.3E", qqqq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 6: Вывод с шириной и заполнением нулями для %E
  s21_sprintf(buffer, "Привет, число: %010.3E", qqqq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3E", qqqq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 7: Вывод нулевого числа
  double wwew = 0.0;
  s21_sprintf(buffer, "Привет, число: %e", wwew);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", wwew);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 8: Вывод нулевого числа с шириной и заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010.3e", wwew);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3e", wwew);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 9: Вывод отрицательного числа
  double wwew2 = -123.456;
  s21_sprintf(buffer, "Привет, число: %e", wwew2);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", wwew2);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 10: Вывод отрицательного числа с шириной и заполнением нулями
  s21_sprintf(buffer, "Привет, число: %010.3e", wwew2);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3e", wwew2);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 11: Вывод с шириной и выравниванием по левому краю для отрицательного
  // числа
  s21_sprintf(buffer, "Привет, число: %-10.3e", wwew2);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.3e", wwew2);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с %E
  s21_sprintf(buffer, "Привет, число: %010.3E", wwew2);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3E", wwew2);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 13: Вывод с шириной и выравниванием по левому краю для нулевого числа
  s21_sprintf(buffer, "Привет, число: %-10.3e", wwew);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.3e", wwew);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 14: Вывод с шириной и заполнением нулями для нулевого числа с %E
  s21_sprintf(buffer, "Привет, число: %010.3E", wwew);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.3E", wwew);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 15: Вывод с большой точностью
  s21_sprintf(buffer, "Привет, число: %e", qqqq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %e", qqqq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 16: Вывод с большой точностью и шириной
  s21_sprintf(buffer, "Привет, число: %010.10e", qqqq);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.10e", qqqq);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 214: Восьмеричный вывод с модификатором `l`
  s21_sprintf(buffer, "Octal with long: %lo", LONG_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Octal with long: %lo", LONG_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 215: Шестнадцатеричный вывод с модификатором `l` и заглавными
  s21_sprintf(buffer, "Hex with long: %lX", LONG_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Hex with long: %lX", LONG_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 216: Шестнадцатеричный вывод с модификатором `l`
  s21_sprintf(buffer, "Hex with long: %lx", LONG_MAX);
  snprintf(std_buffer, sizeof(std_buffer), "Hex with long: %lx", LONG_MAX);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с %E
  s21_sprintf(buffer, "Привет, число: %g", 0.00000123456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %g", 0.00000123456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с %E
  s21_sprintf(buffer, "Привет, число: %g", 1234563.8);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %g", 1234563.8);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с %E
  s21_sprintf(buffer, "Привет, число: %0g", 0.00000123456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %0g", 0.00000123456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с %E
  s21_sprintf(buffer, "Привет, число: %+g", 1234563.8);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+g", 1234563.8);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с %E
  s21_sprintf(buffer, "Привет, число: %-g", 0.00000123456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-g", 0.00000123456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с %E
  s21_sprintf(buffer, "Привет, число: %-g", 1234563.8);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-g", 1234563.8);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с %E
  s21_sprintf(buffer, "Привет, число: % g", 0.00000123456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % g", 0.00000123456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с %E
  s21_sprintf(buffer, "Привет, число: % g", 1234563.8);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % g", 1234563.8);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с %E
  s21_sprintf(buffer, "Привет, число: % 12g", 0.00000123456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 12g",
           0.00000123456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с %E
  s21_sprintf(buffer, "Привет, число: % 12g", 1234563.8);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 12g", 1234563.8);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 12: Вывод с шириной и заполнением нулями для отрицательного числа с %E
  s21_sprintf(buffer, "Привет, число: % 12.5g", 12333333.8);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 12.5g",
           12333333.8);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 217: Флаг '-' со статической шириной (g)
  s21_sprintf(buffer, "Привет, число: %-10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 217: Флаг '-' с положительным g
  s21_sprintf(buffer, "Привет, число: %-10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 218: Флаг '-' с отрицательным g
  s21_sprintf(buffer, "Привет, число: %-10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 219: Флаг '-' с положительным G
  s21_sprintf(buffer, "Привет, число: %-10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 220: Флаг '-' с отрицательным G
  s21_sprintf(buffer, "Привет, число: %-10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 221: Флаг ' ' с отрицательным g
  s21_sprintf(buffer, "Привет, число: % 10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 222: Флаг ' ' с положительным G
  s21_sprintf(buffer, "Привет, число: % 10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 223: Флаг ' ' с отрицательным G
  s21_sprintf(buffer, "Привет, число: % 10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 224: Флаг '#' с положительным g
  s21_sprintf(buffer, "Привет, число: %#10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 225: Флаг '#' с отрицательным g
  s21_sprintf(buffer, "Привет, число: %#10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 226: Флаг '#' с положительным G
  s21_sprintf(buffer, "Привет, число: %#10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 227: Флаг '#' с отрицательным G
  s21_sprintf(buffer, "Привет, число: %#10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 228: Динамическая ширина/точность g
  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 229: Динамическая ширина с отрицательным g
  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 230: Динамическая ширина с положительным G
  s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 231: Динамическая ширина с отрицательным G
  s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 232: '-' с динамической шириной (g)
  s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 233: '-' с динамической шириной (отрицательное g)
  s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 234: '+' с динамической шириной (G)
  s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 235: '+' с динамической шириной (отрицательное G)
  s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 236: '#' с динамической шириной (g)
  s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 237: '#' с динамической шириной (отрицательное g)
  s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 238: ' ' с динамической шириной (g)
  s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 239: ' ' с динамической шириной (отрицательное g)
  s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 240: ' ' с динамической шириной (G)
  s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 241: '+' с статической шириной (g)
  s21_sprintf(buffer, "Привет, число: %+10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 242: '+' с стат
  // Тест 242: '+' с статической шириной (G)
  s21_sprintf(buffer, "Привет, число: %+10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 243: '+' с статической шириной (отрицательное g)
  s21_sprintf(buffer, "Привет, число: %+10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 244: '+' с статической шириной (отрицательное G)
  s21_sprintf(buffer, "Привет, число: %+10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 245: ' ' с статической шириной (g)
  s21_sprintf(buffer, "Привет, число: % 10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 246: ' ' с статической шириной (отрицательное g)
  s21_sprintf(buffer, "Привет, число: % 10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 247: '0' с статической шириной (g)
  s21_sprintf(buffer, "Привет, число: %010.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 248: '0' с статической шириной (отрицательное g)
  s21_sprintf(buffer, "Привет, число: %010.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 249: '0' с статической шириной (G)
  s21_sprintf(buffer, "Привет, число: %010.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 250: '0' с статической шириной (отрицательное G)
  s21_sprintf(buffer, "Привет, число: %010.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 251: '+', 10.5, g, 0.00012345
  s21_sprintf(buffer, "Привет, число: %+10.5g", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5g",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 315: ' ', 10.5g, 0.00012345
  s21_sprintf(buffer, "Привет, число: % 10.5g", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5g",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 316: '0', 10.5g, 0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5g", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5g",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 317: '0', 10.5G, 0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5G", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5G",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 318: '0', 10.5G, -0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5G", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5G",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 319: '0', 10.5g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 320: '+', 10.5e, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+10.5e", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5e",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 321: '+', 10.5G, -12345678.9
  s21_sprintf(buffer, "Привет, число: %+10.5G", -12345678.9);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           -12345678.9);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 322: 12.2, G, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12.2G", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2G",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 323: '0', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %012.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 324: '-', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %-12.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 325: '+', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+12.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 326: 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 327: 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %12.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 328: '-', 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %-12.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 329: '+', 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %+12.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 330: '0', 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %012.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 331: 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 332: '-', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %-12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 333: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %+12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 334: '0', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %012.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 335: 12.2, G, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %12.2G", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2G",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 336: 12g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 337: +12g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+12g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 338: -12g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %-12g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 339: 012g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %012g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 340: 12.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 341: +12.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+12.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 342: -12.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %-12.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 343: 012.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %012.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 344: +10.5G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %+10.5G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 345: +10.5G, -0.0
  s21_sprintf(buffer, "Привет, число: %+10.5G", -0.000000000);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           -0.000000000);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 346: -10.5g, 123.456
  s21_sprintf(buffer, "Привет, число: %-10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 347: -10.5g, -123.456
  s21_sprintf(buffer, "Привет, число: %-10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 348: -10.5G, 123.456
  s21_sprintf(buffer, "Привет, число: %-10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 349: -10.5G, -123.456
  s21_sprintf(buffer, "Привет, число: %-10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 350: ' ', 10.5g, -123.456
  s21_sprintf(buffer, "Привет, число: % 10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 351: ' ', 10.5G, 123.456
  s21_sprintf(buffer, "Привет, число: % 10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 352: ' ', 10.5G, -123.456
  s21_sprintf(buffer, "Привет, число: % 10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 353: #, 10.5g, 123.456
  s21_sprintf(buffer, "Привет, число: %#10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 354: #, 10.5g, -123.456
  s21_sprintf(buffer, "Привет, число: %#10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 355: #, 10.5G, 123.456
  s21_sprintf(buffer, "Привет, число: %#10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 356: #, 10.5G, -123.456
  s21_sprintf(buffer, "Привет, число: %#10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 357: *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 358: *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 359: *, *, G, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 360: *, *, G, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 361: -, *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 362: -, *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 363: -, *, *, G, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 364: -, *, *, G, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 365: +, *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 366: +, *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 367: +, *, *, G, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 368: +, *, *, G, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 369: #, *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 370: ' ', *, *, G, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 371: #, *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 372: ' ', *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 373: ' ', *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 374: ' ', *, *, G, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 375: +, 10.5g, 0.00012345
  s21_sprintf(buffer, "Привет, число: %+10.5g", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5g",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 376: +, 10.5G, 0.00012345
  s21_sprintf(buffer, "Привет, число: %+10.5G", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 377: ' ', 10.5g, 0.00012345
  s21_sprintf(buffer, "Привет, число: % 10.5g", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5g",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 378: '0', 10.5g, 0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5g", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5g",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 379: '0', 10.5G, 0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5G", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5G",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 380: '0', 10.5G, -0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5G", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5G",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 381: '0', 10.5g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 382: '+', 10.5e, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+10.5e", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5e",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 383: '+', 10.5G, -12345678.9
  s21_sprintf(buffer, "Привет, число: %+10.5G", -12345678.9);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           -12345678.9);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 384: 12.2, G, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12.2G", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2G",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 385: '0', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %012.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 386: '-', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %-12.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 387: '+', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+12.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 388: 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 389: 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %12.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 390: '-', 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %-12.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 391: '+', 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %+12.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 392: '0', 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %012.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 393: 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 394: '-', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %-12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 395: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %+12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 396: '0', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %012.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 397: 12.2, G, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %12.2G", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2G",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 398: 12g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 399: +12g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+12g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 400: -12g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %-12g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 401: 012g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %012g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 402: 12.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 403: +12.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+12.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 404: -12.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %-12.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 405: 012.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %012.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 406: +10.5G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %+10.5G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 407: +10.5G, -0.0
  s21_sprintf(buffer, "Привет, число: %+10.5G", -0.000000000);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           -0.000000000);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 408: -10.5g, 123.456
  s21_sprintf(buffer, "Привет, число: %-10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 409: -10.5g, -123.456
  s21_sprintf(buffer, "Привет, число: %-10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 410: -10.5G, 123.456
  s21_sprintf(buffer, "Привет, число: %-10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 411: -10.5G, -123.456
  s21_sprintf(buffer, "Привет, число: %-10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 412: ' ', 10.5g, -123.456
  s21_sprintf(buffer, "Привет, число: % 10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 413: ' ', 10.5G, 123.456
  s21_sprintf(buffer, "Привет, число: % 10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 414: ' ', 10.5G, -123.456
  s21_sprintf(buffer, "Привет, число: % 10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 415: #, 10.5g, 123.456
  s21_sprintf(buffer, "Привет, число: %#10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 416: #, 10.5g, -123.456
  s21_sprintf(buffer, "Привет, число: %#10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 417: #, 10.5G, 123.456
  s21_sprintf(buffer, "Привет, число: %#10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 418: #, 10.5G, -123.456
  s21_sprintf(buffer, "Привет, число: %#10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 419: *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 420: *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 421: *, *, G, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 422: *, *, G, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 423: -, *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 424: -, *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 425: -, *, *, G, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 426: -, *, *, G, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 427: +, *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 428: +, *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 429: +, *, *, G, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 430: +, *, *, G, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 431: #, *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 432: ' ', *, *, G, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 433: #, *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 434: ' ', *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 435: ' ', *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 436: ' ', *, *, G, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 437: +, 10.5g, 0.00012345
  s21_sprintf(buffer, "Привет, число: %+10.5g", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5g",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 438: +, 10.5G, 0.00012345
  s21_sprintf(buffer, "Привет, число: %+10.5G", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 439: ' ', 10.5g, 0.00012345
  s21_sprintf(buffer, "Привет, число: % 10.5g", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5g",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 440: '0', 10.5g, 0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5g", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5g",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 441: '0', 10.5G, 0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5G", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5G",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 442: '0', 10.5G, -0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5G", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5G",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 443: '0', 10.5g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 444: '+', 10.5e, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+10.5e", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5e",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 445: '+', 10.5G, -12345678.9
  s21_sprintf(buffer, "Привет, число: %+10.5G", -12345678.9);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           -12345678.9);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 446: 12.2, G, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12.2G", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2G",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 447: '0', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %012.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 448: '-', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %-12.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 449: '+', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+12.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 450: 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 451: 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %12.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 452: '-', 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %-12.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 453: '+', 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %+12.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 454: '0', 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %012.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 455: 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 456: '-', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %-12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 457: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %+12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 458: '0', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %012.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 459: 12.2, G, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %12.2G", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2G",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 460: 12g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 461: +12g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+12g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 462: -12g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %-12g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 463: 012g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %012g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 464: 12.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 465: +12.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+12.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 466: -12.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %-12.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 467: 012.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %012.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 468: +10.5G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %+10.5G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 469: +10.5G, -0.0
  s21_sprintf(buffer, "Привет, число: %+10.5G", -0.000000000);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           -0.000000000);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 470: -10.5g, 123.456
  s21_sprintf(buffer, "Привет, число: %-10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 471: -10.5g, -123.456
  s21_sprintf(buffer, "Привет, число: %-10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 472: -10.5G, 123.456
  s21_sprintf(buffer, "Привет, число: %-10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 473: -10.5G, -123.456
  s21_sprintf(buffer, "Привет, число: %-10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 474: ' ', 10.5g, -123.456
  s21_sprintf(buffer, "Привет, число: % 10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 475: ' ', 10.5G, 123.456
  s21_sprintf(buffer, "Привет, число: % 10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 476: ' ', 10.5G, -123.456
  s21_sprintf(buffer, "Привет, число: % 10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 477: #, 10.5g, 123.456
  s21_sprintf(buffer, "Привет, число: %#10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 478: #, 10.5g, -123.456
  s21_sprintf(buffer, "Привет, число: %#10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 479: #, 10.5G, 123.456
  s21_sprintf(buffer, "Привет, число: %#10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 480: #, 10.5G, -123.456
  s21_sprintf(buffer, "Привет, число: %#10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 481: *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 482: *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 484: '+', 10.5g, 0.00012345
  s21_sprintf(buffer, "Привет, число: %+10.5g", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5g",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 485: '+', 10.5G, 0.00012345
  s21_sprintf(buffer, "Привет, число: %+10.5G", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 486: ' ', 10.5g, 0.00012345
  s21_sprintf(buffer, "Привет, число: % 10.5g", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5g",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 487: '0', 10.5g, 0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5g", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5g",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 488: '0', 10.5G, 0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5G", 0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5G",
           0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 489: '0', 10.5G, -0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5G", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5G",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 490: '0', 10.5g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %010.5g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %010.5g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 491: '+', 10.5e, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+10.5e", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5e",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 492: '+', 10.5G, -12345678.9
  s21_sprintf(buffer, "Привет, число: %+10.5G", -12345678.9);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           -12345678.9);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 493: 12.2, G, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12.2G", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2G",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 494: '0', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %012.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 495: '-', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %-12.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 496: '+', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+12.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 497: 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12.2g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 498: 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %12.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 499: '-', 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %-12.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 500: '+', 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %+12.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 501: '0', 12.2, G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %012.2G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.2G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 502: 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 507: 12g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 508: +12g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+12g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 509: -12g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %-12g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 510: 012g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %012g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012g", -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 511: 12.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %12.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 512: +12.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %+12.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 513: -12.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %-12.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 514: 012.4g, -0.00012345
  s21_sprintf(buffer, "Привет, число: %012.4g", -0.00012345);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.4g",
           -0.00012345);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 515: +10.5G, -12345.6789
  s21_sprintf(buffer, "Привет, число: %+10.5G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 516: +10.5G, -0.0
  s21_sprintf(buffer, "Привет, число: %+10.5G", -0.000000000);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5G",
           -0.000000000);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 517: -10.5g, 123.456
  s21_sprintf(buffer, "Привет, число: %-10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 518: -10.5g, -123.456
  s21_sprintf(buffer, "Привет, число: %-10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 519: -10.5G, 123.456
  s21_sprintf(buffer, "Привет, число: %-10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 520: -10.5G, -123.456
  s21_sprintf(buffer, "Привет, число: %-10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 521: ' ', 10.5g, -123.456
  s21_sprintf(buffer, "Привет, число: % 10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 522: ' ', 10.5G, 123.456
  s21_sprintf(buffer, "Привет, число: % 10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 523: ' ', 10.5G, -123.456
  s21_sprintf(buffer, "Привет, число: % 10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 524: #, 10.5g, 123.456
  s21_sprintf(buffer, "Привет, число: %#10.5g", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5g", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 525: #, 10.5g, -123.456
  s21_sprintf(buffer, "Привет, число: %#10.5g", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5g", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 526: #, 10.5G, 123.456
  s21_sprintf(buffer, "Привет, число: %#10.5G", 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5G", 123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 527: #, 10.5G, -123.456
  s21_sprintf(buffer, "Привет, число: %#10.5G", -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#10.5G", -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 528: *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 529: *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 530: *, *, G, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 531: *, *, G, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %*.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 532: -, *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 533: -, *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 534: -, *, *, G, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 535: -, *, *, G, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-*.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 536: +, *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 537: +, *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 538: +, *, *, G, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 539: +, *, *, G, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+*.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 540: #, *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#*.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 541: ' ', *, *, G, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*G", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 542: #, *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %#*.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 543: ' ', *, *, g, 20, 5, 123.456
  s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, 123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*g", 20, 5,
           123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 544: ' ', *, *, g, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*g", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 545: ' ', *, *, G, 20, 5, -123.456
  s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, -123.456);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % *.*G", 20, 5,
           -123.456);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 503: '-', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %-12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 504: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %+12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 505: '0', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %012.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %012.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 506: 12.2, G, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %12.2G", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %12.2G",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 504: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %+12.2g", 1234567890123.45);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+12.2g",
           1234567890123.45);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 504: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %g", 0.00123456123123123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %g",
           0.00123456123123123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 504: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: % g", 0.00123456123123123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % g",
           0.00123456123123123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 504: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %+g", 0.00123456123123123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+g",
           0.00123456123123123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 504: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %-g", 0.00123456123123123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-g",
           0.00123456123123123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 504: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %0g", 0.00123456123123123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %0g",
           0.00123456123123123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 504: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %06g", 0.00123456123123123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %06g",
           0.00123456123123123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 504: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %06.1g", 0.00123456123123123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %06.1g",
           0.00123456123123123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 504: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %11g", 0.00123456123123123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %11g",
           0.00123456123123123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 504: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %-11.3g", 0.00123456123123123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %-11.3g",
           0.00123456123123123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 504: '+', 12.2, g, 1234567890123.45 (Большое число)
  s21_sprintf(buffer, "Привет, число: %011.3g", 0.00123456123123123);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %011.3g",
           0.00123456123123123);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  // Тест 447: '0', 12.2, g, -0.00012345
  s21_sprintf(buffer, "Привет, число: % 11.7G", -12345.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: % 11.7G",
           -12345.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  s21_sprintf(buffer, "Привет, число: %+10.5f", -12345678.6789);
  snprintf(std_buffer, sizeof(std_buffer), "Привет, число: %+10.5f",
           -12345678.6789);
  if (strcmp(buffer, std_buffer) == 0) {
    printf("ACCESS: Тест %d пройден успешно\n", test_num);
  } else {
    printf("**FAIL: Тест %d не пройден\n", test_num);
    printf("********Ваш вывод: %s\n", buffer);
    printf("Стандартный вывод: %s\n", std_buffer);
  }
  test_num++;

  if (flag_huesos) {
    return 0;
  }

  // Тесты с модификатором `L`
  s21_sprintf(buffer, "Привет, число: %10.5Lf", 123.456L);
  printf("Привет, число: %10.5Lf", 123.456L);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %10.5Lf", -123.456L);
  printf("Привет, число: %10.5Lf", -123.456L);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %20ld", LONG_MIN);
  printf("Привет, число: %20ld", LONG_MIN);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*ld", 20, LONG_MIN);
  printf("Привет, число: %*ld", 20, LONG_MIN);
  printf("\n%s\n", buffer);

  // Без флага, обычная ширина
  s21_sprintf(buffer, "Привет, символ: %5c", 'A');
  printf("Привет, символ: %5c", 'A');
  printf("\n%s\n", buffer);

  // Без флага, динамическая ширина
  s21_sprintf(buffer, "Привет, символ: %*c", 5, 'A');
  printf("Привет, символ: %*c", 5, 'A');
  printf("\n%s\n", buffer);

  // С флагом `-`, обычная ширина
  s21_sprintf(buffer, "Привет, символ: %-5c", 'A');
  printf("Привет, символ: %-5c", 'A');
  printf("\n%s\n", buffer);

  // С флагом `-`, динамическая ширина
  s21_sprintf(buffer, "Привет, символ: %-*c", 5, 'A');
  printf("Привет, символ: %-*c", 5, 'A');
  printf("\n%s\n", buffer);

  // Без флага, обычная ширина
  s21_sprintf(buffer, "Привет, строка: %10.5s", "HelloWorld");
  printf("Привет, строка: %10.5s", "HelloWorld");
  printf("\n%s\n", buffer);

  // Без флага, динамическая ширина и точность
  s21_sprintf(buffer, "Привет, строка: %*.*s", 10, 5, "HelloWorld");
  printf("Привет, строка: %*.*s", 10, 5, "HelloWorld");
  printf("\n%s\n", buffer);

  // С флагом `-`, обычная ширина
  s21_sprintf(buffer, "Привет, строка: %-10.5s", "HelloWorld");
  printf("Привет, строка: %-10.5s", "HelloWorld");
  printf("\n%s\n", buffer);

  // С флагом `-`, динамическая ширина и точность
  s21_sprintf(buffer, "Привет, строка: %-*.*s", 10, 5, "HelloWorld");
  printf("Привет, строка: %-*.*s", 10, 5, "HelloWorld");
  printf("\n%s\n", buffer);

  // Без флага, обычная ширина
  s21_sprintf(buffer, "Привет, строка: %5s", "HelloWorld");
  printf("Привет, строка: %5s", "HelloWorld");
  printf("\n%s\n", buffer);

  // Без флага, динамическая ширина
  s21_sprintf(buffer, "Привет, строка: %*s", 5, "HelloWorld");
  printf("Привет, строка: %*s", 5, "HelloWorld");
  printf("\n%s\n", buffer);

  // С флагом `-`, обычная ширина
  s21_sprintf(buffer, "Привет, строка: %-5s", "HelloWorld");
  printf("Привет, строка: %-5s", "HelloWorld");
  printf("\n%s\n", buffer);

  // С флагом `-`, динамическая ширина
  s21_sprintf(buffer, "Привет, строка: %-*s", 5, "HelloWorld");
  printf("Привет, строка: %-*s", 5, "HelloWorld");
  printf("\n%s\n", buffer);

  // Без флага, обычная ширина
  s21_sprintf(buffer, "Привет, символ: %5c", 'A');
  printf("Привет, символ: %5c", 'A');
  printf("\n%s\n", buffer);

  // Без флага, динамическая ширина
  s21_sprintf(buffer, "Привет, символ: %*c", 5, 'A');
  printf("Привет, символ: %*c", 5, 'A');
  printf("\n%s\n", buffer);

  // С флагом `-`, обычная ширина
  s21_sprintf(buffer, "Привет, символ: %-5c", 'A');
  printf("Привет, символ: %-5c", 'A');
  printf("\n%s\n", buffer);

  // С флагом `-`, динамическая ширина
  s21_sprintf(buffer, "Привет, символ: %-*c", 5, 'A');
  printf("Привет, символ: %-*c", 5, 'A');
  printf("\n%s\n", buffer);

  // Крайний случай: ширина равна 0
  s21_sprintf(buffer, "Привет, символ: %c", 'A');
  printf("Привет, символ: %c", 'A');
  printf("\n%s\n", buffer);

  // Крайний случай: символ равен '\0'
  s21_sprintf(buffer, "Привет, символ: %5c", '\0');
  printf("Привет, символ: %5c", '\0');
  printf("\n%s\n", buffer);

  // Без флага, обычная ширина и точность
  s21_sprintf(buffer, "Привет, строка: %10.5s", "HelloWorld");
  printf("Привет, строка: %10.5s", "HelloWorld");
  printf("\n%s\n", buffer);

  // Без флага, динамическая ширина и точность
  s21_sprintf(buffer, "Привет, строка: %*.*s", 10, 5, "HelloWorld");
  printf("Привет, строка: %*.*s", 10, 5, "HelloWorld");
  printf("\n%s\n", buffer);

  // С флагом `-`, обычная ширина и точность
  s21_sprintf(buffer, "Привет, строка: %-10.5s", "HelloWorld");
  printf("Привет, строка: %-10.5s", "HelloWorld");
  printf("\n%s\n", buffer);

  // С флагом `-`, динамическая ширина и точность
  s21_sprintf(buffer, "Привет, строка: %-*.*s", 10, 5, "HelloWorld");
  printf("Привет, строка: %-*.*s", 10, 5, "HelloWorld");
  printf("\n%s\n", buffer);

  // Крайний случай: строка пуста
  s21_sprintf(buffer, "Привет, строка: %10s", "");
  printf("Привет, строка: %10s", "");
  printf("\n%s\n", buffer);

  // Крайний случай: ширина равна 0
  s21_sprintf(buffer, "Привет, строка: %s", "Hello");
  printf("Привет, строка: %s", "Hello");
  printf("\n%s\n", buffer);

  // Крайний случай: точность равна 0
  s21_sprintf(buffer, "Привет, строка: %10.0s", "Hello");
  printf("Привет, строка: %10.0s", "Hello");
  printf("\n%s\n", buffer);

  // Без флага
  s21_sprintf(buffer, "Привет, число: %5d", 123);
  printf("Привет, число: %5d", 123);
  printf("\n%s\n", buffer);

  // С флагом `-`
  s21_sprintf(buffer, "Привет, число: %-5d", 123);
  printf("Привет, число: %-5d", 123);
  printf("\n%s\n", buffer);

  // С флагом `+`
  s21_sprintf(buffer, "Привет, число: %+5d", 123);
  printf("Привет, число: %+5d", 123);
  printf("\n%s\n", buffer);

  // С флагом пробел
  s21_sprintf(buffer, "Привет, число: % 5d", 123);
  printf("Привет, число: % 5d", 123);
  printf("\n%s\n", buffer);

  // С флагом `0`
  s21_sprintf(buffer, "Привет, число: %05d", 123);
  printf("Привет, число: %05d", 123);
  printf("\n%s\n", buffer);

  // С флагом `+` и `0`
  s21_sprintf(buffer, "Привет, число: %+05d", 123);
  printf("Привет, число: %+05d", 123);
  printf("\n%s\n", buffer);

  // С флагом пробел и `0`
  s21_sprintf(buffer, "Привет, число: % 05d", 123);
  printf("Привет, число: % 05d", 123);
  printf("\n%s\n", buffer);
  // Без флага
  s21_sprintf(buffer, "Привет, число: %*d", 5, 123);
  printf("Привет, число: %*d", 5, 123);
  printf("\n%s\n", buffer);

  // С флагом `-`
  s21_sprintf(buffer, "Привет, число: %-*d", 5, 123);
  printf("Привет, число: %-*d", 5, 123);
  printf("\n%s\n", buffer);

  // С флагом `+`
  s21_sprintf(buffer, "Привет, число: %+*d", 5, 123);
  printf("Привет, число: %+*d", 5, 123);
  printf("\n%s\n", buffer);

  // С флагом пробел
  s21_sprintf(buffer, "Привет, число: % *d", 5, 123);
  printf("Привет, число: % *d", 5, 123);
  printf("\n%s\n", buffer);

  // С флагом `0`
  // Не применимо для динамической ширины

  // Длина `h`
  s21_sprintf(buffer, "Привет, число: %5hd", (short)123);
  printf("Привет, число: %5hd", (short)123);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %5hd", (short)-123);
  printf("Привет, число: %5hd", (short)-123);
  printf("\n%s\n", buffer);

  // Длина `l`
  s21_sprintf(buffer, "Привет, число: %5ld", (long)123);
  printf("Привет, число: %5ld", (long)123);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %5.15ld", (long)-123);
  printf("Привет, число: %5.15ld", (long)-123);
  printf("\n%s\n", buffer);

  // Ширина равна 0
  s21_sprintf(buffer, "Привет, число: %0d", 123);
  printf("Привет, число: %0d", 123);
  printf("\n%s\n", buffer);

  // Число равно 0
  s21_sprintf(buffer, "Привет, число: %5d", 0);
  printf("Привет, число: %5d", 0);
  printf("\n%s\n", buffer);

  // Число равно -0 (выводится как 0)
  s21_sprintf(buffer, "Привет, число: %5d", -0);
  printf("Привет, число: %5d", -0);
  printf("\n%s\n", buffer);

  // Отрицательное число
  s21_sprintf(buffer, "Привет, число: %5d", -123);
  printf("Привет, число: %5d", -123);
  printf("\n%s\n", buffer);

  // int
  s21_sprintf(buffer, "Привет, число: %5d", 123);
  printf("Привет, число: %5d", 123);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %5d", -123);
  printf("Привет, число: %5d", -123);
  printf("\n%s\n", buffer);

  // short
  s21_sprintf(buffer, "Привет, число: %5hd", (short)123);
  printf("Привет, число: %5hd", (short)123);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %5hd", (short)-123);
  printf("Привет, число: %5hd", (short)-123);
  printf("\n%s\n", buffer);

  // long
  s21_sprintf(buffer, "Привет, число: %5ld", (long)123);
  printf("Привет, число: %5ld", (long)123);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %5ld", (long)-123);
  printf("Привет, число: %5ld", (long)-123);
  printf("\n%s\n", buffer);

  // int
  s21_sprintf(buffer, "Привет, число: %*d", 5, 123);
  printf("Привет, число: %*d", 5, 123);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*d", 5, -123);
  printf("Привет, число: %*d", 5, -123);
  printf("\n%s\n", buffer);

  // short
  s21_sprintf(buffer, "Привет, число: %*hd", 5, (short)123);
  printf("Привет, число: %*hd", 5, (short)123);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*hd", 5, (short)-123);
  printf("Привет, число: %*hd", 5, (short)-123);
  printf("\n%s\n", buffer);

  // long
  s21_sprintf(buffer, "Привет, число: %*ld", 5, (long)123);
  printf("Привет, число: %*ld", 5, (long)123);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*ld", 5, (long)-123);
  printf("Привет, число: %*ld", 5, (long)-123);
  printf("\n%s\n", buffer);

  // Ширина равна 0
  s21_sprintf(buffer, "Привет, число: %0d", 123);
  printf("Привет, число: %0d", 123);
  printf("\n%s\n", buffer);

  // Число равно 0
  s21_sprintf(buffer, "Привет, число: %5d", 0);
  printf("Привет, число: %5d", 0);
  printf("\n%s\n", buffer);

  // Число равно -0 (выводится как 0)
  s21_sprintf(buffer, "Привет, число: %5d", -0);
  printf("Привет, число: %5d", -0);
  printf("\n%s\n", buffer);

  // int
  s21_sprintf(buffer, "Привет, число: %+10d", INT_MAX);
  printf("Привет, число: %+10d", INT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 10d", INT_MAX);
  printf("Привет, число: % 10d", INT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010d", INT_MAX);
  printf("Привет, число: %010d", INT_MAX);
  printf("\n%s\n", buffer);

  // short
  s21_sprintf(buffer, "Привет, число: %+10hd", SHRT_MAX);
  printf("Привет, число: %+10hd", SHRT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 10hd", SHRT_MAX);
  printf("Привет, число: % 10hd", SHRT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010hd", SHRT_MAX);
  printf("Привет, число: %010hd", SHRT_MAX);
  printf("\n%s\n", buffer);

  // long
  s21_sprintf(buffer, "Привет, число: %+20ld", LONG_MAX);
  printf("Привет, число: %+20ld", LONG_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 20ld", LONG_MAX);
  printf("Привет, число: % 20ld", LONG_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %020ld", LONG_MAX);
  printf("Привет, число: %020ld", LONG_MAX);
  printf("\n%s\n", buffer);

  // int
  s21_sprintf(buffer, "Привет, число: %*d", 10, INT_MAX);
  printf("Привет, число: %*d", 10, INT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*d", 10, INT_MIN);
  printf("Привет, число: %*d", 10, INT_MIN);
  printf("\n%s\n", buffer);

  // short
  s21_sprintf(buffer, "Привет, число: %*hd", 10, SHRT_MAX);
  printf("Привет, число: %*hd", 10, SHRT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*hd", 10, SHRT_MIN);
  printf("Привет, число: %*hd", 10, SHRT_MIN);
  printf("\n%s\n", buffer);

  // long
  s21_sprintf(buffer, "Привет, число: %*ld", 20, LONG_MAX);
  printf("Привет, число: %*ld", 20, LONG_MAX);
  printf("\n%s\n", buffer);

  // int
  s21_sprintf(buffer, "Привет, число: %10d", INT_MAX);
  printf("Привет, число: %10d", INT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %10d", INT_MIN);
  printf("Привет, число: %10d", INT_MIN);
  printf("\n%s\n", buffer);

  // short
  s21_sprintf(buffer, "Привет, число: %10hd", SHRT_MAX);
  printf("Привет, число: %10hd", SHRT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %10hd", SHRT_MIN);
  printf("Привет, число: %10hd", SHRT_MIN);
  printf("\n%s\n", buffer);

  // long
  s21_sprintf(buffer, "Привет, число: %20ld", LONG_MAX);
  printf("Привет, число: %20ld", LONG_MAX);
  printf("\n%s\n", buffer);

  // Тесты с флагом '-' и статической шириной
  s21_sprintf(buffer, "Привет, число: %-20u", UINT_MAX);
  printf("Привет, число: %-20u", UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10u", 0);
  printf("Привет, число: %-10u", 0);
  printf("\n%s\n", buffer);

  // Тесты с флагом '0' и статической шириной
  s21_sprintf(buffer, "Привет, число: %020u", UINT_MAX);
  printf("Привет, число: %020u", UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010u", 0);
  printf("Привет, число: %010u", 0);
  printf("\n%s\n", buffer);

  // Тесты с динамической шириной
  s21_sprintf(buffer, "Привет, число: %*u", 20, UINT_MAX);
  printf("Привет, число: %*u", 20, UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*u", 10, 0);
  printf("Привет, число: %*u", 10, 0);
  printf("\n%s\n", buffer);

  // Тесты с флагом '-' и динамической шириной
  s21_sprintf(buffer, "Привет, число: %-*u", 20, UINT_MAX);
  printf("Привет, число: %-*u", 20, UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-*u", 10, 0);
  printf("Привет, число: %-*u", 10, 0);
  printf("\n%s\n", buffer);

  // Тесты с флагом '0' и динамической шириной
  s21_sprintf(buffer, "Привет, число: %0*u", 20, UINT_MAX);
  printf("Привет, число: %0*u", 20, UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %0*u", 10, 0);
  printf("Привет, число: %0*u", 10, 0);
  printf("\n%s\n", buffer);

  // Тесты с модификатором 'h'
  s21_sprintf(buffer, "Привет, число: %20hu", USHRT_MAX);
  printf("Привет, число: %20hu", USHRT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-20hu", 0);
  printf("Привет, число: %-20hu", 0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %020hu", USHRT_MAX);
  printf("Привет, число: %020hu", USHRT_MAX);
  printf("\n%s\n", buffer);

  // Тесты с модификатором 'l'
  s21_sprintf(buffer, "Привет, число: %20lu", ULONG_MAX);
  printf("Привет, число: %20lu", ULONG_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %020lu", ULONG_MAX);
  printf("Привет, число: %020lu", ULONG_MAX);
  printf("\n%s\n", buffer);

  // Тесты с краевыми случаями
  s21_sprintf(buffer, "Привет, число: %20u", UINT_MAX);
  printf("Привет, число: %20u", UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-20u", 0);
  printf("Привет, число: %-20u", 0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %020u", 1);
  printf("Привет, число: %020u", 1);
  printf("\n%s\n", buffer);

  // Тесты с флагом '-' и статической шириной
  s21_sprintf(buffer, "Привет, число: %-20u", UINT_MAX);
  printf("Привет, число: %-20u", UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10u", 0);
  printf("Привет, число: %-10u", 0);
  printf("\n%s\n", buffer);

  // Тесты с флагом '0' и статической шириной
  s21_sprintf(buffer, "Привет, число: %020u", UINT_MAX);
  printf("Привет, число: %020u", UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010u", 0);
  printf("Привет, число: %010u", 0);
  printf("\n%s\n", buffer);

  // Тесты с динамической шириной
  s21_sprintf(buffer, "Привет, число: %*u", 20, UINT_MAX);
  printf("Привет, число: %*u", 20, UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*u", 10, 0);
  printf("Привет, число: %*u", 10, 0);
  printf("\n%s\n", buffer);

  // Тесты с флагом '-' и динамической шириной
  s21_sprintf(buffer, "Привет, число: %-*u", 20, UINT_MAX);
  printf("Привет, число: %-*u", 20, UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-*u", 10, 0);
  printf("Привет, число: %-*u", 10, 0);
  printf("\n%s\n", buffer);

  // Тесты с флагом '0' и динамической шириной
  s21_sprintf(buffer, "Привет, число: %0*u", 20, UINT_MAX);
  printf("Привет, число: %0*u", 20, UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %0*u", 10, 0);
  printf("Привет, число: %0*u", 10, 0);
  printf("\n%s\n", buffer);

  // Тесты с модификатором 'h'
  s21_sprintf(buffer, "Привет, число: %20hu", USHRT_MAX);
  printf("Привет, число: %20hu", USHRT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-20hu", 0);
  printf("Привет, число: %-20hu", 0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %020hu", USHRT_MAX);
  printf("Привет, число: %020hu", USHRT_MAX);
  printf("\n%s\n", buffer);

  // Тесты с модификатором 'l'
  s21_sprintf(buffer, "Привет, число: %20lu", ULONG_MAX);
  printf("Привет, число: %20lu", ULONG_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %020lu", ULONG_MAX);
  printf("Привет, число: %020lu", ULONG_MAX);
  printf("\n%s\n", buffer);

  // Тесты с краевыми случаями
  // Минимальное значение
  s21_sprintf(buffer, "Привет, число: %20u", 0);
  printf("Привет, число: %20u", 0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-20u", 0);
  printf("Привет, число: %-20u", 0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %020u", 0);
  printf("Привет, число: %020u", 0);
  printf("\n%s\n", buffer);

  // Максимальное значение
  s21_sprintf(buffer, "Привет, число: %20u", UINT_MAX);
  printf("Привет, число: %20u", UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-20u", UINT_MAX);
  printf("Привет, число: %-20u", UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %020u", UINT_MAX);
  printf("Привет, число: %020u", UINT_MAX);
  printf("\n%s\n", buffer);

  // Динамическая ширина
  s21_sprintf(buffer, "Привет, число: %*u", 20, 0);
  printf("Привет, число: %*u", 20, 0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*u", 10, UINT_MAX);
  printf("Привет, число: %*u", 10, UINT_MAX);
  printf("\n%s\n", buffer);

  // Флаги и динамическая ширина
  s21_sprintf(buffer, "Привет, число: %-*u", 20, 0);
  printf("Привет, число: %-*u", 20, 0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-*u", 10, UINT_MAX);
  printf("Привет, число: %-*u", 10, UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %0*u", 20, 0);
  printf("Привет, число: %0*u", 20, 0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %0*u", 10, UINT_MAX);
  printf("Привет, число: %0*u", 10, UINT_MAX);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %0*u", 10, UINT_MAX);
  printf("Привет, число: %0*u", 10, UINT_MAX);
  printf("\n%s\n", buffer);
  // Тесты с флагом `-` и статической шириной
  s21_sprintf(buffer, "Привет, число: %-10.5f", 123.456);
  printf("Привет, число: %-10.5f", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10.5f", -123.456);
  printf("Привет, число: %-10.5f", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и статической шириной
  s21_sprintf(buffer, "Привет, число: %+10.5f", 123.456);
  printf("Привет, число: %+10.5f", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5f", -123.456);
  printf("Привет, число: %+10.5f", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом пробел и статической шириной
  s21_sprintf(buffer, "Привет, число: % 10.5f", 123.456);
  printf("Привет, число: % 10.5f", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 10.5f", -123.456);
  printf("Привет, число: % 10.5f", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `0` и статической шириной
  s21_sprintf(buffer, "Привет, число: %010.5f", 123.456);
  printf("Привет, число: %010.5f", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5f", -123.456);
  printf("Привет, число: %010.5f", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `#` и статической шириной
  s21_sprintf(buffer, "Привет, число: %#10.5f", 123.456);
  printf("Привет, число: %#10.5f", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#10.5f", -123.456);
  printf("Привет, число: %#10.5f", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с динамической шириной
  s21_sprintf(buffer, "Привет, число: %*.*f", 20, 5, 123.456);
  printf("Привет, число: %*.*f", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*.*f", 20, 5, -123.456);
  printf("Привет, число: %*.*f", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `-` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %-*.*f", 20, 5, 123.456);
  printf("Привет, число: %-*.*f", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-*.*f", 20, 5, -123.456);
  printf("Привет, число: %-*.*f", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %+*.*f", 20, 5, 123.456);
  printf("Привет, число: %+*.*f", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+*.*f", 20, 5, -123.456);
  printf("Привет, число: %+*.*f", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом пробел и динамической шириной
  s21_sprintf(buffer, "Привет, число: % *.*f", 20, 5, 123.456);
  printf("Привет, число: % *.*f", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % *.*f", 20, 5, -123.456);
  printf("Привет, число: % *.*f", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `#` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %#*.*f", 20, 5, 123.456);
  printf("Привет, число: %#*.*f", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#*.*f", 20, 5, -123.456);
  printf("Привет, число: %#*.*f", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с шириной 0
  s21_sprintf(buffer, "Привет, число: %0.5f", 123.456);
  printf("Привет, число: %0.5f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с точностью 0
  s21_sprintf(buffer, "Привет, число: %10.0f", 123.456);
  printf("Привет, число: %10.0f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с шириной 0
  s21_sprintf(buffer, "Привет, число: %0.5f", 123.456);
  printf("Привет, число: %0.5f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с точностью 0
  s21_sprintf(buffer, "Привет, число: %10.0f", 123.456);
  printf("Привет, число: %10.0f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `-` и статической шириной
  s21_sprintf(buffer, "Привет, число: %-10.5f", 123.456);
  printf("Привет, число: %-10.5f", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10.5f", -123.456);
  printf("Привет, число: %-10.5f", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и статической шириной
  s21_sprintf(buffer, "Привет, число: %+10.5f", 123.456);
  printf("Привет, число: %+10.5f", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5f", -123.456);
  printf("Привет, число: %+10.5f", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом пробел и статической шириной
  s21_sprintf(buffer, "Привет, число: % 10.5f", 123.456);
  printf("Привет, число: % 10.5f", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 10.5f", -123.456);
  printf("Привет, число: % 10.5f", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `0` и статической шириной
  s21_sprintf(buffer, "Привет, число: %010.5f", 123.456);
  printf("Привет, число: %010.5f", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5f", -123.456);
  printf("Привет, число: %010.5f", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `#` и статической шириной
  s21_sprintf(buffer, "Привет, число: %#10.5f", 123.456);
  printf("Привет, число: %#10.5f", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#10.5f", -123.456);
  printf("Привет, число: %#10.5f", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с динамической шириной
  s21_sprintf(buffer, "Привет, число: %*.*f", 20, 5, 123.456);
  printf("Привет, число: %*.*f", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*.*f", 20, 5, -123.456);
  printf("Привет, число: %*.*f", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с модификатором `h`
  // float автоматически продвигается к double, поэтому тесты будут
  // для f
  s21_sprintf(buffer, "Привет, число: %10.5f", f_num);
  printf("Привет, число: %10.5f", f_num);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %10.5f", f_num);
  printf("Привет, число: %10.5f", f_num);
  printf("\n%s\n", buffer);

  // Тесты с флагом `-` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %-*.*f", 20, 5, 123.456);
  printf("Привет, число: %-*.*f", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-*.*f", 20, 5, -123.456);
  printf("Привет, число: %-*.*f", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %+*.*f", 20, 5, 123.456);
  printf("Привет, число: %+*.*f", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+*.*f", 20, 5, -123.456);
  printf("Привет, число: %+*.*f", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом пробел и динамической шириной
  s21_sprintf(buffer, "Привет, число: % *.*f", 20, 5, 123.456);
  printf("Привет, число: % *.*f", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % *.*f", 20, 5, -123.456);
  printf("Привет, число: % *.*f", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `#` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %#*.*f", 20, 5, 123.456);
  printf("Привет, число: %#*.*f", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#*.*f", 20, 5, -123.456);
  printf("Привет, число: %#*.*f", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с модификатором `l`
  // В C/C++ нет специального типа для long float, поэтому используется
  s21_sprintf(buffer, "Привет, число: %10.5lf", 123.456);
  printf("Привет, число: %10.5lf", 123.456);
  printf("\n%s\n", buffer);

  // Базовый тест
  s21_sprintf(buffer, "Hex: %x", 255);
  printf("Hex: %x\n", 255);
  printf("%s\n", buffer);

  // С шириной
  s21_sprintf(buffer, "Hex with width: %5x", 255);
  printf("Hex with width: %5x\n", 255);
  printf("%s\n", buffer);

  // С заполнением нулями
  s21_sprintf(buffer, "Hex with zero padding: %05x", 255);
  printf("Hex with zero padding: %05x\n", 255);
  printf("%s\n", buffer);

  // С выравниванием влево
  s21_sprintf(buffer, "Hex with left alignment: %-5x", 255);
  printf("Hex with left alignment: %-5x\n", 255);
  printf("%s\n", buffer);

  // С динамической шириной
  s21_sprintf(buffer, "Hex with dynamic width: %*x", 5, 255);
  printf("Hex with dynamic width: %*x\n", 5, 255);
  printf("%s\n", buffer);

  // Максимальное значение
  s21_sprintf(buffer, "Hex max: %x", UINT_MAX);
  printf("Hex max: %x\n", UINT_MAX);
  printf("%s\n", buffer);

  // Короткое целое
  s21_sprintf(buffer, "Hex short: %hx", (unsigned short)65535);
  printf("Hex short: %hx\n", (unsigned short)65535);
  printf("%s\n", buffer);

  // С точностью
  s21_sprintf(buffer, "Hex with precision: %.8x", 255);
  printf("Hex with precision: %.8x\n", 255);
  printf("%s\n", buffer);

  // С шириной и точностью
  s21_sprintf(buffer, "Hex with width and precision: %10.8x", 255);
  printf("Hex with width and precision: %10.8x\n", 255);
  printf("%s\n", buffer);

  s21_sprintf(buffer, "%#10.5X\n", num);
  printf("%#10.5X\n", num);
  printf("%s", buffer);

  // Ноль
  s21_sprintf(buffer, "Hex zero: %x", 0);
  printf("Hex zero: %x\n", 0);
  printf("%s\n", buffer);

  // С нулевым значением и точностью
  s21_sprintf(buffer, "Hex with zero value and precision: %.0x", 3);
  printf("Hex with zero value and precision: %.0x\n", 3);
  printf("%s\n", buffer);

  // С нулевым значением и точностью
  s21_sprintf(buffer, "Hex with zero value and precision: %.0x", 0);
  printf("Hex with zero value and precision: %.0x\n", 0);
  printf("%s\n", buffer);

  // С нулевым значением и точностью
  s21_sprintf(buffer, "Hex with zero value and precision: %.1x", 0);
  printf("Hex with zero value and precision: %.1x\n", 0);
  printf("%s\n", buffer);

  // С нулевым значением и точностью
  s21_sprintf(buffer, "Hex with zero value and precision: %.2x", 0);
  printf("Hex with zero value and precision: %.2x\n", 0);
  printf("%s\n", buffer);

  // С нулевым значением и точностью
  s21_sprintf(buffer, "Hex with zero value and precision: %.3x", 0);
  printf("Hex with zero value and precision: %.3x\n", 0);
  printf("%s\n", buffer);

  // Базовый тест
  s21_sprintf(buffer, "Hex: %X", 255);
  printf("Hex: %X\n", 255);
  printf("%s\n", buffer);

  // С шириной
  s21_sprintf(buffer, "Hex with width: %5X", 255);
  printf("Hex with width: %5X\n", 255);
  printf("%s\n", buffer);

  // С заполнением нулями
  s21_sprintf(buffer, "Hex with zero padding: %05X", 255);
  printf("Hex with zero padding: %05X\n", 255);
  printf("%s\n", buffer);

  // С выравниванием влево
  s21_sprintf(buffer, "Hex with left alignment: %-5X", 255);
  printf("Hex with left alignment: %-5X\n", 255);
  printf("%s\n", buffer);

  // С динамической шириной
  s21_sprintf(buffer, "Hex with dynamic width: %*X", 5, 255);
  printf("Hex with dynamic width: %*X\n", 5, 255);
  printf("%s\n", buffer);

  // Ноль
  s21_sprintf(buffer, "Hex zero: %X", 0);
  printf("Hex zero: %X\n", 0);
  printf("%s\n", buffer);

  // Максимальное значение
  s21_sprintf(buffer, "Hex max: %X", UINT_MAX);
  printf("Hex max: %X\n", UINT_MAX);
  printf("%s\n", buffer);

  // Короткое целое
  s21_sprintf(buffer, "Hex short: %hX", (unsigned short)65535);
  printf("Hex short: %hX\n", (unsigned short)65535);
  printf("%s\n", buffer);

  // С точностью
  s21_sprintf(buffer, "Hex with precision: %.8X", 255);
  printf("Hex with precision: %.8X\n", 255);
  printf("%s\n", buffer);

  // С нулевым значением и точностью
  s21_sprintf(buffer, "Hex with zero value and precision: %.0X", 0);
  printf("Hex with zero value and precision: %.0X\n", 0);
  printf("%s\n", buffer);

  // С шириной и точностью
  s21_sprintf(buffer, "Hex with width and precision: %10.8X", 255);
  printf("Hex with width and precision: %10.8X\n", 255);
  printf("%s\n", buffer);

  // Базовый тест
  s21_sprintf(buffer, "Octal: %o", 255);
  printf("Octal: %o\n", 255);
  printf("%s\n", buffer);

  // С шириной
  s21_sprintf(buffer, "Octal with width: %5o", 255);
  printf("Octal with width: %5o\n", 255);
  printf("%s\n", buffer);

  // С заполнением нулями
  s21_sprintf(buffer, "Octal with zero padding: %05o", 255);
  printf("Octal with zero padding: %05o\n", 255);
  printf("%s\n", buffer);

  // С выравниванием влево
  s21_sprintf(buffer, "Octal with left alignment: %-5o", 255);
  printf("Octal with left alignment: %-5o\n", 255);
  printf("%s\n", buffer);

  // С динамической шириной
  s21_sprintf(buffer, "Octal with dynamic width: %*o", 5, 255);
  printf("Octal with dynamic width: %*o\n", 5, 255);
  printf("%s\n", buffer);

  // Ноль
  s21_sprintf(buffer, "Octal zero: %o", 0);
  printf("Octal zero: %o\n", 0);
  printf("%s\n", buffer);

  s21_sprintf(buffer, "Octal max: %o", UINT_MAX);
  printf("Octal max: %o\n", UINT_MAX);
  printf("%s\n", buffer);

  // Короткое целое
  s21_sprintf(buffer, "Octal short: %ho", (unsigned short)65535);
  printf("Octal short: %ho\n", (unsigned short)65535);
  printf("%s\n", buffer);

  // С точностью
  s21_sprintf(buffer, "Octal with precision: %.8o", 255);
  printf("Octal with precision: %.8o\n", 255);
  printf("%s\n", buffer);

  // С нулевым значением и точностью
  s21_sprintf(buffer, "Octal with zero value and precision: %.0o", 0);
  printf("Octal with zero value and precision: %.0o\n", 0);
  printf("%s\n", buffer);

  // С шириной и точностью
  s21_sprintf(buffer, "Octal with width and precision: %10.8o", 255);
  printf("Octal with width and precision: %10.8o\n", 255);
  printf("%s\n", buffer);

  // Базовый тест
  s21_sprintf(buffer, "Pointer: %p", (void *)ptr);
  printf("Pointer: %p\n", (void *)ptr);
  printf("%s\n", buffer);

  // Нулевой указатель
  s21_sprintf(buffer, "Null pointer: %p", (void *)NULL);
  printf("Null pointer: %p\n", (void *)NULL);
  printf("%s\n", buffer);

  // С шириной
  s21_sprintf(buffer, "Pointer with width: %20p", (void *)ptr);
  printf("Pointer with width: %20p\n", (void *)ptr);
  printf("%s\n", buffer);

  // Базовый тест
  s21_sprintf(buffer, "Привет, символ: %c", 'A');
  printf("Привет, символ: %c\n", 'A');
  printf("%s\n", buffer);

  // С шириной
  s21_sprintf(buffer, "Привет, символ: %5c", 'A');
  printf("Привет, символ: %5c\n", 'A');
  printf("%s\n", buffer);

  // С шириной и выравниванием влево
  s21_sprintf(buffer, "Привет, символ: %-5c", 'A');
  printf("Привет, символ: %-5c\n", 'A');
  printf("%s\n", buffer);

  // С динамической шириной
  s21_sprintf(buffer, "Привет, символ: %*c", 5, 'A');
  printf("Привет, символ: %*c\n", 5, 'A');
  printf("%s\n", buffer);

  // С динамической шириной и выравниванием влево
  s21_sprintf(buffer, "Привет, символ: %-*c", 5, 'A');
  printf("Привет, символ: %-*c\n", 5, 'A');
  printf("%s\n", buffer);

  // ASCII-код
  s21_sprintf(buffer, "Привет, символ: %c", 65);  // 'A'
  printf("Привет, символ: %c\n", 65);
  printf("%s\n", buffer);

  // Минимальная ширина
  s21_sprintf(buffer, "Привет, символ: %1c", 'A');
  printf("Привет, символ: %1c\n", 'A');
  printf("%s\n", buffer);

  // Очень большая ширина
  s21_sprintf(buffer, "Привет, символ: %50c", 'A');
  printf("Привет, символ: %50c\n", 'A');
  printf("%s\n", buffer);

  // Нулевой символ с шириной
  s21_sprintf(buffer, "Привет, символ: %5c", '\0');
  printf("Привет, символ: %5c\n", '\0');
  printf("%s\n", buffer);

  // Нулевой символ с динамической шириной
  s21_sprintf(buffer, "Привет, символ: %*c", 5, '\0');
  printf("Привет, символ: %*c\n", 5, '\0');
  printf("%s\n", buffer);

  // Нулевой символ с шириной и выравниванием влево
  s21_sprintf(buffer, "Привет, символ: %-5c", '\0');
  printf("Привет, символ: %-5c\n", '\0');
  printf("%s\n", buffer);

  // Нулевой символ с динамической шириной и выравниванием влево
  s21_sprintf(buffer, "Привет, символ: %-*c", 5, '\0');
  printf("Привет, символ: %-*c\n", 5, '\0');
  printf("%s\n", buffer);

  // Нулевой символ
  s21_sprintf(buffer, "Привет, символ: %c", '\0');
  printf("Привет, символ: %c\n", '\0');
  printf("%s\n", buffer);

  // Максимальное значение ЕСЛИ БУДУ ПЕРЕДЕЛЫВАТЬ ТУТ ПЕРЕДЕЛАТЬ!
  s21_sprintf(buffer, "Octal with long: %lo", LONG_MAX);
  printf("Octal with long: %lo\n", LONG_MAX);
  printf("%s\n", buffer);

  // С длинным целым  // // Максимальное значение ЕСЛИ БУДУ ПЕРЕДЕЛЫВАТЬ ТУТ
  s21_sprintf(buffer, "Hex with long: %lX", LONG_MAX);
  printf("Hex with long: %lX\n", LONG_MAX);
  printf("%s\n", buffer);

  // С длинным целым  ЕСЛИ БУДУ ПЕРЕДЕЛЫВАТЬ ТУТ ПЕРЕДЕЛАТЬ!
  s21_sprintf(buffer, "Hex with long: %lx", LONG_MAX);
  printf("Hex with long: %lx\n", LONG_MAX);
  printf("%s\n", buffer);

  // Тесты с флагом `-` и статической шириной
  s21_sprintf(buffer, "Привет, число: %-10.5g", 123.456);
  printf("Привет, число: %-10.5g", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10.5g", -123.456);
  printf("Привет, число: %-10.5g", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10.5G", 123.456);
  printf("Привет, число: %-10.5G", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10.5G", -123.456);
  printf("Привет, число: %-10.5G", -123.456);
  printf("\n%s\n", buffer);
  s21_sprintf(buffer, "Привет, число: % 10.5g", -123.456);
  printf("Привет, число: % 10.5g", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 10.5G", 123.456);
  printf("Привет, число: % 10.5G", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 10.5G", -123.456);
  printf("Привет, число: % 10.5G", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `#` и статической шириной
  s21_sprintf(buffer, "Привет, число: %#10.5g", 123.456);
  printf("Привет, число: %#10.5g", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#10.5g", -123.456);
  printf("Привет, число: %#10.5g", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#10.5G", 123.456);
  printf("Привет, число: %#10.5G", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#10.5G", -123.456);
  printf("Привет, число: %#10.5G", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с динамической шириной
  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, 123.456);
  printf("Привет, число: %*.*g", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, -123.456);
  printf("Привет, число: %*.*g", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, 123.456);
  printf("Привет, число: %*.*G", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, -123.456);
  printf("Привет, число: %*.*G", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `-` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, 123.456);
  printf("Привет, число: %-*.*g", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, -123.456);
  printf("Привет, число: %-*.*g", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, 123.456);
  printf("Привет, число: %-*.*G", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, -123.456);
  printf("Привет, число: %-*.*G", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, 123.456);
  printf("Привет, число: %+*.*g", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, -123.456);
  printf("Привет, число: %+*.*g", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, 123.456);
  printf("Привет, число: %+*.*G", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, -123.456);
  printf("Привет, число: %+*.*G", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `#` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, 123.456);
  printf("Привет, число: %#*.*g", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, 123.456);
  printf("Привет, число: % *.*G", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, -123.456);
  printf("Привет, число: %#*.*g", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом пробел и динамической шириной
  s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, 123.456);
  printf("Привет, число: % *.*g", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, -123.456);
  printf("Привет, число: % *.*g", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, -123.456);
  printf("Привет, число: % *.*G", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и статической шириной
  s21_sprintf(buffer, "Привет, число: %+10.5g", 123.456);
  printf("Привет, число: %+10.5g", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5G", 123.456);
  printf("Привет, число: %+10.5G", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом пробел и статической шириной
  s21_sprintf(buffer, "Привет, число: % 10.5g", 123.456);
  printf("Привет, число: % 10.5g", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `0` и статической шириной
  s21_sprintf(buffer, "Привет, число: %010.5g", 123.456);
  printf("Привет, число: %010.5g", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5G", 123.456);
  printf("Привет, число: %010.5G", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5G", -123.456);
  printf("Привет, число: %010.5G", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5g", -123.456);
  printf("Привет, число: %010.5g", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5g", -123.456);
  printf("Привет, число: %+10.5g", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5G", -123.456);
  printf("Привет, число: %+10.5G", -123.456);
  printf("\n%s\n", buffer);

  // Без флага, динамическая ширина и точность
  s21_sprintf(buffer, "Привет, строка: %*.*s", 10, 5, "He\0lloWorld");
  printf("Привет, строка: %*.*s", 10, 5, "He\0lloWorld");
  printf("\n%s\n", buffer);

  // Без флага, динамическая ширина и точность
  s21_sprintf(buffer, "Привет, строка: %-*.*s", 10, 5, "He\0lloWorld");
  printf("Привет, строка: %-*.*s", 10, 5, "He\0lloWorld");
  printf("\n%s\n", buffer);

  // Краевые случаи
  s21_sprintf(buffer, "Привет, число: %f", 0.0);
  printf("Привет, число: %f", 0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %f", -0.0);
  printf("Привет, число: %f", -0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %f", INFINITY);
  printf("Привет, число: %f", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %f", -INFINITY);
  printf("Привет, число: %f", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %f", NAN);
  printf("Привет, число: %f", NAN);
  printf("\n%s\n", buffer);

  // Краевые случаи
  s21_sprintf(buffer, "Привет, число: %f", 0.0);
  printf("Привет, число: %f", 0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %f", -0.0);
  printf("Привет, число: %f", -0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %f", INFINITY);
  printf("Привет, число: %f", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %f", -INFINITY);
  printf("Привет, число: %f", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %10f", NAN);
  printf("Привет, число: %10f", NAN);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.0f", 123.456);
  printf("Привет, число: %.0f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.1f", 123.456);
  printf("Привет, число: %.1f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.2f", 123.456);
  printf("Привет, число: %.2f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.3f", 123.456);
  printf("Привет, число: %.3f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.4f", 123.456);
  printf("Привет, число: %.4f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.5f", 123.456);
  printf("Привет, число: %.5f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.6f", 123.456);
  printf("Привет, число: %.6f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.7f", 123.456);
  printf("Привет, число: %.7f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.0f", 1234.456);
  printf("Привет, число: %.0f", 1234.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.1f", 1235.456);
  printf("Привет, число: %.1f", 1235.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.2f", 1236.456);
  printf("Привет, число: %.2f", 1236.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.3f", 1234.456);
  printf("Привет, число: %.3f", 1234.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.4f", 123.456);
  printf("Привет, число: %.4f", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.7f", 1236.456);
  printf("Привет, число: %.7f", 1236.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.5f", 1235.456);
  printf("Привет, число: %.5f", 1235.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.6f", 123.456);
  printf("Привет, число: %.6f", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %f", 0.010100);
  printf("Привет, число: %f", 0.010100);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "%7.6f\n", -1.000001);
  printf("%7.6f\n", -1.000001);
  printf("%s", buffer);

  s21_sprintf(buffer, "Привет, число: %e", -0.0);
  printf("Привет, число: %e", -0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", INFINITY);
  printf("Привет, число: %e", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", -INFINITY);
  printf("Привет, число: %e", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", -INFINITY);
  printf("Привет, число: %e", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %10e", NAN);
  printf("Привет, число: %10e", NAN);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.0e", 123.456);
  printf("Привет, число: %.0e", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.1e", 123.456);
  printf("Привет, число: %.1e", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.2e", 123.456);
  printf("Привет, число: %.2e", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.3e", 123.456);
  printf("Привет, число: %.3e", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.4e", 123.456);
  printf("Привет, число: %.4e", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.5e", 123.456);
  printf("Привет, число: %.5e", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.6e", 123.456);
  printf("Привет, число: %.6e", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.7e", 123.456);
  printf("Привет, число: %.7e", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.0e", 1234.456);
  printf("Привет, число: %.0e", 1234.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.1e", 1235.456);
  printf("Привет, число: %.1e", 1235.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.2e", 1236.456);
  printf("Привет, число: %.2e", 1236.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.3e", 1234.456);
  printf("Привет, число: %.3e", 1234.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.4e", 123.456);
  printf("Привет, число: %.4e", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.7e", 1236.456);
  printf("Привет, число: %.7e", 1236.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.5e", 1235.456);
  printf("Привет, число: %.5e", 1235.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %.6e", 123.456);
  printf("Привет, число: %.6e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", 0.010100);
  printf("Привет, число: %e", 0.010100);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "%7.6e\n", -1.000001);
  printf("%7.6e\n", -1.000001);
  printf("%s", buffer);

  // Тесты с флагом `+`
  s21_sprintf(buffer, "Привет, число: %+e", 123.456);
  printf("Привет, число: %+e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+e", -123.456);
  printf("Привет, число: %+e", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `-`
  s21_sprintf(buffer, "Привет, число: %-10.3e", 123.456);
  printf("Привет, число: %-10.3e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10.3e", -123.456);
  printf("Привет, число: %-10.3e", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % e", 123.456);
  printf("Привет, число: % e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % e", -123.456);
  printf("Привет, число: % e", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `#`
  s21_sprintf(buffer, "Привет, число: %#e", 123.456);
  printf("Привет, число: %#e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#e", -123.456);
  printf("Привет, число: %#e", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с точностью
  s21_sprintf(buffer, "Привет, число: %.5e", 123.456);
  printf("Привет, число: %.5e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %.5e", -123.456);
  printf("Привет, число: %.5e", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с шириной
  s21_sprintf(buffer, "Привет, число: %10.5e", 123.456);
  printf("Привет, число: %10.5e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %10.5e", -123.456);
  printf("Привет, число: %10.5e", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с краевыми случаями
  s21_sprintf(buffer, "Привет, число: %e", 0.0);
  printf("Привет, число: %e", 0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", -0.0);
  printf("Привет, число: %e", -0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", INFINITY);
  printf("Привет, число: %e", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", -INFINITY);
  printf("Привет, число: %e", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", NAN);
  printf("Привет, число: %e", NAN);
  printf("\n%s\n", buffer);

  // Тесты с очень большими числами
  s21_sprintf(buffer, "Привет, число: %e", 1e308);
  printf("Привет, число: %e", 1e308);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", -1e308);
  printf("Привет, число: %e", -1e308);
  printf("\n%s\n", buffer);

  // Тесты с очень маленькими числами
  s21_sprintf(buffer, "Привет, число: %e", 1e-323);
  printf("Привет, число: %e", 1e-323);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", -1e-323);
  printf("Привет, число: %e", -1e-323);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", NAN);
  printf("Привет, число: %e", NAN);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", INFINITY);
  printf("Привет, число: %e", INFINITY);
  printf("\n%s\n", buffer);

  // Краевые случаи
  s21_sprintf(buffer, "Привет, число: %e", 0.0);
  printf("Привет, число: %e", 0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", -0.0);
  printf("Привет, число: %e", -0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e", -INFINITY);
  printf("Привет, число: %e", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %10e", NAN);
  printf("Привет, число: %10e", NAN);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.3e   ", 123.456);
  printf("Привет, число: %010.3e   ", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.3e", -123.456);
  printf("Привет, число: %010.3e", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", 0.010100);
  printf("Привет, число: %010e", 0.010100);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "%010.6e\n", -1.000001);
  printf("%010.6e\n", -1.000001);
  printf("%s", buffer);

  // Тесты с флагом `+` и `0`
  s21_sprintf(buffer, "Привет, число: %+010e", 123.456);
  printf("Привет, число: %+010e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+010e", -123.456);
  printf("Привет, число: %+010e", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `0`
  s21_sprintf(buffer, "Привет, число: %010.3e", 123.456);
  printf("Привет, число: %010.3e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.3e", -123.456);
  printf("Привет, число: %010.3e", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", 123.456);
  printf("Привет, число: %010e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", -123.456);
  printf("Привет, число: %010e", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `0` и пробелом перед знаком
  s21_sprintf(buffer, "Привет, число: % 010e", 123.456);
  printf("Привет, число: % 010e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 010e", -123.456);
  printf("Привет, число: % 010e", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `#` и `0`
  s21_sprintf(buffer, "Привет, число: %#010e", 123.456);
  printf("Привет, число: %#010e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#010e", -123.456);
  printf("Привет, число: %#010e", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с точностью и флагом `0`
  s21_sprintf(buffer, "Привет, число: %010.5e", 123.456);
  printf("Привет, число: %010.5e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5e", -123.456);
  printf("Привет, число: %010.5e", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с шириной и флагом `0`
  s21_sprintf(buffer, "Привет, число: %010.5e", 123.456);
  printf("Привет, число: %010.5e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5e", -123.456);
  printf("Привет, число: %010.5e", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с краевыми случаями и флагом `0`
  s21_sprintf(buffer, "Привет, число: %010e", 0.0);
  printf("Привет, число: %010e", 0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", -0.0);
  printf("Привет, число: %010e", -0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", NAN);
  printf("Привет, число: %010e", NAN);
  printf("\n%s\n", buffer);

  // Тесты с очень большими числами и флагом `0`
  s21_sprintf(buffer, "Привет, число: %010e", 1e308);
  printf("Привет, число: %010e", 1e308);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", -1e308);
  printf("Привет, число: %010e", -1e308);
  printf("\n%s\n", buffer);

  // Тесты с очень маленькими числами и флагом `0`
  s21_sprintf(buffer, "Привет, число: %010e", 1e-323);
  printf("Привет, число: %010e", 1e-323);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", -1e-323);
  printf("Привет, число: %010e", -1e-323);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", NAN);
  printf("Привет, число: %010e", NAN);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", INFINITY);
  printf("Привет, число: %010e", INFINITY);
  printf("\n%s\n", buffer);

  // Краевые случаи с флагом `0`
  s21_sprintf(buffer, "Привет, число: %010e", 0.0);
  printf("Привет, число: %010e", 0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", -0.0);
  printf("Привет, число: %010e", -0.0);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", -INFINITY);
  printf("Привет, число: %010e", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", NAN);
  printf("Привет, число: %010e", NAN);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.3e", 123.456);
  printf("Привет, число: %010.3e", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.3e", -123.456);
  printf("Привет, число: %010.3e", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010E", NAN);
  printf("Привет, число: %010E", NAN);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e ", NAN);
  printf("Привет, число: %010e ", NAN);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e  ", NAN);
  printf("Привет, число: %010e  ", NAN);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f", NAN);
  printf("Привет, число: %010f", NAN);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f", NAN);
  printf("Привет, число: %010f ", NAN);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10fASD", NAN);
  printf("Привет, число: %-10fASD", NAN);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010fASD", NAN);
  printf("Привет, число: %010fASD", NAN);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f", INFINITY);
  printf("Привет, число: %010f", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10f", INFINITY);
  printf("Привет, число: %-10f", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f", -INFINITY);
  printf("Привет, число: %010f", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10f", -INFINITY);
  printf("Привет, число: %-10f", -INFINITY);
  printf("\n%s\n", buffer);

  // Для сравнения с %f
  s21_sprintf(buffer, "Привет, число: %010f", INFINITY);
  printf("Привет, число: %010f", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f ", INFINITY);
  printf("Привет, число: %010f ", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f  ", INFINITY);
  printf("Привет, число: %010f  ", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f", -INFINITY);
  printf("Привет, число: %010f", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f ", -INFINITY);
  printf("Привет, число: %010f ", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f  ", -INFINITY);
  printf("Привет, число: %010f  ", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", -INFINITY);
  printf("Привет, число: %010e", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", INFINITY);
  printf("Привет, число: %010e", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f", INFINITY);
  printf("Привет, число: %010f", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", INFINITY);
  printf("Привет, число: %010e", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e ", INFINITY);
  printf("Привет, число: %010e ", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e  ", INFINITY);
  printf("Привет, число: %010e  ", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e", -INFINITY);
  printf("Привет, число: %010e", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e ", -INFINITY);
  printf("Привет, число: %010e ", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e  ", -INFINITY);
  printf("Привет, число: %010e  ", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %e  qq", INFINITY);
  printf("Привет, число: %e  qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e  qqq", -INFINITY);
  printf("Привет, число: %010e  qqq", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f  qq", INFINITY);
  printf("Привет, число: %010f  qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10f  qq", INFINITY);
  printf("Привет, число: %-10f  qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f  qq", -INFINITY);
  printf("Привет, число: %010f  qq", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10f  qq", -INFINITY);
  printf("Привет, число: %-10f  qq", -INFINITY);
  printf("\n%s\n", buffer);

  // Для сравнения с %f
  s21_sprintf(buffer, "Привет, число: %010f  qq", INFINITY);
  printf("Привет, число: %010f  qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f   qq", INFINITY);
  printf("Привет, число: %010f   qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f    qq", INFINITY);
  printf("Привет, число: %010f    qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f  qq", -INFINITY);
  printf("Привет, число: %010f  qq", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f   qq", -INFINITY);
  printf("Привет, число: %010f   qq", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f    qq", -INFINITY);
  printf("Привет, число: %010f    qq", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e  qq", -INFINITY);
  printf("Привет, число: %010e  qq", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e  qq", INFINITY);
  printf("Привет, число: %010e  qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e  qq", INFINITY);
  printf("Привет, число: %010e  qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e   qq", INFINITY);
  printf("Привет, число: %010e   qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e    qq", INFINITY);
  printf("Привет, число: %010e    qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e  qq", -INFINITY);
  printf("Привет, число: %010e  qq", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e   qq", -INFINITY);
  printf("Привет, число: %010e   qq", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010e    qq", -INFINITY);
  printf("Привет, число: %010e    qq", -INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %E  qq", INFINITY);
  printf("Привет, число: %E  qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f  qq", INFINITY);
  printf("Привет, число: %010f  qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f   qq", INFINITY);
  printf("Привет, число: %010f   qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f    qq", INFINITY);
  printf("Привет, число: %010f    qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010f  qq", INFINITY);
  printf("Привет, число: %010f  qq", INFINITY);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %E", -0.0);
  printf("Привет, число: %E", -0.0);
  printf("\n%s\n", buffer);

  // С длинным целым  ЕСЛИ БУДУ ПЕРЕДЕЛЫВАТЬ ТУТ ПЕРЕДЕЛАТЬ!
  s21_sprintf(buffer, "Hex with long: %lx", LONG_MAX);
  printf("Hex with long: %lx\n", LONG_MAX);
  printf("%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5g", 0.00012345);
  printf("Привет, число: %+10.5g", 0.00012345);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5G", 0.00012345);
  printf("Привет, число: %+10.5G", 0.00012345);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 10.5g", 0.00012345);
  printf("Привет, число: % 10.5g", 0.00012345);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5g", 0.00012345);
  printf("Привет, число: %010.5g", 0.00012345);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5G", 0.00012345);
  printf("Привет, число: %010.5G", 0.00012345);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5G", -0.00012345);
  printf("Привет, число: %010.5G", -0.00012345);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5g", -0.00012345);
  printf("Привет, число: %010.5g", -0.00012345);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5e", -0.00012345);
  printf("Привет, число: %+10.5e", -0.00012345);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5G", -12345678.9);
  printf("Привет, число: %+10.5G", -12345678.9);
  printf("\n%s\n", buffer);

  // Тест 9: Маленькое число с использованием `%G`
  s21_sprintf(buffer, "Привет, число: %12.2G", -0.00012345);
  printf("Привет, число: %12.2G", -0.00012345);
  printf("\n%s\n", buffer);

  // Тест 7: Маленькое число с флагом `0` и выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %012.2g", -0.00012345);
  printf("Привет, число: %012.2g", -0.00012345);
  printf("\n%s\n", buffer);

  // Тест 3: Маленькое число с выравниванием по левому краю
  s21_sprintf(buffer, "Привет, число: %-12.2g", -0.00012345);
  printf("Привет, число: %-12.2g", -0.00012345);
  printf("\n%s\n", buffer);

  // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %+12.2g", -0.00012345);
  printf("Привет, число: %+12.2g", -0.00012345);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %12.2g", -0.00012345);
  printf("Привет, число: %12.2g", -0.00012345);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %12.2G", -12345.6789);
  printf("Привет, число: %12.2G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-12.2G", -12345.6789);
  printf("Привет, число: %-12.2G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+12.2G", -12345.6789);
  printf("Привет, число: %+12.2G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %012.2G", -12345.6789);
  printf("Привет, число: %012.2G", -12345.6789);
  printf("\n%s\n", buffer);

  // Тест 2: Большое число с выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %12.2g", 1234567890123.45);
  printf("Привет, число: %12.2g", 1234567890123.45);
  printf("\n%s\n", buffer);

  // Тест 4: Большое число с выравниванием по левому краю
  s21_sprintf(buffer, "Привет, число: %-12.2g", 1234567890123.45);
  printf("Привет, число: %-12.2g", 1234567890123.45);
  printf("\n%s\n", buffer);

  // Тест 6: Большое число с флагом `+` и выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %+12.2g", 1234567890123.45);
  printf("Привет, число: %+12.2g", 1234567890123.45);
  printf("\n%s\n", buffer);

  // Тест 8: Большое число с флагом `0` и выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %012.2g", 1234567890123.45);
  printf("Привет, число: %012.2g", 1234567890123.45);
  printf("\n%s\n", buffer);

  // Тест 10: Большое число с использованием `%G`
  s21_sprintf(buffer, "Привет, число: %12.2G", 1234567890123.45);
  printf("Привет, число: %12.2G", 1234567890123.45);
  printf("\n%s\n", buffer);

  // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %12g", -0.00012345);
  printf("Привет, число: %12g", -0.00012345);
  printf("\n%s\n", buffer);

  // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %+12g", -0.00012345);
  printf("Привет, число: %+12g", -0.00012345);
  printf("\n%s\n", buffer);

  // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %-12g", -0.00012345);
  printf("Привет, число: %-12g", -0.00012345);
  printf("\n%s\n", buffer);

  // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %012g", -0.00012345);
  printf("Привет, число: %012g", -0.00012345);
  printf("\n%s\n", buffer);

  // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %12.4g", -0.00012345);
  printf("Привет, число: %12.4g", -0.00012345);
  printf("\n%s\n", buffer);

  // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %+12.4g", -0.00012345);
  printf("Привет, число: %+12.4g", -0.00012345);
  printf("\n%s\n", buffer);

  // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %-12.4g", -0.00012345);
  printf("Привет, число: %-12.4g", -0.00012345);
  printf("\n%s\n", buffer);

  // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
  s21_sprintf(buffer, "Привет, число: %012.4g", -0.00012345);
  printf("Привет, число: %012.4g", -0.00012345);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5G", -12345.6789);
  printf("Привет, число: %+10.5G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5G", -0.000000000);
  printf("Привет, число: %+10.5G", -0.000000000);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10.5g", 123.456);
  printf("Привет, число: %-10.5g", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10.5g", -123.456);
  printf("Привет, число: %-10.5g", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10.5G", 123.456);
  printf("Привет, число: %-10.5G", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-10.5G", -123.456);
  printf("Привет, число: %-10.5G", -123.456);
  printf("\n%s\n", buffer);
  s21_sprintf(buffer, "Привет, число: % 10.5g", -123.456);
  printf("Привет, число: % 10.5g", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 10.5G", 123.456);
  printf("Привет, число: % 10.5G", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 10.5G", -123.456);
  printf("Привет, число: % 10.5G", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `#` и статической шириной
  s21_sprintf(buffer, "Привет, число: %#10.5g", 123.456);
  printf("Привет, число: %#10.5g", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#10.5g", -123.456);
  printf("Привет, число: %#10.5g", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#10.5G", 123.456);
  printf("Привет, число: %#10.5G", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#10.5G", -123.456);
  printf("Привет, число: %#10.5G", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с динамической шириной
  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, 123.456);
  printf("Привет, число: %*.*g", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, -123.456);
  printf("Привет, число: %*.*g", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, 123.456);
  printf("Привет, число: %*.*G", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, -123.456);
  printf("Привет, число: %*.*G", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `-` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, 123.456);
  printf("Привет, число: %-*.*g", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, -123.456);
  printf("Привет, число: %-*.*g", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, 123.456);
  printf("Привет, число: %-*.*G", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, -123.456);
  printf("Привет, число: %-*.*G", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, 123.456);
  printf("Привет, число: %+*.*g", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, -123.456);
  printf("Привет, число: %+*.*g", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, 123.456);
  printf("Привет, число: %+*.*G", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, -123.456);
  printf("Привет, число: %+*.*G", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `#` и динамической шириной
  s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, 123.456);
  printf("Привет, число: %#*.*g", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, 123.456);
  printf("Привет, число: % *.*G", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, -123.456);
  printf("Привет, число: %#*.*g", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом пробел и динамической шириной
  s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, 123.456);
  printf("Привет, число: % *.*g", 20, 5, 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, -123.456);
  printf("Привет, число: % *.*g", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, -123.456);
  printf("Привет, число: % *.*G", 20, 5, -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и статической шириной
  s21_sprintf(buffer, "Привет, число: %+10.5g", 123.456);
  printf("Привет, число: %+10.5g", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5G", 123.456);
  printf("Привет, число: %+10.5G", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом пробел и статической шириной
  s21_sprintf(buffer, "Привет, число: % 10.5g", 123.456);
  printf("Привет, число: % 10.5g", 123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `0` и статической шириной
  s21_sprintf(buffer, "Привет, число: %010.5g", 123.456);
  printf("Привет, число: %010.5g", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5G", 123.456);
  printf("Привет, число: %010.5G", 123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5G", -123.456);
  printf("Привет, число: %010.5G", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5g", -123.456);
  printf("Привет, число: %010.5g", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5g", -123.456);
  printf("Привет, число: %+10.5g", -123.456);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5G", -123.456);
  printf("Привет, число: %+10.5G", -123.456);
  printf("\n%s\n", buffer);

  // Тесты с флагом `+` и статической шириной
  s21_sprintf(buffer, "Привет, число: %+10.5g", 12345.6789);
  printf("Привет, число: %+10.5g", 12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5G", 12345.6789);
  printf("Привет, число: %+10.5G", 12345.6789);
  printf("\n%s\n", buffer);

  // Тесты с флагом пробел и статической шириной
  s21_sprintf(buffer, "Привет, число: % 10.5g", 12345.6789);
  printf("Привет, число: % 10.5g", 12345.6789);
  printf("\n%s\n", buffer);

  // Тесты с флагом `0` и статической шириной
  s21_sprintf(buffer, "Привет, число: %010.5g", 12345.6789);
  printf("Привет, число: %010.5g", 12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5G", 12345.6789);
  printf("Привет, число: %010.5G", 12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5G", -12345.6789);
  printf("Привет, число: %010.5G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %010.5g", -12345.6789);
  printf("Привет, число: %010.5g", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5g", -12345.6789);
  printf("Привет, число: %+10.5g", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+10.5G", -12345.6789);
  printf("Привет, число: %+10.5G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-11G", -12345.6789);
  printf("Привет, число: %-11G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+11G", -12345.6789);
  printf("Привет, число: %+11G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %011G", -12345.6789);
  printf("Привет, число: %011G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 11G", -12345.6789);
  printf("Привет, число: % 11G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %-11.6G", -12345.6789);
  printf("Привет, число: %-11.6G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %+11.6G", -12345.6789);
  printf("Привет, число: %+11.6G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %011.6G", -12345.6789);
  printf("Привет, число: %011.6G", -12345.6789);
  printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: % 11.7G", -12345.6789);
  printf("Привет, число: % 11.7G", -12345.6789);
  printf("\n%s\n", buffer);

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
  } else if (format[*i] == 'x' || format[*i] == 'X' || format[*i] == 'o' ||
             format[*i] == 'O') {
    handle_hex_and_o(factor, str, l, f, format[*i] == 'X' || format[*i] == 'O',
                     format[*i]);
  } else if (format[*i] == 'e' || format[*i] == 'E') {
    handle_e(factor, str, l, f, format[*i] == 'E');
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

void print_char_reverse(char *str, char *buff, int width, int *l) {
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
    print_char_reverse(str, num_str, len, l);
    print_space(str, f->width - len - (sign != 0) - count_zero, l);
  } else {
    if (f->zero) {
      add_sign(sign, str, l);
      print_zero(str, f->width - len - (sign != 0), l);
      print_char_reverse(str, num_str, len, l);
    } else {
      if (sign == 2) str[(*l)++] = ' ';
      print_space(str, f->width - len - (sign != 0) - count_zero, l);
      if (sign == -1) str[(*l)++] = '-';
      if (sign == 1) str[(*l)++] = '+';
      print_zero(str, count_zero, l);
      print_char_reverse(str, num_str, len, l);
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
    print_char_reverse(str, num_str, len, l);
    print_space(str, f->width - len - count_zero, l);
  } else {
    if (f->zero) {
      print_zero(str, f->width - len, l);
      print_char_reverse(str, num_str, len, l);
    } else {
      print_space(str, f->width - len - count_zero, l);
      print_zero(str, count_zero, l);
      print_char_reverse(str, num_str, len, l);
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

void set_sharp_hex_and_o(flags *f, int num, char *str, int *l, int uppercase,
                         int value) {
  if (value == 8 && f->sharp) {
    if (num != 0) {
      str[(*l)++] = uppercase ? 'O' : 'o';
    } else {
      str[(*l)++] = ' ';
    }
  } else if (value == 16 && f->sharp) {
    if (num != 0) {
      str[(*l)++] = '0';
      str[(*l)++] = uppercase ? 'X' : 'x';
    } else {
      str[(*l)++] = ' ';
      str[(*l)++] = ' ';
    }
  }
}

int get_len_and_precision_hex_and_o(unsigned long long int num, int *len,
                                    flags *f, int *count_zero, char *buff,
                                    int uppercase, int value) {
  unsigned long long int temp = num;
  if (temp == 0) {
    *len = 1;
  } else {
    while (temp) {
      (*len)++;
      temp /= value;
    }
  }
  calculate_leading_zeros(count_zero, f, *len);
  int temp_len = 0;
  temp = num;
  if (num == 0) {
    if (f->precision < 1 && f->precision != -100) {
      buff[temp_len] = ' ';
    } else {
      buff[temp_len++] = '0';
    }
  } else {
    while (temp) {
      int digit = temp % value;
      if (digit > 9) {
        buff[temp_len++] = uppercase ? 'A' + digit - 10 : 'a' + digit - 10;
      } else {
        buff[temp_len++] = digit + '0';
      }
      temp /= value;
    }
  }
  return temp_len;
}

void handle_hex_and_o(va_list factor, char *str, int *l, flags *f,
                      int uppercase, char value) {
  if (value == 88 || value == 120) {
    value = 16;
  } else if (value == 79 || value == 111) {
    value = 8;
  }
  int flag_hex_o = 1;
  if (value == 16) {
    flag_hex_o++;
  }
  unsigned long long int num = 0;
  get_uns_number(factor, f, &num);
  int len = 0;
  int count_zero = 0;
  char temp_str[20] = {0};
  int temp_len = get_len_and_precision_hex_and_o(num, &len, f, &count_zero,
                                                 temp_str, uppercase, value);
  if (f->minus) {
    set_sharp_hex_and_o(f, num, str, l, uppercase, value);
    print_zero(str, count_zero, l);
    print_char_reverse(str, temp_str, temp_len, l);
    print_space(str, f->width - len - (f->sharp ? 2 : 0) - count_zero, l);
  } else {
    if (f->zero) {
      print_zero(str, f->width - len - (f->sharp ? flag_hex_o : 0), l);
    } else {
      print_space(str, f->width - len - (f->sharp ? 2 : 0) - count_zero, l);
    }
    set_sharp_hex_and_o(f, num, str, l, uppercase, value);
    print_zero(str, count_zero, l);
    print_char_reverse(str, temp_str, temp_len, l);
  }
}

void handle_p(va_list factor, char *str, int *l, flags *f) {
  void *ptr = va_arg(factor, void *);
  uintptr_t addr = (uintptr_t)ptr;
  char buffer[40] = {0};
  int len = 0;
  buffer[len++] = '0';
  buffer[len++] = 'x';
  if (addr == 0) {
    buffer[len++] = '0';
  } else {
    for (int i = 15; i >= 0; --i) {
      uint8_t byte = (addr >> (i * 4)) & 0xF;
      if ((byte != 0) || (i == 0)) {
        if (byte < 10) {
          buffer[len++] = '0' + byte;
        } else {
          buffer[len++] = 'a' + (byte - 10);
        }
      }
    }
  }
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
    print_char_reverse(str, int_str, len, l);
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
    sprintf(buff_str, "%d", buff_digit);                  // ЗАМЕНИТЬ НА С21
    print_char(str, buff_str, (int)strlen(buff_str), l);  // ЗАМЕНИТЬ НА С21
    int len = (int)strlen(buff_str);                      // ЗАМЕНИТЬ НА С21
    print_space(str, frac_len - len - count_zero, l);
  }
}

int get_exponent(long double *num) {
  int exponent = 0;
  if (*num != 0.0) {
    exponent = floorl(log10l(*num));
    *num /= powl(10, exponent);
  }
  return exponent;
}

void handle_e(va_list factor, char *str, int *l, flags *f, int uppercase) {
  long double num = 0.0;
  int sign = 0;
  get_doub_number_and_sign(factor, f, &num, &sign);
  if (isnan(num) || isinf(num)) {
    print_nan_inf(num, f, str, l, uppercase);
  } else {
    int precision = (f->precision == -100) ? 6 : f->precision;
    int exponent = get_exponent(&num);
    char num_str[50] = {0};
    snprintf(num_str, sizeof(num_str), "%.*Lf", precision, num);
    int exponent_sign = (exponent >= 0) ? '+' : '-';
    exponent = abs(exponent);
    char exponent_str[20] = {0};
    snprintf(exponent_str, sizeof(exponent_str), "%c%02d", exponent_sign,
             exponent);
    char str_buff[50] = {0};
    strcpy(str_buff, num_str);
    strcat(str_buff, uppercase ? "E" : "e");
    strcat(str_buff, exponent_str);
    int len = strlen(str_buff);
    int total_len = f->width;
    if (len > total_len) total_len = len;
    total_len -= (sign ? 2 : (f->space ? 1 : 0));
    if (f->minus) {
      add_sign(sign, str, l);
      print_char(str, str_buff, len, l);
      print_space(str, total_len - len, l);
    } else {
      if (f->zero) {
        add_sign(sign, str, l);
        print_zero(str, total_len - len, l);
      } else {
        print_space(str, total_len - len, l);
        add_sign(sign, str, l);
      }
      print_char(str, str_buff, len, l);
    }
  }
}

void handle_general(va_list factor, char *str, int *l, flags *f,
                    int uppercase) {
  long double num = 0.0;
  int sign = 0;
  get_doub_number_and_sign(factor, f, &num, &sign);
  int exponent = 0;
  long double temp = num;
  if (temp != 0.0) {
    exponent = floorl(log10l(temp));
    temp /= powl(10, exponent);
  }
  if (f->precision == -100) {
    f->precision = 6;
  }
  if (isnan(num) || isinf(num)) {
    print_nan_inf(num, f, str, l, uppercase);
  } else if (exponent >= -4 && exponent < f->precision) {
    f_in_g(num, f, sign, str, l);

  } else {
    e_in_g(&num, f, uppercase, sign, str, l);
  }
}

void e_in_g(long double *num, flags *f, int uppercase, int sign, char *str,
            int *l) {
  int exponent = get_exponent(num);
  char num_str[50] = {0};
  snprintf(num_str, sizeof(num_str), "%.*Lf", f->precision - 1, *num);
  int exponent_sign = (exponent >= 0) ? '+' : '-';
  exponent = abs(exponent);
  char exponent_str[20] = {0};
  snprintf(exponent_str, sizeof(exponent_str), "%c%02d", exponent_sign,
           exponent);
  char str_buff[50] = {0};
  strcpy(str_buff, num_str);
  strcat(str_buff, uppercase ? "E" : "e");
  strcat(str_buff, exponent_str);
  int len = strlen(str_buff);
  int total_len = f->width;
  if (len > total_len) total_len = len;
  if (sign) {
    total_len--;
  }
  if (f->minus) {
    add_sign(sign, str, l);
    print_char(str, str_buff, len, l);
    print_space(str, total_len - len, l);
  } else {
    if (f->zero) {
      add_sign(sign, str, l);
      print_zero(str, total_len - len, l);
    } else {
      print_space(str, total_len - len, l);
      add_sign(sign, str, l);
    }
    print_char(str, str_buff, len, l);
  }
}

void f_in_g(long double num, flags *f, int sign, char *str, int *l) {
  if ((int)num != 0 || (((int)num == 0) && (num - (int)num == 0))) {
    f_in_g_ferst(f, num, sign, str, l);
  } else {
    f_in_g_second(f, num, sign, str, l);
  }
}

void f_in_g_ferst(flags *f, long double num, int sign, char *str, int *l) {
  int frac_len = f->precision;
  int int_part = (int)num;
  int flag_point = 1;
  int int_len = 0;
  long double temp = num;
  if (f->precision == 0) {
    flag_point = 0;
    int digit = (int)(temp * 10) % 10;
    if (digit > 5) {
      (temp)++;
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
  if (num > 1000) {
    frac_len -= 5;
  } else {
    frac_len -= 3;
  }
  long double zxc = num;
  int len = int_len + frac_len + flag_point + (sign != 0);
  if (f->precision == int_len) {
    len = len - frac_len - flag_point;
    zxc = round(num);
  }
  int flagqwe = 1;
  if (num - (int)num == 0 && (int)num == 0) {
    flagqwe = 0;
    len -= 3;
  }
  print_f_in_g_ferst(f, sign, str, l, zxc, int_len, flagqwe, frac_len, len);
}

void print_f_in_g_ferst(flags *f, int sign, char *str, int *l, long double zxc,
                        int int_len, int flagqwe, int frac_len, int len) {
  if (f->minus) {
    add_sign(sign, str, l);
    print_int_part(str, l, zxc);
    if (f->precision != int_len && flagqwe) {
      print_point(str, f, l);
      print_frac_part(str, l, zxc, frac_len);
    }
    print_space(str, f->width - len, l);
  } else {
    if (f->zero) {
      add_sign(sign, str, l);
      print_zero(str, f->width - len, l);
    } else {
      print_space(str, f->width - len, l);
      add_sign(sign, str, l);
    }
    print_int_part(str, l, zxc);
    if (f->precision != int_len && flagqwe) {
      print_point(str, f, l);
      print_frac_part(str, l, zxc, frac_len);
    }
  }
}

void f_in_g_second(flags *f, long double num, int sign, char *str, int *l) {
  int temp = (int)(num * pow(10, 9));
  float tempqwe = temp / 10.0;
  tempqwe = round(tempqwe);
  int asd = (int)tempqwe;
  int last_zero = 0;
  int znach_cifri = 0;
  int temp_temp = asd;
  while (temp_temp % 10 == 0) {
    last_zero++;
    temp_temp /= 10;
  }
  int qwe = temp_temp;
  while (temp_temp % 10 != 0) {
    znach_cifri++;
    temp_temp /= 10;
  }
  int ferst_zero = 8 - last_zero - znach_cifri;
  if (f->precision < znach_cifri && f->precision != -100) {
    qwe = qwe * pow(10, f->precision - znach_cifri);
    qwe = round(qwe);
    znach_cifri = f->precision;
  }
  char buffZXC[50] = {'0'};
  buffZXC[1] = '.';
  for (int i = 2; i < 2 + ferst_zero; i++) {
    buffZXC[i] = '0';
  }
  for (int i = 2 + ferst_zero + znach_cifri - 1; i >= 2 + ferst_zero; i--) {
    buffZXC[i] = (qwe % 10) + '0';
    qwe /= 10;
  }
  int len = 2 + ferst_zero + znach_cifri;
  if (f->width > 11) {
    f->width--;
  }
  print_f_in_g_second(f, sign, str, l, len, buffZXC);
}

void print_f_in_g_second(flags *f, int sign, char *str, int *l, int len,
                         char *buffZXC) {
  if (f->minus) {
    add_sign(sign, str, l);
    print_char(str, buffZXC, len, l);
    print_space(str, f->width - len, l);
  } else {
    if (f->zero) {
      add_sign(sign, str, l);
      print_zero(str, f->width - len, l);
    } else {
      print_space(str, f->width - len, l);
      add_sign(sign, str, l);
    }
    print_char(str, buffZXC, len, l);
  }
}