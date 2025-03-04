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

// s21_sprintf(buffer, "Привет, число: %5.15ld", (long)-123);
// printf("Привет, число: %5.15ld", (long)-123);
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

// // Тесты с шириной 0
// s21_sprintf(buffer, "Привет, число: %0.5f", 123.456);
// printf("Привет, число: %0.5f", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с точностью 0
// s21_sprintf(buffer, "Привет, число: %10.0f", 123.456);
// printf("Привет, число: %10.0f", 123.456);
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
// s21_sprintf(buffer, "Привет, число: %10.5lf", 123.456);
// printf("Привет, число: %10.5lf", 123.456);
// printf("\n%s\n", buffer);

// // Базовый тест
// s21_sprintf(buffer, "Hex: %x", 255);
// printf("Hex: %x\n", 255);
// printf("%s\n", buffer);

// // С шириной
// s21_sprintf(buffer, "Hex with width: %5x", 255);
// printf("Hex with width: %5x\n", 255);
// printf("%s\n", buffer);

// // С заполнением нулями
// s21_sprintf(buffer, "Hex with zero padding: %05x", 255);
// printf("Hex with zero padding: %05x\n", 255);
// printf("%s\n", buffer);

// // С выравниванием влево
// s21_sprintf(buffer, "Hex with left alignment: %-5x", 255);
// printf("Hex with left alignment: %-5x\n", 255);
// printf("%s\n", buffer);

// // С динамической шириной
// s21_sprintf(buffer, "Hex with dynamic width: %*x", 5, 255);
// printf("Hex with dynamic width: %*x\n", 5, 255);
// printf("%s\n", buffer);

// // Максимальное значение
// s21_sprintf(buffer, "Hex max: %x", UINT_MAX);
// printf("Hex max: %x\n", UINT_MAX);
// printf("%s\n", buffer);

// // Короткое целое
// s21_sprintf(buffer, "Hex short: %hx", (unsigned short)65535);
// printf("Hex short: %hx\n", (unsigned short)65535);
// printf("%s\n", buffer);

// // С точностью
// s21_sprintf(buffer, "Hex with precision: %.8x", 255);
// printf("Hex with precision: %.8x\n", 255);
// printf("%s\n", buffer);

// // С шириной и точностью
// s21_sprintf(buffer, "Hex with width and precision: %10.8x", 255);
// printf("Hex with width and precision: %10.8x\n", 255);
// printf("%s\n", buffer);

// int num = 0;

// s21_sprintf(buffer, "%#10.5X\n", num);
// printf("%#10.5X\n", num);
// printf("%s", buffer);

// // Ноль
// s21_sprintf(buffer, "Hex zero: %x", 0);
// printf("Hex zero: %x\n", 0);
// printf("%s\n", buffer);

// // С нулевым значением и точностью
// s21_sprintf(buffer, "Hex with zero value and precision: %.0x", 3);
// printf("Hex with zero value and precision: %.0x\n", 3);
// printf("%s\n", buffer);

// // С нулевым значением и точностью
// s21_sprintf(buffer, "Hex with zero value and precision: %.0x", 0);
// printf("Hex with zero value and precision: %.0x\n", 0);
// printf("%s\n", buffer);

// // С нулевым значением и точностью
// s21_sprintf(buffer, "Hex with zero value and precision: %.1x", 0);
// printf("Hex with zero value and precision: %.1x\n", 0);
// printf("%s\n", buffer);

// // С нулевым значением и точностью
// s21_sprintf(buffer, "Hex with zero value and precision: %.2x", 0);
// printf("Hex with zero value and precision: %.2x\n", 0);
// printf("%s\n", buffer);

// // С нулевым значением и точностью
// s21_sprintf(buffer, "Hex with zero value and precision: %.3x", 0);
// printf("Hex with zero value and precision: %.3x\n", 0);
// printf("%s\n", buffer);

// // Базовый тест
// s21_sprintf(buffer, "Hex: %X", 255);
// printf("Hex: %X\n", 255);
// printf("%s\n", buffer);

// // С шириной
// s21_sprintf(buffer, "Hex with width: %5X", 255);
// printf("Hex with width: %5X\n", 255);
// printf("%s\n", buffer);

// // С заполнением нулями
// s21_sprintf(buffer, "Hex with zero padding: %05X", 255);
// printf("Hex with zero padding: %05X\n", 255);
// printf("%s\n", buffer);

// // С выравниванием влево
// s21_sprintf(buffer, "Hex with left alignment: %-5X", 255);
// printf("Hex with left alignment: %-5X\n", 255);
// printf("%s\n", buffer);

// // С динамической шириной
// s21_sprintf(buffer, "Hex with dynamic width: %*X", 5, 255);
// printf("Hex with dynamic width: %*X\n", 5, 255);
// printf("%s\n", buffer);

// // Ноль
// s21_sprintf(buffer, "Hex zero: %X", 0);
// printf("Hex zero: %X\n", 0);
// printf("%s\n", buffer);

// // Максимальное значение
// s21_sprintf(buffer, "Hex max: %X", UINT_MAX);
// printf("Hex max: %X\n", UINT_MAX);
// printf("%s\n", buffer);

