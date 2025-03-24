#include "s21_string.h"

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
  while (s21_strchr(("-+ #0"), format[*i])) {
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
  int len = s21_strlen(s);
  char new_s[len + 1];
  s21_strcpy(new_s, s);
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
  if (signbit((float)*num)) {
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
  uintptr_t addr = (uintptr_t)va_arg(factor, void *);
  char buffer[40] = {0};
  int len = 0;
  if (addr == 0) {
    buffer[len++] = '(';
    buffer[len++] = 'n';
    buffer[len++] = 'i';
    buffer[len++] = 'l';
    buffer[len++] = ')';
  } else {
    buffer[len++] = '0';
    buffer[len++] = 'x';
    int is_leading_zero = 1;
    for (int i = 15; i >= 0; --i) {
      uint8_t byte = (addr >> (i * 4)) & 0xF;
      if (!is_leading_zero || byte != 0 || i == 0) {
        is_leading_zero = 0;
        buffer[len++] = hex_to_char(byte);
      }
    }
  }
  if (f->minus) {
    print_char(str, buffer, len, l);
    print_space(str, f->width - len, l);
  } else {
    print_space(str, f->width - len, l);
    print_char(str, buffer, len, l);
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
    char buff_str[20] = {0};
    s21_sprintf(buff_str, "%d", buff_digit);
    print_char(str, buff_str, (int)s21_strlen(buff_str), l);
    int len = (int)s21_strlen(buff_str);
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
    s21_strcpy(str_buff, num_str);
    s21_strncat(str_buff, uppercase ? "E" : "e", 1000);
    s21_strncat(str_buff, exponent_str, 1000);
    int len = s21_strlen(str_buff);
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
  s21_strcpy(str_buff, num_str);
  s21_strncat(str_buff, uppercase ? "E" : "e", 1000);
  s21_strncat(str_buff, exponent_str, 1000);
  int len = s21_strlen(str_buff);
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
      temp++;
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
  char buffZXC[50] = {0};
  buffZXC[0] = '0';
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

char hex_to_char(uint8_t byte) {
  return (byte < 10) ? '0' + byte : 'a' + (byte - 10);
}