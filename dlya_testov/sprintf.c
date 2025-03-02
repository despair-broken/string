#include "sprintf.h"

int main() {
  char buffer[10000];

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
  float f_num = 123.456f;
  s21_sprintf(buffer, "Привет, число: %10.5f", f_num);
  printf("Привет, число: %10.5f", f_num);
  printf("\n%s\n", buffer);

  f_num = -123.456f;
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

  int num = 0;

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

  int www = 42;
  int *ptr = &www;

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
  s21_sprintf(buffer, "Привет, символ: %c", 65); // 'A'
  printf("Привет, символ: %c\n", 65);
  printf("%s\n", buffer);

  // Широкий символ (хотя %c ожидает int)
  // ВНИМАНИЕ: поведение может быть непредсказуемым, так как %c ожидает int
  // Это тест на потенциальную ошибку, а не на корректную работу!
  s21_sprintf(buffer, "Привет, символ: %c", 0x10410); // Пример широкого символа
  printf("Привет, символ: %c\n", 0x10410);
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

  // // Максимальное значение ЕСЛИ БУДУ ПЕРЕДЕЛЫВАТЬ ТУТ ПЕРЕДЕЛАТЬ!
  // s21_sprintf(buffer, "Octal with long: %lo", LONG_MAX);
  // printf("Octal with long: %lo\n", LONG_MAX);
  // printf("%s\n", buffer);

  // // С длинным целым  // // Максимальное значение ЕСЛИ БУДУ ПЕРЕДЕЛЫВАТЬ ТУТ
  // ПЕРЕДЕЛАТЬ! s21_sprintf(buffer, "Hex with long: %lX", LONG_MAX);
  // printf("Hex with long: %lX\n", LONG_MAX);
  // printf("%s\n", buffer);

  // // С длинным целым  ЕСЛИ БУДУ ПЕРЕДЕЛЫВАТЬ ТУТ ПЕРЕДЕЛАТЬ!
  // s21_sprintf(buffer, "Hex with long: %lx", LONG_MAX);
  // printf("Hex with long: %lx\n", LONG_MAX);
  // printf("%s\n", buffer);

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

  // s21_sprintf(buffer, "Привет, число: %10.15lf", -123.456); не проходит тест
  // printf("Привет, число: %10.15lf", -123.456);
  // printf("\n%s\n", buffer);

  // Краевые случаи
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

  s21_sprintf(buffer, "Привет, число: %010e", NAN);
  printf("Привет, число: %010e", NAN);
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

  s21_sprintf(buffer, "Привет, число: %e  qq", INFINITY);
  printf("Привет, число: %e  qq", INFINITY);
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
  f->precision = -1;
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
  } else if (format[*i] == 'f') {
    handle_float(factor, str, l, f);
    // } else if (format[*i] == 'g' || format[*i] == 'G') {
    //   handle_general(factor, str, l, f, format[*i] == 'G');
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
  int flag_zero = 1;
  if (c == '\0') {
    c = ' ';
    flag_zero = 0;
  }
  if (f->minus) {
    if (flag_zero) {
      str[(*l)++] = c;
    }
    for (int i = 1; i < f->width; i++) {
      str[(*l)++] = ' ';
    }
  } else if (f->width > 1) {
    for (int i = 1; i < f->width; i++) {
      str[(*l)++] = ' ';
    }
    if (flag_zero) {
      str[(*l)++] = c;
    }
  } else {
    if (flag_zero) {
      str[(*l)++] = c;
    }
  }
}

void handle_string(va_list factor, char *str, int *l, flags *f) {
  char *s = va_arg(factor, char *);
  if (s == NULL) {
    s = "(null)";
  }
  int len = strlen(s);
  char new_s[len + 1];
  strcpy(new_s, s);
  int actual_len = len;
  if (f->precision > -1 && f->precision < actual_len) {
    actual_len = f->precision;
  }
  if (f->minus) {
    for (int i = 0; i < actual_len; i++) {
      str[(*l)++] = new_s[i];
    }
    for (int i = 0; i < f->width - actual_len; i++) {
      str[(*l)++] = ' ';
    }
  } else {
    for (int i = 0; i < f->width - actual_len; i++) {
      str[(*l)++] = ' ';
    }
    for (int i = 0; i < actual_len; i++) {
      str[(*l)++] = new_s[i];
    }
  }
}