// // Короткое целое
// s21_sprintf(buffer, "Hex short: %hX", (unsigned short)65535);
// printf("Hex short: %hX\n", (unsigned short)65535);
// printf("%s\n", buffer);

// // С точностью
// s21_sprintf(buffer, "Hex with precision: %.8X", 255);
// printf("Hex with precision: %.8X\n", 255);
// printf("%s\n", buffer);

// // С нулевым значением и точностью
// s21_sprintf(buffer, "Hex with zero value and precision: %.0X", 0);
// printf("Hex with zero value and precision: %.0X\n", 0);
// printf("%s\n", buffer);

// // С шириной и точностью
// s21_sprintf(buffer, "Hex with width and precision: %10.8X", 255);
// printf("Hex with width and precision: %10.8X\n", 255);
// printf("%s\n", buffer);

// // Базовый тест
// s21_sprintf(buffer, "Octal: %o", 255);
// printf("Octal: %o\n", 255);
// printf("%s\n", buffer);

// // С шириной
// s21_sprintf(buffer, "Octal with width: %5o", 255);
// printf("Octal with width: %5o\n", 255);
// printf("%s\n", buffer);

// // С заполнением нулями
// s21_sprintf(buffer, "Octal with zero padding: %05o", 255);
// printf("Octal with zero padding: %05o\n", 255);
// printf("%s\n", buffer);

// // С выравниванием влево
// s21_sprintf(buffer, "Octal with left alignment: %-5o", 255);
// printf("Octal with left alignment: %-5o\n", 255);
// printf("%s\n", buffer);

// // С динамической шириной
// s21_sprintf(buffer, "Octal with dynamic width: %*o", 5, 255);
// printf("Octal with dynamic width: %*o\n", 5, 255);
// printf("%s\n", buffer);

// // Ноль
// s21_sprintf(buffer, "Octal zero: %o", 0);
// printf("Octal zero: %o\n", 0);
// printf("%s\n", buffer);

// s21_sprintf(buffer, "Octal max: %o", UINT_MAX);
// printf("Octal max: %o\n", UINT_MAX);
// printf("%s\n", buffer);

// // Короткое целое
// s21_sprintf(buffer, "Octal short: %ho", (unsigned short)65535);
// printf("Octal short: %ho\n", (unsigned short)65535);
// printf("%s\n", buffer);

// // С точностью
// s21_sprintf(buffer, "Octal with precision: %.8o", 255);
// printf("Octal with precision: %.8o\n", 255);
// printf("%s\n", buffer);

// // С нулевым значением и точностью
// s21_sprintf(buffer, "Octal with zero value and precision: %.0o", 0);
// printf("Octal with zero value and precision: %.0o\n", 0);
// printf("%s\n", buffer);

// // С шириной и точностью
// s21_sprintf(buffer, "Octal with width and precision: %10.8o", 255);
// printf("Octal with width and precision: %10.8o\n", 255);
// printf("%s\n", buffer);

// int www = 42;
// int *ptr = &www;

// // Базовый тест
// s21_sprintf(buffer, "Pointer: %p", (void *)ptr);
// printf("Pointer: %p\n", (void *)ptr);
// printf("%s\n", buffer);

// // Нулевой указатель
// s21_sprintf(buffer, "Null pointer: %p", (void *)NULL);
// printf("Null pointer: %p\n", (void *)NULL);
// printf("%s\n", buffer);

// // С шириной
// s21_sprintf(buffer, "Pointer with width: %20p", (void *)ptr);
// printf("Pointer with width: %20p\n", (void *)ptr);
// printf("%s\n", buffer);

// // Базовый тест
// s21_sprintf(buffer, "Привет, символ: %c", 'A');
// printf("Привет, символ: %c\n", 'A');
// printf("%s\n", buffer);

// // С шириной
// s21_sprintf(buffer, "Привет, символ: %5c", 'A');
// printf("Привет, символ: %5c\n", 'A');
// printf("%s\n", buffer);

// // С шириной и выравниванием влево
// s21_sprintf(buffer, "Привет, символ: %-5c", 'A');
// printf("Привет, символ: %-5c\n", 'A');
// printf("%s\n", buffer);

// // С динамической шириной
// s21_sprintf(buffer, "Привет, символ: %*c", 5, 'A');
// printf("Привет, символ: %*c\n", 5, 'A');
// printf("%s\n", buffer);

// // С динамической шириной и выравниванием влево
// s21_sprintf(buffer, "Привет, символ: %-*c", 5, 'A');
// printf("Привет, символ: %-*c\n", 5, 'A');
// printf("%s\n", buffer);

// // ASCII-код
// s21_sprintf(buffer, "Привет, символ: %c", 65); // 'A'
// printf("Привет, символ: %c\n", 65);
// printf("%s\n", buffer);

// // Широкий символ (хотя %c ожидает int)
// // ВНИМАНИЕ: поведение может быть непредсказуемым, так как %c ожидает int
// // Это тест на потенциальную ошибку, а не на корректную работу!
// s21_sprintf(buffer, "Привет, символ: %c", 0x10410); // Пример широкого
// символа printf("Привет, символ: %c\n", 0x10410); printf("%s\n", buffer);

