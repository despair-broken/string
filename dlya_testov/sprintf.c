#include "sprintf.h"

int main() {
  char buffer[1000];

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

  // // Тесты с модификатором `L`
  // s21_sprintf(buffer, "Привет, число: %10.5Lf", 123.456L);
  // printf("Привет, число: %10.5Lf", 123.456L);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %10.5Lf", -123.456L);
  // printf("Привет, число: %10.5Lf", -123.456L);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %20ld", LONG_MIN);
  // printf("Привет, число: %20ld", LONG_MIN);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*ld", 20, LONG_MIN);
  // printf("Привет, число: %*ld", 20, LONG_MIN);
  // printf("\n%s\n", buffer);

  // // Без флага, обычная ширина
  // s21_sprintf(buffer, "Привет, символ: %5c", 'A');
  // printf("Привет, символ: %5c", 'A');
  // printf("\n%s\n", buffer);

  // // Без флага, динамическая ширина
  // s21_sprintf(buffer, "Привет, символ: %*c", 5, 'A');
  // printf("Привет, символ: %*c", 5, 'A');
  // printf("\n%s\n", buffer);

  // // С флагом `-`, обычная ширина
  // s21_sprintf(buffer, "Привет, символ: %-5c", 'A');
  // printf("Привет, символ: %-5c", 'A');
  // printf("\n%s\n", buffer);

  // // С флагом `-`, динамическая ширина
  // s21_sprintf(buffer, "Привет, символ: %-*c", 5, 'A');
  // printf("Привет, символ: %-*c", 5, 'A');
  // printf("\n%s\n", buffer);

  // // Без флага, обычная ширина
  // s21_sprintf(buffer, "Привет, строка: %10.5s", "HelloWorld");
  // printf("Привет, строка: %10.5s", "HelloWorld");
  // printf("\n%s\n", buffer);

  // // Без флага, динамическая ширина и точность
  // s21_sprintf(buffer, "Привет, строка: %*.*s", 10, 5, "HelloWorld");
  // printf("Привет, строка: %*.*s", 10, 5, "HelloWorld");
  // printf("\n%s\n", buffer);

  // // С флагом `-`, обычная ширина
  // s21_sprintf(buffer, "Привет, строка: %-10.5s", "HelloWorld");
  // printf("Привет, строка: %-10.5s", "HelloWorld");
  // printf("\n%s\n", buffer);

  // // С флагом `-`, динамическая ширина и точность
  // s21_sprintf(buffer, "Привет, строка: %-*.*s", 10, 5, "HelloWorld");
  // printf("Привет, строка: %-*.*s", 10, 5, "HelloWorld");
  // printf("\n%s\n", buffer);

  // // Без флага, обычная ширина
  // s21_sprintf(buffer, "Привет, строка: %5s", "HelloWorld");
  // printf("Привет, строка: %5s", "HelloWorld");
  // printf("\n%s\n", buffer);

  // // Без флага, динамическая ширина
  // s21_sprintf(buffer, "Привет, строка: %*s", 5, "HelloWorld");
  // printf("Привет, строка: %*s", 5, "HelloWorld");
  // printf("\n%s\n", buffer);

  // // С флагом `-`, обычная ширина
  // s21_sprintf(buffer, "Привет, строка: %-5s", "HelloWorld");
  // printf("Привет, строка: %-5s", "HelloWorld");
  // printf("\n%s\n", buffer);

  // // С флагом `-`, динамическая ширина
  // s21_sprintf(buffer, "Привет, строка: %-*s", 5, "HelloWorld");
  // printf("Привет, строка: %-*s", 5, "HelloWorld");
  // printf("\n%s\n", buffer);

  // // Без флага, обычная ширина
  // s21_sprintf(buffer, "Привет, символ: %5c", 'A');
  // printf("Привет, символ: %5c", 'A');
  // printf("\n%s\n", buffer);

  // // Без флага, динамическая ширина
  // s21_sprintf(buffer, "Привет, символ: %*c", 5, 'A');
  // printf("Привет, символ: %*c", 5, 'A');
  // printf("\n%s\n", buffer);

  // // С флагом `-`, обычная ширина
  // s21_sprintf(buffer, "Привет, символ: %-5c", 'A');
  // printf("Привет, символ: %-5c", 'A');
  // printf("\n%s\n", buffer);

  // // С флагом `-`, динамическая ширина
  // s21_sprintf(buffer, "Привет, символ: %-*c", 5, 'A');
  // printf("Привет, символ: %-*c", 5, 'A');
  // printf("\n%s\n", buffer);

  // // Крайний случай: ширина равна 0
  // s21_sprintf(buffer, "Привет, символ: %c", 'A');
  // printf("Привет, символ: %c", 'A');
  // printf("\n%s\n", buffer);

  // // Крайний случай: символ равен '\0'
  // s21_sprintf(buffer, "Привет, символ: %5c", '\0');
  // printf("Привет, символ: %5c", '\0');
  // printf("\n%s\n", buffer);

  // // Без флага, обычная ширина и точность
  // s21_sprintf(buffer, "Привет, строка: %10.5s", "HelloWorld");
  // printf("Привет, строка: %10.5s", "HelloWorld");
  // printf("\n%s\n", buffer);

  // // Без флага, динамическая ширина и точность
  // s21_sprintf(buffer, "Привет, строка: %*.*s", 10, 5, "HelloWorld");
  // printf("Привет, строка: %*.*s", 10, 5, "HelloWorld");
  // printf("\n%s\n", buffer);

  // // С флагом `-`, обычная ширина и точность
  // s21_sprintf(buffer, "Привет, строка: %-10.5s", "HelloWorld");
  // printf("Привет, строка: %-10.5s", "HelloWorld");
  // printf("\n%s\n", buffer);

  // // С флагом `-`, динамическая ширина и точность
  // s21_sprintf(buffer, "Привет, строка: %-*.*s", 10, 5, "HelloWorld");
  // printf("Привет, строка: %-*.*s", 10, 5, "HelloWorld");
  // printf("\n%s\n", buffer);

  // // Крайний случай: строка пуста
  // s21_sprintf(buffer, "Привет, строка: %10s", "");
  // printf("Привет, строка: %10s", "");
  // printf("\n%s\n", buffer);

  // // Крайний случай: ширина равна 0
  // s21_sprintf(buffer, "Привет, строка: %s", "Hello");
  // printf("Привет, строка: %s", "Hello");
  // printf("\n%s\n", buffer);

  // // Крайний случай: точность равна 0
  // s21_sprintf(buffer, "Привет, строка: %10.0s", "Hello");
  // printf("Привет, строка: %10.0s", "Hello");
  // printf("\n%s\n", buffer);

  // // Без флага
  // s21_sprintf(buffer, "Привет, число: %5d", 123);
  // printf("Привет, число: %5d", 123);
  // printf("\n%s\n", buffer);

  // // С флагом `-`
  // s21_sprintf(buffer, "Привет, число: %-5d", 123);
  // printf("Привет, число: %-5d", 123);
  // printf("\n%s\n", buffer);

  // // С флагом `+`
  // s21_sprintf(buffer, "Привет, число: %+5d", 123);
  // printf("Привет, число: %+5d", 123);
  // printf("\n%s\n", buffer);

  // // С флагом пробел
  // s21_sprintf(buffer, "Привет, число: % 5d", 123);
  // printf("Привет, число: % 5d", 123);
  // printf("\n%s\n", buffer);

  // // С флагом `0`
  // s21_sprintf(buffer, "Привет, число: %05d", 123);
  // printf("Привет, число: %05d", 123);
  // printf("\n%s\n", buffer);

  // // С флагом `+` и `0`
  // s21_sprintf(buffer, "Привет, число: %+05d", 123);
  // printf("Привет, число: %+05d", 123);
  // printf("\n%s\n", buffer);

  // // С флагом пробел и `0`
  // s21_sprintf(buffer, "Привет, число: % 05d", 123);
  // printf("Привет, число: % 05d", 123);
  // printf("\n%s\n", buffer);
  // // Без флага
  // s21_sprintf(buffer, "Привет, число: %*d", 5, 123);
  // printf("Привет, число: %*d", 5, 123);
  // printf("\n%s\n", buffer);

  // // С флагом `-`
  // s21_sprintf(buffer, "Привет, число: %-*d", 5, 123);
  // printf("Привет, число: %-*d", 5, 123);
  // printf("\n%s\n", buffer);

  // // С флагом `+`
  // s21_sprintf(buffer, "Привет, число: %+*d", 5, 123);
  // printf("Привет, число: %+*d", 5, 123);
  // printf("\n%s\n", buffer);

  // // С флагом пробел
  // s21_sprintf(buffer, "Привет, число: % *d", 5, 123);
  // printf("Привет, число: % *d", 5, 123);
  // printf("\n%s\n", buffer);

  // // С флагом `0`
  // // Не применимо для динамической ширины

  // // Длина `h`
  // s21_sprintf(buffer, "Привет, число: %5hd", (short)123);
  // printf("Привет, число: %5hd", (short)123);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %5hd", (short)-123);
  // printf("Привет, число: %5hd", (short)-123);
  // printf("\n%s\n", buffer);

  // // Длина `l`
  // s21_sprintf(buffer, "Привет, число: %5ld", (long)123);
  // printf("Привет, число: %5ld", (long)123);
  // printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %5.15ld", (long)-123);
  printf("Привет, число: %5.15ld", (long)-123);
  printf("\n%s\n", buffer);

  // // Ширина равна 0
  // s21_sprintf(buffer, "Привет, число: %0d", 123);
  // printf("Привет, число: %0d", 123);
  // printf("\n%s\n", buffer);

  // // Число равно 0
  // s21_sprintf(buffer, "Привет, число: %5d", 0);
  // printf("Привет, число: %5d", 0);
  // printf("\n%s\n", buffer);

  // // Число равно -0 (выводится как 0)
  // s21_sprintf(buffer, "Привет, число: %5d", -0);
  // printf("Привет, число: %5d", -0);
  // printf("\n%s\n", buffer);

  // // Отрицательное число
  // s21_sprintf(buffer, "Привет, число: %5d", -123);
  // printf("Привет, число: %5d", -123);
  // printf("\n%s\n", buffer);

  // // int
  // s21_sprintf(buffer, "Привет, число: %5d", 123);
  // printf("Привет, число: %5d", 123);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %5d", -123);
  // printf("Привет, число: %5d", -123);
  // printf("\n%s\n", buffer);

  // // short
  // s21_sprintf(buffer, "Привет, число: %5hd", (short)123);
  // printf("Привет, число: %5hd", (short)123);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %5hd", (short)-123);
  // printf("Привет, число: %5hd", (short)-123);
  // printf("\n%s\n", buffer);

  // // long
  // s21_sprintf(buffer, "Привет, число: %5ld", (long)123);
  // printf("Привет, число: %5ld", (long)123);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %5ld", (long)-123);
  // printf("Привет, число: %5ld", (long)-123);
  // printf("\n%s\n", buffer);

  // // int
  // s21_sprintf(buffer, "Привет, число: %*d", 5, 123);
  // printf("Привет, число: %*d", 5, 123);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*d", 5, -123);
  // printf("Привет, число: %*d", 5, -123);
  // printf("\n%s\n", buffer);

  // // short
  // s21_sprintf(buffer, "Привет, число: %*hd", 5, (short)123);
  // printf("Привет, число: %*hd", 5, (short)123);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*hd", 5, (short)-123);
  // printf("Привет, число: %*hd", 5, (short)-123);
  // printf("\n%s\n", buffer);

  // // long
  // s21_sprintf(buffer, "Привет, число: %*ld", 5, (long)123);
  // printf("Привет, число: %*ld", 5, (long)123);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*ld", 5, (long)-123);
  // printf("Привет, число: %*ld", 5, (long)-123);
  // printf("\n%s\n", buffer);

  // // Ширина равна 0
  // s21_sprintf(buffer, "Привет, число: %0d", 123);
  // printf("Привет, число: %0d", 123);
  // printf("\n%s\n", buffer);

  // // Число равно 0
  // s21_sprintf(buffer, "Привет, число: %5d", 0);
  // printf("Привет, число: %5d", 0);
  // printf("\n%s\n", buffer);

  // // Число равно -0 (выводится как 0)
  // s21_sprintf(buffer, "Привет, число: %5d", -0);
  // printf("Привет, число: %5d", -0);
  // printf("\n%s\n", buffer);

  // // int
  // s21_sprintf(buffer, "Привет, число: %+10d", INT_MAX);
  // printf("Привет, число: %+10d", INT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % 10d", INT_MAX);
  // printf("Привет, число: % 10d", INT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010d", INT_MAX);
  // printf("Привет, число: %010d", INT_MAX);
  // printf("\n%s\n", buffer);

  // // short
  // s21_sprintf(buffer, "Привет, число: %+10hd", SHRT_MAX);
  // printf("Привет, число: %+10hd", SHRT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % 10hd", SHRT_MAX);
  // printf("Привет, число: % 10hd", SHRT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010hd", SHRT_MAX);
  // printf("Привет, число: %010hd", SHRT_MAX);
  // printf("\n%s\n", buffer);

  // // long
  // s21_sprintf(buffer, "Привет, число: %+20ld", LONG_MAX);
  // printf("Привет, число: %+20ld", LONG_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % 20ld", LONG_MAX);
  // printf("Привет, число: % 20ld", LONG_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %020ld", LONG_MAX);
  // printf("Привет, число: %020ld", LONG_MAX);
  // printf("\n%s\n", buffer);

  // // int
  // s21_sprintf(buffer, "Привет, число: %*d", 10, INT_MAX);
  // printf("Привет, число: %*d", 10, INT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*d", 10, INT_MIN);
  // printf("Привет, число: %*d", 10, INT_MIN);
  // printf("\n%s\n", buffer);

  // // short
  // s21_sprintf(buffer, "Привет, число: %*hd", 10, SHRT_MAX);
  // printf("Привет, число: %*hd", 10, SHRT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*hd", 10, SHRT_MIN);
  // printf("Привет, число: %*hd", 10, SHRT_MIN);
  // printf("\n%s\n", buffer);

  // // long
  // s21_sprintf(buffer, "Привет, число: %*ld", 20, LONG_MAX);
  // printf("Привет, число: %*ld", 20, LONG_MAX);
  // printf("\n%s\n", buffer);

  // // int
  // s21_sprintf(buffer, "Привет, число: %10d", INT_MAX);
  // printf("Привет, число: %10d", INT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %10d", INT_MIN);
  // printf("Привет, число: %10d", INT_MIN);
  // printf("\n%s\n", buffer);

  // // short
  // s21_sprintf(buffer, "Привет, число: %10hd", SHRT_MAX);
  // printf("Привет, число: %10hd", SHRT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %10hd", SHRT_MIN);
  // printf("Привет, число: %10hd", SHRT_MIN);
  // printf("\n%s\n", buffer);

  // // long
  // s21_sprintf(buffer, "Привет, число: %20ld", LONG_MAX);
  // printf("Привет, число: %20ld", LONG_MAX);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом '-' и статической шириной
  // s21_sprintf(buffer, "Привет, число: %-20u", UINT_MAX);
  // printf("Привет, число: %-20u", UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-10u", 0);
  // printf("Привет, число: %-10u", 0);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом '0' и статической шириной
  // s21_sprintf(buffer, "Привет, число: %020u", UINT_MAX);
  // printf("Привет, число: %020u", UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010u", 0);
  // printf("Привет, число: %010u", 0);
  // printf("\n%s\n", buffer);

  // // Тесты с динамической шириной
  // s21_sprintf(buffer, "Привет, число: %*u", 20, UINT_MAX);
  // printf("Привет, число: %*u", 20, UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*u", 10, 0);
  // printf("Привет, число: %*u", 10, 0);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом '-' и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %-*u", 20, UINT_MAX);
  // printf("Привет, число: %-*u", 20, UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-*u", 10, 0);
  // printf("Привет, число: %-*u", 10, 0);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом '0' и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %0*u", 20, UINT_MAX);
  // printf("Привет, число: %0*u", 20, UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %0*u", 10, 0);
  // printf("Привет, число: %0*u", 10, 0);
  // printf("\n%s\n", buffer);

  // // Тесты с модификатором 'h'
  // s21_sprintf(buffer, "Привет, число: %20hu", USHRT_MAX);
  // printf("Привет, число: %20hu", USHRT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-20hu", 0);
  // printf("Привет, число: %-20hu", 0);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %020hu", USHRT_MAX);
  // printf("Привет, число: %020hu", USHRT_MAX);
  // printf("\n%s\n", buffer);

  // // Тесты с модификатором 'l'
  // s21_sprintf(buffer, "Привет, число: %20lu", ULONG_MAX);
  // printf("Привет, число: %20lu", ULONG_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %020lu", ULONG_MAX);
  // printf("Привет, число: %020lu", ULONG_MAX);
  // printf("\n%s\n", buffer);

  // // Тесты с краевыми случаями
  // s21_sprintf(buffer, "Привет, число: %20u", UINT_MAX);
  // printf("Привет, число: %20u", UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-20u", 0);
  // printf("Привет, число: %-20u", 0);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %020u", 1);
  // printf("Привет, число: %020u", 1);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом '-' и статической шириной
  // s21_sprintf(buffer, "Привет, число: %-20u", UINT_MAX);
  // printf("Привет, число: %-20u", UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-10u", 0);
  // printf("Привет, число: %-10u", 0);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом '0' и статической шириной
  // s21_sprintf(buffer, "Привет, число: %020u", UINT_MAX);
  // printf("Привет, число: %020u", UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010u", 0);
  // printf("Привет, число: %010u", 0);
  // printf("\n%s\n", buffer);

  // // Тесты с динамической шириной
  // s21_sprintf(buffer, "Привет, число: %*u", 20, UINT_MAX);
  // printf("Привет, число: %*u", 20, UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*u", 10, 0);
  // printf("Привет, число: %*u", 10, 0);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом '-' и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %-*u", 20, UINT_MAX);
  // printf("Привет, число: %-*u", 20, UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-*u", 10, 0);
  // printf("Привет, число: %-*u", 10, 0);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом '0' и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %0*u", 20, UINT_MAX);
  // printf("Привет, число: %0*u", 20, UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %0*u", 10, 0);
  // printf("Привет, число: %0*u", 10, 0);
  // printf("\n%s\n", buffer);

  // // Тесты с модификатором 'h'
  // s21_sprintf(buffer, "Привет, число: %20hu", USHRT_MAX);
  // printf("Привет, число: %20hu", USHRT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-20hu", 0);
  // printf("Привет, число: %-20hu", 0);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %020hu", USHRT_MAX);
  // printf("Привет, число: %020hu", USHRT_MAX);
  // printf("\n%s\n", buffer);

  // // Тесты с модификатором 'l'
  // s21_sprintf(buffer, "Привет, число: %20lu", ULONG_MAX);
  // printf("Привет, число: %20lu", ULONG_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %020lu", ULONG_MAX);
  // printf("Привет, число: %020lu", ULONG_MAX);
  // printf("\n%s\n", buffer);

  // // Тесты с краевыми случаями
  // // Минимальное значение
  // s21_sprintf(buffer, "Привет, число: %20u", 0);
  // printf("Привет, число: %20u", 0);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-20u", 0);
  // printf("Привет, число: %-20u", 0);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %020u", 0);
  // printf("Привет, число: %020u", 0);
  // printf("\n%s\n", buffer);

  // // Максимальное значение
  // s21_sprintf(buffer, "Привет, число: %20u", UINT_MAX);
  // printf("Привет, число: %20u", UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-20u", UINT_MAX);
  // printf("Привет, число: %-20u", UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %020u", UINT_MAX);
  // printf("Привет, число: %020u", UINT_MAX);
  // printf("\n%s\n", buffer);

  // // Динамическая ширина
  // s21_sprintf(buffer, "Привет, число: %*u", 20, 0);
  // printf("Привет, число: %*u", 20, 0);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*u", 10, UINT_MAX);
  // printf("Привет, число: %*u", 10, UINT_MAX);
  // printf("\n%s\n", buffer);

  // // Флаги и динамическая ширина
  // s21_sprintf(buffer, "Привет, число: %-*u", 20, 0);
  // printf("Привет, число: %-*u", 20, 0);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-*u", 10, UINT_MAX);
  // printf("Привет, число: %-*u", 10, UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %0*u", 20, 0);
  // printf("Привет, число: %0*u", 20, 0);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %0*u", 10, UINT_MAX);
  // printf("Привет, число: %0*u", 10, UINT_MAX);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %0*u", 10, UINT_MAX);
  // printf("Привет, число: %0*u", 10, UINT_MAX);
  // printf("\n%s\n", buffer);
  // // Тесты с флагом `-` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %-10.5f", 123.456);
  // printf("Привет, число: %-10.5f", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-10.5f", -123.456);
  // printf("Привет, число: %-10.5f", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `+` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %+10.5f", 123.456);
  // printf("Привет, число: %+10.5f", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5f", -123.456);
  // printf("Привет, число: %+10.5f", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом пробел и статической шириной
  // s21_sprintf(buffer, "Привет, число: % 10.5f", 123.456);
  // printf("Привет, число: % 10.5f", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % 10.5f", -123.456);
  // printf("Привет, число: % 10.5f", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `0` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %010.5f", 123.456);
  // printf("Привет, число: %010.5f", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5f", -123.456);
  // printf("Привет, число: %010.5f", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `#` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %#10.5f", 123.456);
  // printf("Привет, число: %#10.5f", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %#10.5f", -123.456);
  // printf("Привет, число: %#10.5f", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с динамической шириной
  // s21_sprintf(buffer, "Привет, число: %*.*f", 20, 5, 123.456);
  // printf("Привет, число: %*.*f", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*.*f", 20, 5, -123.456);
  // printf("Привет, число: %*.*f", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `-` и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %-*.*f", 20, 5, 123.456);
  // printf("Привет, число: %-*.*f", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-*.*f", 20, 5, -123.456);
  // printf("Привет, число: %-*.*f", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `+` и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %+*.*f", 20, 5, 123.456);
  // printf("Привет, число: %+*.*f", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+*.*f", 20, 5, -123.456);
  // printf("Привет, число: %+*.*f", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом пробел и динамической шириной
  // s21_sprintf(buffer, "Привет, число: % *.*f", 20, 5, 123.456);
  // printf("Привет, число: % *.*f", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % *.*f", 20, 5, -123.456);
  // printf("Привет, число: % *.*f", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `#` и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %#*.*f", 20, 5, 123.456);
  // printf("Привет, число: %#*.*f", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %#*.*f", 20, 5, -123.456);
  // printf("Привет, число: %#*.*f", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Краевые случаи
  // s21_sprintf(buffer, "Привет, число: %f", 0.0);
  // printf("Привет, число: %f", 0.0);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %f", -0.0);
  // printf("Привет, число: %f", -0.0);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %f", INFINITY);
  // printf("Привет, число: %f", INFINITY);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %f", -INFINITY);
  // printf("Привет, число: %f", -INFINITY);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %f", NAN);
  // printf("Привет, число: %f", NAN);
  // printf("\n%s\n", buffer);

  // // Тесты с шириной 0
  // s21_sprintf(buffer, "Привет, число: %0.5f", 123.456);
  // printf("Привет, число: %0.5f", 123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с точностью 0
  // s21_sprintf(buffer, "Привет, число: %10.0f", 123.456);
  // printf("Привет, число: %10.0f", 123.456);
  // printf("\n%s\n", buffer);

  // // Краевые случаи
  // s21_sprintf(buffer, "Привет, число: %f", 0.0);
  // printf("Привет, число: %f", 0.0);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %f", -0.0);
  // printf("Привет, число: %f", -0.0);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %f", INFINITY);
  // printf("Привет, число: %f", INFINITY);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %f", -INFINITY);
  // printf("Привет, число: %f", -INFINITY);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %f", NAN);
  // printf("Привет, число: %f", NAN);
  // printf("\n%s\n", buffer);

  // // Тесты с шириной 0
  // s21_sprintf(buffer, "Привет, число: %0.5f", 123.456);
  // printf("Привет, число: %0.5f", 123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с точностью 0
  // s21_sprintf(buffer, "Привет, число: %10.0f", 123.456);
  // printf("Привет, число: %10.0f", 123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `-` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %-10.5f", 123.456);
  // printf("Привет, число: %-10.5f", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-10.5f", -123.456);
  // printf("Привет, число: %-10.5f", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `+` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %+10.5f", 123.456);
  // printf("Привет, число: %+10.5f", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+10.5f", -123.456);
  // printf("Привет, число: %+10.5f", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом пробел и статической шириной
  // s21_sprintf(buffer, "Привет, число: % 10.5f", 123.456);
  // printf("Привет, число: % 10.5f", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % 10.5f", -123.456);
  // printf("Привет, число: % 10.5f", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `0` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %010.5f", 123.456);
  // printf("Привет, число: %010.5f", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %010.5f", -123.456);
  // printf("Привет, число: %010.5f", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `#` и статической шириной
  // s21_sprintf(buffer, "Привет, число: %#10.5f", 123.456);
  // printf("Привет, число: %#10.5f", 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %#10.5f", -123.456);
  // printf("Привет, число: %#10.5f", -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с динамической шириной
  // s21_sprintf(buffer, "Привет, число: %*.*f", 20, 5, 123.456);
  // printf("Привет, число: %*.*f", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %*.*f", 20, 5, -123.456);
  // printf("Привет, число: %*.*f", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с модификатором `h`
  // // float автоматически продвигается к double, поэтому тесты будут
  // аналогичны
  // // для f
  // float f_num = 123.456f;
  // s21_sprintf(buffer, "Привет, число: %10.5f", f_num);
  // printf("Привет, число: %10.5f", f_num);
  // printf("\n%s\n", buffer);

  // f_num = -123.456f;
  // s21_sprintf(buffer, "Привет, число: %10.5f", f_num);
  // printf("Привет, число: %10.5f", f_num);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `-` и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %-*.*f", 20, 5, 123.456);
  // printf("Привет, число: %-*.*f", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %-*.*f", 20, 5, -123.456);
  // printf("Привет, число: %-*.*f", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `+` и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %+*.*f", 20, 5, 123.456);
  // printf("Привет, число: %+*.*f", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %+*.*f", 20, 5, -123.456);
  // printf("Привет, число: %+*.*f", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом пробел и динамической шириной
  // s21_sprintf(buffer, "Привет, число: % *.*f", 20, 5, 123.456);
  // printf("Привет, число: % *.*f", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: % *.*f", 20, 5, -123.456);
  // printf("Привет, число: % *.*f", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с флагом `#` и динамической шириной
  // s21_sprintf(buffer, "Привет, число: %#*.*f", 20, 5, 123.456);
  // printf("Привет, число: %#*.*f", 20, 5, 123.456);
  // printf("\n%s\n", buffer);

  // s21_sprintf(buffer, "Привет, число: %#*.*f", 20, 5, -123.456);
  // printf("Привет, число: %#*.*f", 20, 5, -123.456);
  // printf("\n%s\n", buffer);

  // // Тесты с модификатором `l`
  // // В C/C++ нет специального типа для long float, поэтому используется
  // double s21_sprintf(buffer, "Привет, число: %10.5lf", 123.456);
  // printf("Привет, число: %10.5lf", 123.456);
  // printf("\n%s\n", buffer);

  s21_sprintf(buffer, "Привет, число: %10.15lf", -123.456);
  printf("Привет, число: %10.15lf", -123.456);
  printf("\n%s\n", buffer);
  int num = 0;

  s21_sprintf(buffer, "%#10.5X\n", num);
  printf("%#10.5X\n", num);
  printf("%s", buffer);
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
  if (f->minus) {
    str[(*l)++] = c;
    for (int i = 1; i < f->width; i++) {
      str[(*l)++] = ' ';
    }
  } else if (f->width > 1) {
    for (int i = 1; i < f->width; i++) {
      str[(*l)++] = ' ';
    }
    str[(*l)++] = c;
  } else {
    str[(*l)++] = c;
  }
}