void handle_int(va_list factor, char *str, int *l, flags *f) {
  long long num = 0;
  if (f->short_) {
    short s_num = va_arg(factor, int);
    num = s_num;
  } else if (f->long_) {
    long l_num = va_arg(factor, long);
    num = l_num;
  } else {
    num = va_arg(factor, int);
  }
  char num_str[50] = {0};
  int len = 0;
  int sign = 0;
  if (num < 0) {
    sign = -1;
    num = -num;
  } else if (f->plus) {
    sign = 1;
  } else if (f->space) {
    sign = 2;
  }
  int flag_sign = (sign != 0);
  int flag_lm = 0;
  if (num == LONG_MIN) {
    num = LONG_MAX;
    flag_lm = 1;
  }
  if (num == 0) {
    sign = 0;
    if (f->precision == 0)
      num_str[len++] = ' ';
    else
      num_str[len++] = '0';
  } else {
    while (num > 0) {
      if (flag_lm) {
        num_str[len++] = num % 10 + 1 + '0';
        num /= 10;
        flag_lm = 0;
      }
      num_str[len++] = num % 10 + '0';
      num /= 10;
    }
  }
  int count_zero = 0;
  if (f->precision > 0 && f->precision > len)
    count_zero = f->precision - len;
  if (f->minus) {
    if (sign == -1) {
      str[(*l)++] = '-';
    } else if (sign == 1) {
      str[(*l)++] = '+';
    } else if (sign == 2) {
      str[(*l)++] = ' ';
    }
    for (int i = 0; i < count_zero; i++) {
      str[(*l)++] = '0';
    }
    for (int i = len - 1; i >= 0; i--) {
      str[(*l)++] = num_str[i];
    }
    for (int i = 0; i < f->width - len - flag_sign - count_zero; i++) {
      str[(*l)++] = ' ';
    }
  } else {
    if (f->zero) {
      if (sign == -1) {
        str[(*l)++] = '-';
      } else if (sign == 1) {
        str[(*l)++] = '+';
      } else if (sign == 2) {
        str[(*l)++] = ' ';
      }
      for (int i = 0; i < f->width - len - flag_sign; i++) {
        str[(*l)++] = '0';
      }
      for (int i = len - 1; i >= 0; i--) {
        str[(*l)++] = num_str[i];
      }
    } else {
      if (sign == 2) {
        str[(*l)++] = ' ';
      }
      for (int i = 0; i < f->width - len - flag_sign - count_zero; i++) {
        str[(*l)++] = ' ';
      }
      if (sign == -1) {
        str[(*l)++] = '-';
      } else if (sign == 1) {
        str[(*l)++] = '+';
      }
      for (int i = 0; i < count_zero; i++) {
        str[(*l)++] = '0';
      }
      for (int i = len - 1; i >= 0; i--) {
        str[(*l)++] = num_str[i];
      }
    }
  }
}

void handle_unsigned(va_list factor, char *str, int *l, flags *f) {
  unsigned long long num = 0;
  if (f->short_) {
    unsigned short s_num = va_arg(factor, int);
    num = s_num;
  } else if (f->long_) {
    unsigned long l_num = va_arg(factor, unsigned long);
    num = l_num;
  } else {
    unsigned u_num = va_arg(factor, unsigned int);
    num = u_num;
  }
  char num_str[50] = {0};
  int len = 0;
  if (num == 0) {
    if (f->precision == 0)
      num_str[len++] = ' ';
    else
      num_str[len++] = '0';
  } else {
    while (num > 0) {
      num_str[len++] = num % 10 + '0';
      num /= 10;
    }
  }
  int count_zero = 0;
  if (f->precision > 0 && f->precision > len)
    count_zero = f->precision - len;
  if (f->minus) {
    for (int i = 0; i < count_zero; i++) {
      str[(*l)++] = '0';
    }
    for (int i = len - 1; i >= 0; i--) {
      str[(*l)++] = num_str[i];
    }
    for (int i = 0; i < f->width - len - count_zero; i++) {
      str[(*l)++] = ' ';
    }
  } else {
    if (f->zero) {
      for (int i = 0; i < f->width - len; i++) {
        str[(*l)++] = '0';
      }
      for (int i = len - 1; i >= 0; i--) {
        str[(*l)++] = num_str[i];
      }
    } else {
      for (int i = 0; i < f->width - len - count_zero; i++) {
        str[(*l)++] = ' ';
      }
      for (int i = 0; i < count_zero; i++) {
        str[(*l)++] = '0';
      }
      for (int i = len - 1; i >= 0; i--) {
        str[(*l)++] = num_str[i];
      }
    }
  }
}