// // Минимальная ширина
// s21_sprintf(buffer, "Привет, символ: %1c", 'A');
// printf("Привет, символ: %1c\n", 'A');
// printf("%s\n", buffer);

// // Очень большая ширина
// s21_sprintf(buffer, "Привет, символ: %50c", 'A');
// printf("Привет, символ: %50c\n", 'A');
// printf("%s\n", buffer);

// // Нулевой символ с шириной
// s21_sprintf(buffer, "Привет, символ: %5c", '\0');
// printf("Привет, символ: %5c\n", '\0');
// printf("%s\n", buffer);

// // Нулевой символ с динамической шириной
// s21_sprintf(buffer, "Привет, символ: %*c", 5, '\0');
// printf("Привет, символ: %*c\n", 5, '\0');
// printf("%s\n", buffer);

// // Нулевой символ с шириной и выравниванием влево
// s21_sprintf(buffer, "Привет, символ: %-5c", '\0');
// printf("Привет, символ: %-5c\n", '\0');
// printf("%s\n", buffer);

// // Нулевой символ с динамической шириной и выравниванием влево
// s21_sprintf(buffer, "Привет, символ: %-*c", 5, '\0');
// printf("Привет, символ: %-*c\n", 5, '\0');
// printf("%s\n", buffer);

// // Нулевой символ
// s21_sprintf(buffer, "Привет, символ: %c", '\0');
// printf("Привет, символ: %c\n", '\0');
// printf("%s\n", buffer);

// // Максимальное значение ЕСЛИ БУДУ ПЕРЕДЕЛЫВАТЬ ТУТ ПЕРЕДЕЛАТЬ!
// s21_sprintf(buffer, "Octal with long: %lo", LONG_MAX);
// printf("Octal with long: %lo\n", LONG_MAX);
// printf("%s\n", buffer);

// // С длинным целым  // // Максимальное значение ЕСЛИ БУДУ ПЕРЕДЕЛЫВАТЬ ТУТ
// s21_sprintf(buffer, "Hex with long: %lX", LONG_MAX);
// printf("Hex with long: %lX\n", LONG_MAX);
// printf("%s\n", buffer);

// // С длинным целым  ЕСЛИ БУДУ ПЕРЕДЕЛЫВАТЬ ТУТ ПЕРЕДЕЛАТЬ!
// s21_sprintf(buffer, "Hex with long: %lx", LONG_MAX);
// printf("Hex with long: %lx\n", LONG_MAX);
// printf("%s\n", buffer);

// // // Тесты с флагом `-` и статической шириной
// // s21_sprintf(buffer, "Привет, число: %-10.5g", 123.456);
// // printf("Привет, число: %-10.5g", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-10.5g", -123.456);
// // printf("Привет, число: %-10.5g", -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-10.5G", 123.456);
// // printf("Привет, число: %-10.5G", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-10.5G", -123.456);
// // printf("Привет, число: %-10.5G", -123.456);
// // printf("\n%s\n", buffer);
// // s21_sprintf(buffer, "Привет, число: % 10.5g", -123.456);
// // printf("Привет, число: % 10.5g", -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % 10.5G", 123.456);
// // printf("Привет, число: % 10.5G", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % 10.5G", -123.456);
// // printf("Привет, число: % 10.5G", -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `#` и статической шириной
// // s21_sprintf(buffer, "Привет, число: %#10.5g", 123.456);
// // printf("Привет, число: %#10.5g", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %#10.5g", -123.456);
// // printf("Привет, число: %#10.5g", -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %#10.5G", 123.456);
// // printf("Привет, число: %#10.5G", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %#10.5G", -123.456);
// // printf("Привет, число: %#10.5G", -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с динамической шириной
// // s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, 123.456);
// // printf("Привет, число: %*.*g", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, -123.456);
// // printf("Привет, число: %*.*g", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, 123.456);
// // printf("Привет, число: %*.*G", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, -123.456);
// // printf("Привет, число: %*.*G", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `-` и динамической шириной
// // s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, 123.456);
// // printf("Привет, число: %-*.*g", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, -123.456);
// // printf("Привет, число: %-*.*g", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, 123.456);
// // printf("Привет, число: %-*.*G", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, -123.456);
// // printf("Привет, число: %-*.*G", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `+` и динамической шириной
// // s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, 123.456);
// // printf("Привет, число: %+*.*g", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, -123.456);
// // printf("Привет, число: %+*.*g", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, 123.456);
// // printf("Привет, число: %+*.*G", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, -123.456);
// // printf("Привет, число: %+*.*G", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `#` и динамической шириной
// // s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, 123.456);
// // printf("Привет, число: %#*.*g", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, 123.456);
// // printf("Привет, число: % *.*G", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, -123.456);
// // printf("Привет, число: %#*.*g", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом пробел и динамической шириной
// // s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, 123.456);
// // printf("Привет, число: % *.*g", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, -123.456);
// // printf("Привет, число: % *.*g", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, -123.456);
// // printf("Привет, число: % *.*G", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `+` и статической шириной
// // s21_sprintf(buffer, "Привет, число: %+10.5g", 123.456);
// // printf("Привет, число: %+10.5g", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5G", 123.456);
// // printf("Привет, число: %+10.5G", 123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом пробел и статической шириной
// // s21_sprintf(buffer, "Привет, число: % 10.5g", 123.456);
// // printf("Привет, число: % 10.5g", 123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `0` и статической шириной
// // s21_sprintf(buffer, "Привет, число: %010.5g", 123.456);
// // printf("Привет, число: %010.5g", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5G", 123.456);
// // printf("Привет, число: %010.5G", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5G", -123.456);
// // printf("Привет, число: %010.5G", -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5g", -123.456);
// // printf("Привет, число: %010.5g", -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5g", -123.456);
// // printf("Привет, число: %+10.5g", -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5G", -123.456);
// // printf("Привет, число: %+10.5G", -123.456);
// // printf("\n%s\n", buffer);

