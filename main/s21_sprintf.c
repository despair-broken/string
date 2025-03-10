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
    pirnt_char(str, new_s, actual_len, l);
    print_space(str, f->width - actual_len, l);
  } else {
    print_space(str, f->width - actual_len, l);
    pirnt_char(str, new_s, actual_len, l);
  }
}

void pirnt_char(char *str, char *buff, int width, int *l) {
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
      pirnt_char(str, nan_str, len, l);
      print_space(str, f->width - len, l);
    } else {
      print_space(str, f->width - len, l);
      pirnt_char(str, nan_str, len, l);
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
    pirnt_char(str, buffer, len, l);
    print_zero(str, f->width - len, l);
  } else {
    if (f->zero) {
      print_zero(str, f->width - len, l);
      pirnt_char(str, buffer, len, l);
    } else {
      print_space(str, f->width - len, l);
      pirnt_char(str, buffer, len, l);
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