void handle_float(va_list factor, char *str, int *l, flags *f) {
  long double num = 0.0;
  if (f->longlong_) {
    num = va_arg(factor, long double);
  } else if (f->long_) {
    num = va_arg(factor, double);
  } else if (f->short_) {
    float f_num = (float)va_arg(factor, double);
    num = (long double)f_num;
  } else {
    num = va_arg(factor, double);
  }
  // int flag_zero = f->zero;
  int flag_inf_nan = 1;
  if (isnan(num)) {
    flag_inf_nan = 0;
    int len = 3;
    if (f->minus) {
      for (int i = 0; i < len; i++) {
        str[(*l)++] = "nan"[i];
      }
      for (int i = 0; i < f->width - len; i++) {
        str[(*l)++] = ' ';
      }
    } else {
      for (int i = 0; i < f->width - len; i++) {
        str[(*l)++] = ' ';
      }
      for (int i = 0; i < len; i++) {
        str[(*l)++] = "nan"[i];
      }
    }
  } else if (isinf(num)) {
    flag_inf_nan = 0;
    if (num < 0) {
      int len = 4;
      if (f->minus) {
        for (int i = 0; i < len; i++) {
          str[(*l)++] = "-inf"[i];
        }
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
      } else {
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
        for (int i = 0; i < len; i++) {
          str[(*l)++] = "-inf"[i];
        }
      }
    } else {
      int len = 3;
      if (f->minus) {
        len = 3;
        for (int i = 0; i < len; i++) {
          str[(*l)++] = "inf"[i];
        }
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
      } else {
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
        for (int i = 0; i < len; i++) {
          str[(*l)++] = "inf"[i];
        }
      }
    }
  }
  int sign = 0;
  if (signbit(num)) {
    sign = -1;
    num = -num;
  } else if (f->plus) {
    sign = 1;
  } else if (f->space) {
    sign = 2;
  }
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
  int frac_len = f->precision;
  if (f->precision == -1) {
    frac_len = 6;
  }
  int len = int_len + frac_len + flag_point + (sign != 0);
  if (flag_inf_nan) {
    if (f->minus) {
      if (sign == -1) {
        str[(*l)++] = '-';
      } else if (sign == 1) {
        str[(*l)++] = '+';
      } else if (sign == 2) {
        str[(*l)++] = ' ';
      }
      print_int_part(str, l, num);
      if (f->precision != 0) {
        str[(*l)++] = '.';
      }
      print_frac_part(str, l, num, frac_len);
      for (int i = 0; i < f->width - len; i++) {
        str[(*l)++] = ' ';
      }
    } else {
      if (f->zero) {
        if (sign == -1) {
          str[(*l)++] = '-';
        } else if (sign == 1) {
          str[(*l)++] = '+';
        } else if (sign == 2) {
          str[(*l)++] = ' ';
        }
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = '0';
        }
      } else {
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
        if (sign == -1) {
          str[(*l)++] = '-';
        } else if (sign == 1) {
          str[(*l)++] = '+';
        } else if (sign == 2) {
          str[(*l)++] = ' ';
        }
      }
      print_int_part(str, l, num);
      if (f->precision != 0) {
        str[(*l)++] = '.';
      }
      print_frac_part(str, l, num, frac_len);
    }
  }
}