// // Без флага, динамическая ширина и точность
// s21_sprintf(buffer, "Привет, строка: %*.*s", 10, 5, "He\0lloWorld");
// printf("Привет, строка: %*.*s", 10, 5, "He\0lloWorld");
// printf("\n%s\n", buffer);

// // Без флага, динамическая ширина и точность
// s21_sprintf(buffer, "Привет, строка: %-*.*s", 10, 5, "He\0lloWorld");
// printf("Привет, строка: %-*.*s", 10, 5, "He\0lloWorld");
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

// s21_sprintf(buffer, "Привет, число: %10f", NAN);
// printf("Привет, число: %10f", NAN);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.0f", 123.456);
// printf("Привет, число: %.0f", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.1f", 123.456);
// printf("Привет, число: %.1f", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.2f", 123.456);
// printf("Привет, число: %.2f", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.3f", 123.456);
// printf("Привет, число: %.3f", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.4f", 123.456);
// printf("Привет, число: %.4f", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.5f", 123.456);
// printf("Привет, число: %.5f", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.6f", 123.456);
// printf("Привет, число: %.6f", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.7f", 123.456);
// printf("Привет, число: %.7f", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.0f", 1234.456);
// printf("Привет, число: %.0f", 1234.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.1f", 1235.456);
// printf("Привет, число: %.1f", 1235.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.2f", 1236.456);
// printf("Привет, число: %.2f", 1236.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.3f", 1234.456);
// printf("Привет, число: %.3f", 1234.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.4f", 123.456);
// printf("Привет, число: %.4f", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.7f", 1236.456);
// printf("Привет, число: %.7f", 1236.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.5f", 1235.456);
// printf("Привет, число: %.5f", 1235.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.6f", 123.456);
// printf("Привет, число: %.6f", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %f", 0.010100);
// printf("Привет, число: %f", 0.010100);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "%7.6f\n", -1.000001);
// printf("%7.6f\n", -1.000001);
// printf("%s", buffer);

// // s21_sprintf(buffer, "Привет, число: %10.15lf", -123.456); не проходит тест
// // printf("Привет, число: %10.15lf", -123.456);
// // printf("\n%s\n", buffer);

// // Краевые случаи
// s21_sprintf(buffer, "Привет, число: %e", 0.0);
// printf("Привет, число: %e", 0.0);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", -0.0);
// printf("Привет, число: %e", -0.0);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", INFINITY);
// printf("Привет, число: %e", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", -INFINITY);
// printf("Привет, число: %e", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", -INFINITY);
// printf("Привет, число: %e", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %10e", NAN);
// printf("Привет, число: %10e", NAN);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.0e", 123.456);
// printf("Привет, число: %.0e", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.1e", 123.456);
// printf("Привет, число: %.1e", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.2e", 123.456);
// printf("Привет, число: %.2e", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.3e", 123.456);
// printf("Привет, число: %.3e", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.4e", 123.456);
// printf("Привет, число: %.4e", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.5e", 123.456);
// printf("Привет, число: %.5e", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.6e", 123.456);
// printf("Привет, число: %.6e", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.7e", 123.456);
// printf("Привет, число: %.7e", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.0e", 1234.456);
// printf("Привет, число: %.0e", 1234.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.1e", 1235.456);
// printf("Привет, число: %.1e", 1235.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.2e", 1236.456);
// printf("Привет, число: %.2e", 1236.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.3e", 1234.456);
// printf("Привет, число: %.3e", 1234.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.4e", 123.456);
// printf("Привет, число: %.4e", 123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.7e", 1236.456);
// printf("Привет, число: %.7e", 1236.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.5e", 1235.456);
// printf("Привет, число: %.5e", 1235.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `+` и динамической шириной
// s21_sprintf(buffer, "Привет, число: %.6e", 123.456);
// printf("Привет, число: %.6e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", 0.010100);
// printf("Привет, число: %e", 0.010100);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "%7.6e\n", -1.000001);
// printf("%7.6e\n", -1.000001);
// printf("%s", buffer);

// // Тесты с флагом `+`
// s21_sprintf(buffer, "Привет, число: %+e", 123.456);
// printf("Привет, число: %+e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %+e", -123.456);
// printf("Привет, число: %+e", -123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `-`
// s21_sprintf(buffer, "Привет, число: %-10.3e", 123.456);
// printf("Привет, число: %-10.3e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %-10.3e", -123.456);
// printf("Привет, число: %-10.3e", -123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: % e", 123.456);
// printf("Привет, число: % e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: % e", -123.456);
// printf("Привет, число: % e", -123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `#`
// s21_sprintf(buffer, "Привет, число: %#e", 123.456);
// printf("Привет, число: %#e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %#e", -123.456);
// printf("Привет, число: %#e", -123.456);
// printf("\n%s\n", buffer);