void handle_string(va_list factor, char *str, int *l, flags *f) {
  char *s = va_arg(factor, char *);
  int len = strlen(s);
  int print_len = len;
  if (f->precision > -1) {
    print_len = f->precision;
  }
  if (f->minus) {
    for (int i = 0; i < print_len; i++) {
      str[(*l)++] = s[i];
    }
    for (int i = 0; i < f->width - print_len; i++) {
      str[(*l)++] = ' ';
    }
  } else {
    for (int i = 0; i < f->width - print_len; i++) {
      str[(*l)++] = ' ';
    }
    for (int i = 0; i < print_len; i++) {
      str[(*l)++] = s[i];
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
  int flag_sign = 0;
  if (sign) {
    flag_sign = 1;
  }
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
  if (f->precision > 0 && f->precision > len) count_zero = f->precision - len;
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
  if (f->precision > 0 && f->precision > len) count_zero = f->precision - len;
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
  int sign = 0;
  if (num < 0) {
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
    if (!(isnan(num)) && !(isinf(num))) {
      if (f->precision != 0) {
        str[(*l)++] = '.';
      }
    }
    print_frac_part(str, l, num, frac_len);
  }
}

void handle_hex(va_list factor, char *str, int *l, flags *f, int uppercase) {
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
      temp /= 16;
    }
  }
  int count_zero = 0;
  if (f->precision > 0 && f->precision > len) count_zero = f->precision - len;
  char temp_str[20] = {0};
  int temp_len = 0;
  temp = num;
  if (num == 0) {
    if (f->precision < 1) {
      temp_str[temp_len++] = ' ';
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
  if (f->precision > 0 && f->precision > len) count_zero = f->precision - len;
  char temp_str[20] = {0};
  int temp_len = 0;
  temp = num;
  if (num == 0) {
    if (f->precision < 1) {
      temp_str[temp_len++] = ' ';
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


void print_int_part(char *str, int *l, double num) {
  mpfr_t num_mpfr;
  mpfr_init2(num_mpfr, 100);
  mpfr_set_d(num_mpfr, num, MPFR_RNDN);
  char temp_str[1000];
  mpfr_sprintf(temp_str, "%Rf", num_mpfr);
  int dot_pos = -1;
  for (int i = 0; temp_str[i]; i++) {
    if (temp_str[i] == '.') {
      dot_pos = i;
      break;
    }
  }
  if (dot_pos != -1) {
    for (int i = 0; i < dot_pos; i++) {
      str[(*l)++] = temp_str[i];
    }
  } else {
    for (int i = 0; temp_str[i]; i++) {
      str[(*l)++] = temp_str[i];
    }
  }
  mpfr_clear(num_mpfr);
}

void print_frac_part(char *str, int *l, double num, int frac_len) {
  mpfr_t num_mpfr;
  mpfr_init2(num_mpfr, 100);
  mpfr_set_d(num_mpfr, num, MPFR_RNDN);
  char temp_str[1000];
  mpfr_sprintf(temp_str, "%.*Rf", frac_len, num_mpfr);
  int dot_pos = -1;
  for (int i = 0; temp_str[i]; i++) {
    if (temp_str[i] == '.') {
      dot_pos = i;
      break;
    }
  }
  if (dot_pos != -1) {
    for (int i = dot_pos + 1; i < dot_pos + frac_len + 1; i++) {
      str[(*l)++] = temp_str[i];
    }
  }
  mpfr_clear(num_mpfr);
}

///////////////////////

void handle_general(va_list factor, char *str, int *l, flags *f,
                    int uppercase) {
  double num = va_arg(factor, double);
  int sign = 0;
  if (num < 0) {
    sign = -1;
    num = -num;
  } else if (f->plus) {
    sign = 1;
  } else if (f->space) {
    sign = 2;
  }
  int flag_sign = 0;
  if (sign) {
    flag_sign = 1;
  }
  mpfr_t num_mpfr;
  mpfr_init2(num_mpfr, 100);
  mpfr_set_d(num_mpfr, num, MPFR_RNDN);
  char temp_str[1000];
  if (f->precision == -1) {
    f->precision = 6;
  }
  mpfr_sprintf(temp_str, "%.*Rg", f->precision, num_mpfr);
  if (uppercase) {
    for (int i = 0; temp_str[i]; i++) {
      if (temp_str[i] == 'e') {
        temp_str[i] = 'E';
      }
    }
  }
  int len = strlen(temp_str);
  if (flag_sign) {
    len++;
  };
  if (f->minus) {
    if (sign == -1) {
      str[(*l)++] = '-';
    } else if (sign == 1) {
      str[(*l)++] = '+';
    } else if (sign == 2) {
      str[(*l)++] = ' ';
    }
    for (int i = 0; temp_str[i]; i++) {
      str[(*l)++] = temp_str[i];
    }
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
      for (int i = 0; i < f->width - len - flag_sign; i++) {
        str[(*l)++] = '0';
      }
    } else {
      for (int i = 0; i < f->width - len - flag_sign; i++) {
        str[(*l)++] = ' ';
      }
    }
    if (sign == -1) {
      str[(*l)++] = '-';
    } else if (sign == 1) {
      str[(*l)++] = '+';
    } else if (sign == 2) {
      str[(*l)++] = ' ';
    }
    for (int i = 0; temp_str[i]; i++) {
      str[(*l)++] = temp_str[i];
    }
  }
  mpfr_clear(num_mpfr);
}

void handle_e(va_list factor, char *str, int *l, flags *f, int uppercase) {
  long double num = 0.0;
  if (f->longlong_) {
    num = va_arg(factor, long double);
  } else {
    num = va_arg(factor, double);
  }
  char buffer[100];
  int len = 0;
  if (f->precision == -1) {
    f->precision = 6;
  }
  if (uppercase) {
    sprintf(buffer, "%.*LE", f->precision, num);
  } else {
    sprintf(buffer, "%.*Le", f->precision, num);
  }
  len = strlen(buffer);
  if (f->plus) {
    if (num >= 0) {
      str[*l] = '+';
      (*l)++;
    }
  } else if (f->space && num >= 0) {
    str[*l] = ' ';
    (*l)++;
  }
  for (int i = 0; i < len; i++) {
    str[*l] = buffer[i];
    (*l)++;
  }
  if (f->width > *l) {
    if (f->minus) {
      for (int i = *l; i < f->width; i++) {
        str[i] = ' ';
      }
      *l = f->width;
    } else {
      if (f->zero) {
        for (int i = 0; i < f->width - *l; i++) {
          str[i] = '0';
        }
        for (int i = f->width - *l; i < f->width; i++) {
          str[i] = buffer[i - (f->width - *l)];
        }
        *l = f->width;
      } else {
        for (int i = 0; i < f->width - *l; i++) {
          str[i] = ' ';
        }
        for (int i = f->width - *l; i < f->width; i++) {
          str[i] = buffer[i - (f->width - *l)];
        }
        *l = f->width;
      }
    }
  }
}