void handle_hex(va_list factor, char *str, int *l, flags *f, int uppercase) {
  unsigned long long int num = 0;
  if (f->long_) {
    num = va_arg(factor, unsigned long long int);
  } else if (f->short_) {
    num = (unsigned short int)va_arg(factor, int);
  } else {
    num = va_arg(factor, unsigned int);
  }
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
  if (f->precision > 0 && f->precision > len)
    count_zero = f->precision - len;
  char temp_str[20] = {0};
  int temp_len = 0;
  temp = num;
  if (num == 0) {
    if (f->precision < 1 && f->precision != -1) {
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
    for (int i = 0; i < count_zero; i++) {
      str[(*l)++] = '0';
    }
    for (int i = temp_len - 1; i >= 0; i--) {
      str[(*l)++] = temp_str[i];
    }
    for (int i = 0; i < f->width - len - (f->sharp ? 2 : 0) - count_zero; i++) {
      str[(*l)++] = ' ';
    }
  } else {
    if (f->zero) {
      for (int i = 0; i < f->width - len - (f->sharp ? 2 : 0) - count_zero;
           i++) {
        str[(*l)++] = '0';
      }
      for (int i = 0; i < count_zero; i++) {
        str[(*l)++] = '0';
      }
    } else {
      for (int i = 0; i < f->width - len - (f->sharp ? 2 : 0) - count_zero;
           i++) {
        str[(*l)++] = ' ';
      }
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
    for (int i = 0; i < count_zero; i++) {
      str[(*l)++] = '0';
    }
    for (int i = temp_len - 1; i >= 0; i--) {
      str[(*l)++] = temp_str[i];
    }
  }
}

void handle_o(va_list factor, char *str, int *l, flags *f) {
  unsigned long int num = 0;
  if (f->long_) {
    num = va_arg(factor, unsigned long int);
  } else if (f->short_) {
    num = (unsigned short int)va_arg(factor, int);
  } else {
    num = va_arg(factor, unsigned int);
  }
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
  if (f->precision > 0 && f->precision > len)
    count_zero = f->precision - len;
  char temp_str[20] = {0};
  int temp_len = 0;
  temp = num;
  if (num == 0) {
    if (f->precision < 1 && f->precision != -1) {
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
    for (int i = 0; i < count_zero; i++) {
      str[(*l)++] = '0';
    }
    for (int i = temp_len - 1; i >= 0; i--) {
      str[(*l)++] = temp_str[i];
    }
    for (int i = 0; i < f->width - len - (f->sharp ? 1 : 0) - count_zero; i++) {
      str[(*l)++] = ' ';
    }
  } else {
    if (f->zero) {
      for (int i = 0; i < f->width - len - (f->sharp ? 1 : 0) - count_zero;
           i++) {
        str[(*l)++] = '0';
      }
      for (int i = 0; i < count_zero; i++) {
        str[(*l)++] = '0';
      }
    } else {
      for (int i = 0; i < f->width - len - (f->sharp ? 1 : 0) - count_zero;
           i++) {
        str[(*l)++] = ' ';
      }
    }
    if (f->sharp) {
      if (num != 0) {
        str[(*l)++] = '0';
      } else {
        str[(*l)++] = ' ';
      }
    }
    for (int i = 0; i < count_zero; i++) {
      str[(*l)++] = '0';
    }
    for (int i = temp_len - 1; i >= 0; i--) {
      str[(*l)++] = temp_str[i];
    }
  }
}

void handle_p(va_list factor, char *str, int *l, flags *f) {
  void *ptr = va_arg(factor, void *);
  char buffer[20];
  sprintf(buffer, "%p", ptr);
  int len = strlen(buffer);
  if (f->minus) {
    for (int i = 0; i < len; i++) {
      str[(*l)++] = buffer[i];
    }
    for (int i = 0; i < f->width - len; i++) {
      str[(*l)++] = ' ';
    }
  } else {
    if (f->zero) {
      for (int i = 0; i < f->width - len; i++) {
        str[(*l)++] = '0';
      }
      for (int i = 0; i < len; i++) {
        str[(*l)++] = buffer[i];
      }
    } else {
      for (int i = 0; i < f->width - len; i++) {
        str[(*l)++] = ' ';
      }
      for (int i = 0; i < len; i++) {
        str[(*l)++] = buffer[i];
      }
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
    for (int i = len - 1; i >= 0; i--) {
      str[(*l)++] = int_str[i];
    }
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
    for (int i = 0; i < count_zero - flag_zero; i++) {
      str[(*l)++] = '0';
    }
    if ((int)(frac * 10) >= 5) {
      buff_digit++;
    }
    char buff_str[20];
    sprintf(buff_str, "%d", buff_digit);
    for (size_t i = 0; i < strlen(buff_str); i++) {
      str[(*l)++] = buff_str[i];
    }
    int len = (int)strlen(buff_str);
    for (int i = 0; i < frac_len - len - count_zero; i++) {
      str[(*l)++] = ' ';
    }
  }
}

void handle_e(va_list factor, char *str, int *l, flags *f, int uppercase) {
  long double num = 0.0;
  if (f->longlong_) {
    num = va_arg(factor, long double);
  } else if (f->long_) {
    num = va_arg(factor, double);
  } else if (f->short_) {
    float f_num = (float)va_arg(factor, double);
    num = (long double)f_num;
  } else {
    num = va_arg(factor, double);
  }
  int flag_inf_nan = 1;
  if (isnan(num)) {
    flag_inf_nan = 0;
    int len = 3;
    if (f->minus) {
      for (int i = 0; i < len; i++) {
        str[(*l)++] = "nan"[i];
      }
      for (int i = 0; i < f->width - len; i++) {
        str[(*l)++] = ' ';
      }
    } else {
      for (int i = 0; i < f->width - len; i++) {
        str[(*l)++] = ' ';
      }
      for (int i = 0; i < len; i++) {
        str[(*l)++] = "nan"[i];
      }
    }
  } else if (isinf(num)) {
    flag_inf_nan = 0;
    if (num < 0) {
      int len = 4;
      if (f->minus) {
        for (int i = 0; i < len; i++) {
          str[(*l)++] = "-inf"[i];
        }
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
      } else {
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
        for (int i = 0; i < len; i++) {
          str[(*l)++] = "-inf"[i];
        }
      }
    } else {
      int len = 3;
      if (f->minus) {
        for (int i = 0; i < len; i++) {
          str[(*l)++] = "inf"[i];
        }
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
      } else {
        for (int i = 0; i < f->width - len; i++) {
          str[(*l)++] = ' ';
        }
        for (int i = 0; i < len; i++) {
          str[(*l)++] = "inf"[i];
        }
      }
    }
  }
  int sign = 0;
  if (signbit(num)) {
    sign = -1;
    num = -num;
  } else if (f->plus) {
    sign = 1;
  } else if (f->space) {
    sign = 2;
  }
  int precision = (f->precision == -1) ? 6 : f->precision;
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
  if (flag_inf_nan) {
    if (f->minus) {
      if (sign == -1)
        str[(*l)++] = '-';
      else if (sign == 1)
        str[(*l)++] = '+';
      else if (sign == 2)
        str[(*l)++] = ' ';
      for (int i = 0; num_str[i] != '\0'; i++)
        str[(*l)++] = num_str[i];
      str[(*l)++] = (uppercase ? 'E' : 'e');
      for (int i = 0; exponent_str[i] != '\0'; i++)
        str[(*l)++] = exponent_str[i];
      for (int i = 0; i < count_space; i++)
        str[(*l)++] = ' ';
    } else {
      if (f->zero) {
        if (sign == -1)
          str[(*l)++] = '-';
        else if (sign == 1)
          str[(*l)++] = '+';
        else if (sign == 2)
          str[(*l)++] = ' ';
        for (int i = 0; i < count_space - 1; i++)
          str[(*l)++] = '0';
      } else {
        for (int i = 0; i < count_space; i++)
          str[(*l)++] = ' ';
        if (sign == -1)
          str[(*l)++] = '-';
        else if (sign == 1)
          str[(*l)++] = '+';
        else if (sign == 2)
          str[(*l)++] = ' ';
      }
      for (int i = 0; num_str[i] != '\0'; i++)
        str[(*l)++] = num_str[i];
      str[(*l)++] = (uppercase ? 'E' : 'e');
      for (int i = 0; exponent_str[i] != '\0'; i++)
        str[(*l)++] = exponent_str[i];
    }
  }
}