// // Тесты с точностью
// s21_sprintf(buffer, "Привет, число: %.5e", 123.456);
// printf("Привет, число: %.5e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %.5e", -123.456);
// printf("Привет, число: %.5e", -123.456);
// printf("\n%s\n", buffer);

// // Тесты с шириной
// s21_sprintf(buffer, "Привет, число: %10.5e", 123.456);
// printf("Привет, число: %10.5e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %10.5e", -123.456);
// printf("Привет, число: %10.5e", -123.456);
// printf("\n%s\n", buffer);

// // Тесты с краевыми случаями
// s21_sprintf(buffer, "Привет, число: %e", 0.0);
// printf("Привет, число: %e", 0.0);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", -0.0);
// printf("Привет, число: %e", -0.0);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", INFINITY);
// printf("Привет, число: %e", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", -INFINITY);
// printf("Привет, число: %e", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", NAN);
// printf("Привет, число: %e", NAN);
// printf("\n%s\n", buffer);

// // Тесты с очень большими числами
// s21_sprintf(buffer, "Привет, число: %e", 1e308);
// printf("Привет, число: %e", 1e308);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", -1e308);
// printf("Привет, число: %e", -1e308);
// printf("\n%s\n", buffer);

// // Тесты с очень маленькими числами
// s21_sprintf(buffer, "Привет, число: %e", 1e-323);
// printf("Привет, число: %e", 1e-323);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", -1e-323);
// printf("Привет, число: %e", -1e-323);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", NAN);
// printf("Привет, число: %e", NAN);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", INFINITY);
// printf("Привет, число: %e", INFINITY);
// printf("\n%s\n", buffer);

// // Краевые случаи
// s21_sprintf(buffer, "Привет, число: %e", 0.0);
// printf("Привет, число: %e", 0.0);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", -0.0);
// printf("Привет, число: %e", -0.0);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e", -INFINITY);
// printf("Привет, число: %e", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %10e", NAN);
// printf("Привет, число: %10e", NAN);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010.3e   ", 123.456);
// printf("Привет, число: %010.3e   ", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010.3e", -123.456);
// printf("Привет, число: %010.3e", -123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", 0.010100);
// printf("Привет, число: %010e", 0.010100);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "%010.6e\n", -1.000001);
// printf("%010.6e\n", -1.000001);
// printf("%s", buffer);

// // Тесты с флагом `+` и `0`
// s21_sprintf(buffer, "Привет, число: %+010e", 123.456);
// printf("Привет, число: %+010e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %+010e", -123.456);
// printf("Привет, число: %+010e", -123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `0`
// s21_sprintf(buffer, "Привет, число: %010.3e", 123.456);
// printf("Привет, число: %010.3e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010.3e", -123.456);
// printf("Привет, число: %010.3e", -123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", 123.456);
// printf("Привет, число: %010e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", -123.456);
// printf("Привет, число: %010e", -123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `0` и пробелом перед знаком
// s21_sprintf(buffer, "Привет, число: % 010e", 123.456);
// printf("Привет, число: % 010e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: % 010e", -123.456);
// printf("Привет, число: % 010e", -123.456);
// printf("\n%s\n", buffer);

// // Тесты с флагом `#` и `0`
// s21_sprintf(buffer, "Привет, число: %#010e", 123.456);
// printf("Привет, число: %#010e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %#010e", -123.456);
// printf("Привет, число: %#010e", -123.456);
// printf("\n%s\n", buffer);

// // Тесты с точностью и флагом `0`
// s21_sprintf(buffer, "Привет, число: %010.5e", 123.456);
// printf("Привет, число: %010.5e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010.5e", -123.456);
// printf("Привет, число: %010.5e", -123.456);
// printf("\n%s\n", buffer);

// // Тесты с шириной и флагом `0`
// s21_sprintf(buffer, "Привет, число: %010.5e", 123.456);
// printf("Привет, число: %010.5e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010.5e", -123.456);
// printf("Привет, число: %010.5e", -123.456);
// printf("\n%s\n", buffer);

// // Тесты с краевыми случаями и флагом `0`
// s21_sprintf(buffer, "Привет, число: %010e", 0.0);
// printf("Привет, число: %010e", 0.0);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", -0.0);
// printf("Привет, число: %010e", -0.0);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", NAN);
// printf("Привет, число: %010e", NAN);
// printf("\n%s\n", buffer);

// // Тесты с очень большими числами и флагом `0`
// s21_sprintf(buffer, "Привет, число: %010e", 1e308);
// printf("Привет, число: %010e", 1e308);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", -1e308);
// printf("Привет, число: %010e", -1e308);
// printf("\n%s\n", buffer);

// // Тесты с очень маленькими числами и флагом `0`
// s21_sprintf(buffer, "Привет, число: %010e", 1e-323);
// printf("Привет, число: %010e", 1e-323);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", -1e-323);
// printf("Привет, число: %010e", -1e-323);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", NAN);
// printf("Привет, число: %010e", NAN);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", INFINITY);
// printf("Привет, число: %010e", INFINITY);
// printf("\n%s\n", buffer);

// // Краевые случаи с флагом `0`
// s21_sprintf(buffer, "Привет, число: %010e", 0.0);
// printf("Привет, число: %010e", 0.0);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", -0.0);
// printf("Привет, число: %010e", -0.0);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", -INFINITY);
// printf("Привет, число: %010e", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", NAN);
// printf("Привет, число: %010e", NAN);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010.3e", 123.456);
// printf("Привет, число: %010.3e", 123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010.3e", -123.456);
// printf("Привет, число: %010.3e", -123.456);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010E", NAN);
// printf("Привет, число: %010E", NAN);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e ", NAN);
// printf("Привет, число: %010e ", NAN);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e  ", NAN);
// printf("Привет, число: %010e  ", NAN);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f", NAN);
// printf("Привет, число: %010f", NAN);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f", NAN);
// printf("Привет, число: %010f ", NAN);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %-10fASD", NAN);
// printf("Привет, число: %-10fASD", NAN);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010fASD", NAN);
// printf("Привет, число: %010fASD", NAN);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f", INFINITY);
// printf("Привет, число: %010f", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %-10f", INFINITY);
// printf("Привет, число: %-10f", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f", -INFINITY);
// printf("Привет, число: %010f", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %-10f", -INFINITY);
// printf("Привет, число: %-10f", -INFINITY);
// printf("\n%s\n", buffer);

// // Для сравнения с %f
// s21_sprintf(buffer, "Привет, число: %010f", INFINITY);
// printf("Привет, число: %010f", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f ", INFINITY);
// printf("Привет, число: %010f ", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f  ", INFINITY);
// printf("Привет, число: %010f  ", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f", -INFINITY);
// printf("Привет, число: %010f", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f ", -INFINITY);
// printf("Привет, число: %010f ", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f  ", -INFINITY);
// printf("Привет, число: %010f  ", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", -INFINITY);
// printf("Привет, число: %010e", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", INFINITY);
// printf("Привет, число: %010e", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f", INFINITY);
// printf("Привет, число: %010f", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", INFINITY);
// printf("Привет, число: %010e", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e ", INFINITY);
// printf("Привет, число: %010e ", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e  ", INFINITY);
// printf("Привет, число: %010e  ", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e", -INFINITY);
// printf("Привет, число: %010e", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e ", -INFINITY);
// printf("Привет, число: %010e ", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e  ", -INFINITY);
// printf("Привет, число: %010e  ", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %e  qq", INFINITY);
// printf("Привет, число: %e  qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e  qqq", -INFINITY);
// printf("Привет, число: %010e  qqq", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f  qq", INFINITY);
// printf("Привет, число: %010f  qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %-10f  qq", INFINITY);
// printf("Привет, число: %-10f  qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f  qq", -INFINITY);
// printf("Привет, число: %010f  qq", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %-10f  qq", -INFINITY);
// printf("Привет, число: %-10f  qq", -INFINITY);
// printf("\n%s\n", buffer);

// // Для сравнения с %f
// s21_sprintf(buffer, "Привет, число: %010f  qq", INFINITY);
// printf("Привет, число: %010f  qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f   qq", INFINITY);
// printf("Привет, число: %010f   qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f    qq", INFINITY);
// printf("Привет, число: %010f    qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f  qq", -INFINITY);
// printf("Привет, число: %010f  qq", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f   qq", -INFINITY);
// printf("Привет, число: %010f   qq", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f    qq", -INFINITY);
// printf("Привет, число: %010f    qq", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e  qq", -INFINITY);
// printf("Привет, число: %010e  qq", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e  qq", INFINITY);
// printf("Привет, число: %010e  qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e  qq", INFINITY);
// printf("Привет, число: %010e  qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e   qq", INFINITY);
// printf("Привет, число: %010e   qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e    qq", INFINITY);
// printf("Привет, число: %010e    qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e  qq", -INFINITY);
// printf("Привет, число: %010e  qq", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e   qq", -INFINITY);
// printf("Привет, число: %010e   qq", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010e    qq", -INFINITY);
// printf("Привет, число: %010e    qq", -INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %E  qq", INFINITY);
// printf("Привет, число: %E  qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f  qq", INFINITY);
// printf("Привет, число: %010f  qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f   qq", INFINITY);
// printf("Привет, число: %010f   qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f    qq", INFINITY);
// printf("Привет, число: %010f    qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %010f  qq", INFINITY);
// printf("Привет, число: %010f  qq", INFINITY);
// printf("\n%s\n", buffer);

// s21_sprintf(buffer, "Привет, число: %E", -0.0);
// printf("Привет, число: %E", -0.0);
// printf("\n%s\n", buffer);

// // // С длинным целым  ЕСЛИ БУДУ ПЕРЕДЕЛЫВАТЬ ТУТ ПЕРЕДЕЛАТЬ!
// // s21_sprintf(buffer, "Hex with long: %lx", LONG_MAX);
// // printf("Hex with long: %lx\n", LONG_MAX);
// // printf("%s\n", buffer);

// // Тесты с флагом `-` и статической шириной

// // s21_sprintf(buffer, "Привет, число: %+10.5g", 0.00012345);
// // printf("Привет, число: %+10.5g", 0.00012345);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5G", 0.00012345);
// // printf("Привет, число: %+10.5G", 0.00012345);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % 10.5g", 0.00012345);
// // printf("Привет, число: % 10.5g", 0.00012345);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5g", 0.00012345);
// // printf("Привет, число: %010.5g", 0.00012345);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5G", 0.00012345);
// // printf("Привет, число: %010.5G", 0.00012345);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5G", -0.00012345);
// // printf("Привет, число: %010.5G", -0.00012345);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5g", -0.00012345);
// // printf("Привет, число: %010.5g", -0.00012345);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5e", -0.00012345);
// // printf("Привет, число: %+10.5e", -0.00012345);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5G", -12345678.9);
// // printf("Привет, число: %+10.5G", -12345678.9);
// // printf("\n%s\n", buffer);

// // // Тест 9: Маленькое число с использованием `%G`
// // s21_sprintf(buffer, "Привет, число: %12.2G", -0.00012345);
// // printf("Привет, число: %12.2G", -0.00012345);
// // printf("\n%s\n", buffer);

// // // Тест 7: Маленькое число с флагом `0` и выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %012.2g", -0.00012345);
// // printf("Привет, число: %012.2g", -0.00012345);
// // printf("\n%s\n", buffer);

// // // Тест 3: Маленькое число с выравниванием по левому краю
// // s21_sprintf(buffer, "Привет, число: %-12.2g", -0.00012345);
// // printf("Привет, число: %-12.2g", -0.00012345);
// // printf("\n%s\n", buffer);

// // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %+12.2g", -0.00012345);
// // printf("Привет, число: %+12.2g", -0.00012345);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %12.2g", -0.00012345);
// // printf("Привет, число: %12.2g", -0.00012345);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %12.2G", -12345.6789);
// // printf("Привет, число: %12.2G", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-12.2G", -12345.6789);
// // printf("Привет, число: %-12.2G", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+12.2G", -12345.6789);
// // printf("Привет, число: %+12.2G", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %012.2G", -12345.6789);
// // printf("Привет, число: %012.2G", -12345.6789);
// // printf("\n%s\n", buffer);

// // // Тест 2: Большое число с выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %12.2g", 1234567890123.45);
// // printf("Привет, число: %12.2g", 1234567890123.45);
// // printf("\n%s\n", buffer);

// // // Тест 4: Большое число с выравниванием по левому краю
// // s21_sprintf(buffer, "Привет, число: %-12.2g", 1234567890123.45);
// // printf("Привет, число: %-12.2g", 1234567890123.45);
// // printf("\n%s\n", buffer);

// // // Тест 6: Большое число с флагом `+` и выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %+12.2g", 1234567890123.45);
// // printf("Привет, число: %+12.2g", 1234567890123.45);
// // printf("\n%s\n", buffer);

// // // Тест 8: Большое число с флагом `0` и выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %012.2g", 1234567890123.45);
// // printf("Привет, число: %012.2g", 1234567890123.45);
// // printf("\n%s\n", buffer);

// // // Тест 10: Большое число с использованием `%G`
// // s21_sprintf(buffer, "Привет, число: %12.2G", 1234567890123.45);
// // printf("Привет, число: %12.2G", 1234567890123.45);
// // printf("\n%s\n", buffer);

// // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %12g", -0.00012345);
// // printf("Привет, число: %12g", -0.00012345);
// // printf("\n%s\n", buffer);

// // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %+12g", -0.00012345);
// // printf("Привет, число: %+12g", -0.00012345);
// // printf("\n%s\n", buffer);

// // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %-12g", -0.00012345);
// // printf("Привет, число: %-12g", -0.00012345);
// // printf("\n%s\n", buffer);

// // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %012g", -0.00012345);
// // printf("Привет, число: %012g", -0.00012345);
// // printf("\n%s\n", buffer);

// // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %12.4g", -0.00012345);
// // printf("Привет, число: %12.4g", -0.00012345);
// // printf("\n%s\n", buffer);

// // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %+12.4g", -0.00012345);
// // printf("Привет, число: %+12.4g", -0.00012345);
// // printf("\n%s\n", buffer);

// // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %-12.4g", -0.00012345);
// // printf("Привет, число: %-12.4g", -0.00012345);
// // printf("\n%s\n", buffer);

// // // Тест 5: Маленькое число с флагом `+` и выравниванием по правому краю
// // s21_sprintf(buffer, "Привет, число: %012.4g", -0.00012345);
// // printf("Привет, число: %012.4g", -0.00012345);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5G", -12345.6789);
// // printf("Привет, число: %+10.5G", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5G", -0.000000000);
// // printf("Привет, число: %+10.5G", -0.000000000);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-10.5g", 123.456);
// // printf("Привет, число: %-10.5g", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-10.5g", -123.456);
// // printf("Привет, число: %-10.5g", -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-10.5G", 123.456);
// // printf("Привет, число: %-10.5G", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-10.5G", -123.456);
// // printf("Привет, число: %-10.5G", -123.456);
// // printf("\n%s\n", buffer);
// // s21_sprintf(buffer, "Привет, число: % 10.5g", -123.456);
// // printf("Привет, число: % 10.5g", -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % 10.5G", 123.456);
// // printf("Привет, число: % 10.5G", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % 10.5G", -123.456);
// // printf("Привет, число: % 10.5G", -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `#` и статической шириной
// // s21_sprintf(buffer, "Привет, число: %#10.5g", 123.456);
// // printf("Привет, число: %#10.5g", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %#10.5g", -123.456);
// // printf("Привет, число: %#10.5g", -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %#10.5G", 123.456);
// // printf("Привет, число: %#10.5G", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %#10.5G", -123.456);
// // printf("Привет, число: %#10.5G", -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с динамической шириной
// // s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, 123.456);
// // printf("Привет, число: %*.*g", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %*.*g", 20, 5, -123.456);
// // printf("Привет, число: %*.*g", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, 123.456);
// // printf("Привет, число: %*.*G", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %*.*G", 20, 5, -123.456);
// // printf("Привет, число: %*.*G", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `-` и динамической шириной
// // s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, 123.456);
// // printf("Привет, число: %-*.*g", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-*.*g", 20, 5, -123.456);
// // printf("Привет, число: %-*.*g", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, 123.456);
// // printf("Привет, число: %-*.*G", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-*.*G", 20, 5, -123.456);
// // printf("Привет, число: %-*.*G", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `+` и динамической шириной
// // s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, 123.456);
// // printf("Привет, число: %+*.*g", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+*.*g", 20, 5, -123.456);
// // printf("Привет, число: %+*.*g", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, 123.456);
// // printf("Привет, число: %+*.*G", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+*.*G", 20, 5, -123.456);
// // printf("Привет, число: %+*.*G", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `#` и динамической шириной
// // s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, 123.456);
// // printf("Привет, число: %#*.*g", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, 123.456);
// // printf("Привет, число: % *.*G", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %#*.*g", 20, 5, -123.456);
// // printf("Привет, число: %#*.*g", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом пробел и динамической шириной
// // s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, 123.456);
// // printf("Привет, число: % *.*g", 20, 5, 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % *.*g", 20, 5, -123.456);
// // printf("Привет, число: % *.*g", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % *.*G", 20, 5, -123.456);
// // printf("Привет, число: % *.*G", 20, 5, -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `+` и статической шириной
// // s21_sprintf(buffer, "Привет, число: %+10.5g", 123.456);
// // printf("Привет, число: %+10.5g", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5G", 123.456);
// // printf("Привет, число: %+10.5G", 123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом пробел и статической шириной
// // s21_sprintf(buffer, "Привет, число: % 10.5g", 123.456);
// // printf("Привет, число: % 10.5g", 123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `0` и статической шириной
// // s21_sprintf(buffer, "Привет, число: %010.5g", 123.456);
// // printf("Привет, число: %010.5g", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5G", 123.456);
// // printf("Привет, число: %010.5G", 123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5G", -123.456);
// // printf("Привет, число: %010.5G", -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5g", -123.456);
// // printf("Привет, число: %010.5g", -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5g", -123.456);
// // printf("Привет, число: %+10.5g", -123.456);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5G", -123.456);
// // printf("Привет, число: %+10.5G", -123.456);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `+` и статической шириной
// // s21_sprintf(buffer, "Привет, число: %+10.5g", 12345.6789);
// // printf("Привет, число: %+10.5g", 12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5G", 12345.6789);
// // printf("Привет, число: %+10.5G", 12345.6789);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом пробел и статической шириной
// // s21_sprintf(buffer, "Привет, число: % 10.5g", 12345.6789);
// // printf("Привет, число: % 10.5g", 12345.6789);
// // printf("\n%s\n", buffer);

// // // Тесты с флагом `0` и статической шириной
// // s21_sprintf(buffer, "Привет, число: %010.5g", 12345.6789);
// // printf("Привет, число: %010.5g", 12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5G", 12345.6789);
// // printf("Привет, число: %010.5G", 12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5G", -12345.6789);
// // printf("Привет, число: %010.5G", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %010.5g", -12345.6789);
// // printf("Привет, число: %010.5g", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5g", -12345.6789);
// // printf("Привет, число: %+10.5g", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+10.5G", -12345.6789);
// // printf("Привет, число: %+10.5G", -12345.6789);
// // printf("\n%s\n", buffer);

// // printf("\n");

// // s21_sprintf(buffer, "Привет, число: %-11G", -12345.6789);
// // printf("Привет, число: %-11G", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+11G", -12345.6789);
// // printf("Привет, число: %+11G", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %011G", -12345.6789);
// // printf("Привет, число: %011G", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % 11G", -12345.6789);
// // printf("Привет, число: % 11G", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %-11.6G", -12345.6789);
// // printf("Привет, число: %-11.6G", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %+11.6G", -12345.6789);
// // printf("Привет, число: %+11.6G", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: %011.6G", -12345.6789);
// // printf("Привет, число: %011.6G", -12345.6789);
// // printf("\n%s\n", buffer);

// // s21_sprintf(buffer, "Привет, число: % 11.7G", -12345.6789);
// // printf("Привет, число: % 11.7G", -12345.6789);
// // printf("\n%s\n", buffer);