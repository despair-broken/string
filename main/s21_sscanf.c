#include "s21_string.h"

int s21_sscanf(const char *str, const char *format, ...) {
  int count = 0;
  int exit = 0;
  if (format) {
    va_list arg;
    va_start(arg, format);
    int n = 0;
    for (s21_size_t i = 0; format[i] && !exit; i++) {
      if (format[i] == '%') {
        format_flags flags = {-1, 0, 0, 0};
        read_format(format, &flags, &i);
        n += is_space(str + n, flags);
        if (flags.spec == 'c')
          n += write_char(arg, str + n, flags, &count);
        else if (flags.spec == 's')
          n += write_string(arg, str + n, flags, &count);
        else if (flags.spec == 'i' || flags.spec == 'd')
          n += write_signed_int(arg, str + n, flags, &count);
        else if (s21_strchr("ouxXp", flags.spec))
          n += write_unsigned_int(arg, str + n, flags, &count);
        else if (s21_strchr("eEgGf", flags.spec))
          n += write_float(arg, str + n, flags, &count);
        else if (flags.spec == 'n')
          *va_arg(arg, int *) = n;
        else
          exit = 1;
      } else if (isspace(format[i])) {
        while (str[n] && isspace(str[n])) n++;
      } else {
        if (format[i] == str[n])
          n++;
        else
          exit = 1;
      }
    }
    va_end(arg);
  }
  return count;
}

void read_format(const char *format, format_flags *flags, s21_size_t *pi) {
  int i = *pi;
  i++;
  if (format[i] == '*') {
    flags->supress_writing = 1;
    i++;
  } else if (isdigit(format[i])) {
    char buffer[256];
    int j = 0;
    for (; isdigit(format[i]); i++, j++) buffer[j] = format[i];
    buffer[j] = '\0';
    flags->width = to_integer(buffer, 10);
  }
  if (s21_strchr("lLh", format[i])) {
    flags->length = format[i];
    i++;
  }
  if (s21_strchr("cdieEfgGosuxXpn%", format[i])) flags->spec = format[i];
  *pi = i;
}

int is_space(const char *str, format_flags flags) {
  int n = 0;
  if (flags.spec != 'c')
    while (str[n] && s21_strchr(" \n\t\r\f", str[n])) n++;
  return n;
}

int write_char(va_list arg, const char *str, format_flags flags, int *count) {
  if (!flags.supress_writing && str[0]) {
    *va_arg(arg, char *) = str[0];
    (*count)++;
  }
  return str[0] ? 1 : 0;
}

int write_string(va_list arg, const char *str, format_flags flags, int *count) {
  int n = 0;
  char *buffer = va_arg(arg, char *);
  if (!flags.supress_writing && buffer) {
    while (str[n] && !isspace(str[n]) &&
           (flags.width == -1 || n < flags.width)) {
      buffer[n] = str[n];
      n++;
    }
    buffer[n] = '\0';
    *count += str[0] ? 1 : 0;
  }
  return n;
}

int write_signed_int(va_list arg, const char *str, format_flags flags,
                     int *count) {
  int n = 0;
  char *buffer = calloc(s21_strlen(str) + 1, sizeof(char));
  int i = 0;
  if (str[n] == '+' || str[n] == '-') {
    buffer[i] = str[n];
    i++;
    n++;
  }
  int base = 10;
  if (str[n] == '0' && flags.spec == 'i') {
    base = 8;
    n++;
    if (str[n] == 'x' || str[n] == 'X') {
      base = 16;
      n++;
    }
  }
  char *base_alphabet = base == 8    ? "01234567"
                        : base == 10 ? "0123456789"
                                     : "0123456789abcdefxABCDEFX";
  while (str[n] && s21_strchr(base_alphabet, str[n]) &&
         (flags.width == -1 || n < flags.width)) {
    buffer[i] = str[n];
    i++;
    n++;
  }
  buffer[i] = '\0';
  if (!flags.supress_writing) {
    if (flags.length == 'h')
      CONVERT_TO_AND_SAVE_AS(to_integer(buffer, base), short int);
    else if (flags.length == 'l')
      CONVERT_TO_AND_SAVE_AS(to_integer(buffer, base), long int);
    else
      CONVERT_TO_AND_SAVE_AS(to_integer(buffer, base), int);
    *count += str[0] ? 1 : 0;
  }
  free(buffer);
  return n;
}

int write_unsigned_int(va_list arg, const char *str, format_flags flags,
                       int *count) {
  int n = 0;
  char *buffer = calloc(s21_strlen(str) + 1, sizeof(char));
  if (str[n] == '+' || str[n] == '-') {
    buffer[n] = str[n];
    n++;
  }
  int base = 10;
  if (flags.spec == 'o')
    base = 8;
  else if (flags.spec == 'x' || flags.spec == 'X' || flags.spec == 'p')
    base = 16;
  char *base_alphabet = base == 8    ? "01234567"
                        : base == 10 ? "0123456789"
                                     : "0123456789abcdefxABCDEFX";
  while (str[n] && s21_strchr(base_alphabet, str[n]) &&
         (flags.width == -1 || n < flags.width)) {
    buffer[n] = str[n];
    n++;
  }
  buffer[n] = '\0';
  if (!flags.supress_writing) {
    if (flags.spec == 'p') {
      unsigned long int *p_void = va_arg(arg, void *);
      *p_void = to_integer(buffer, base);
    } else if (flags.length == 'h')
      CONVERT_TO_AND_SAVE_AS(to_integer(buffer, base), unsigned short int);
    else if (flags.length == 'l')
      CONVERT_TO_AND_SAVE_AS(to_integer(buffer, base), unsigned long int);
    else
      CONVERT_TO_AND_SAVE_AS(to_integer(buffer, base), unsigned int);
    *count += str[0] ? 1 : 0;
  }
  free(buffer);
  return n;
}

int write_float(va_list arg, const char *str, format_flags flags, int *count) {
  int n = 0;
  char *buffer = calloc(s21_strlen(str) + 1, sizeof(char));
  if (str[n] == '-' || str[n] == '+') {
    buffer[n] = str[n];
    n++;
  }
  int has_point = 0;
  while (str[n] && (isdigit(str[n]) || str[n] == '.') && has_point <= 1 &&
         (flags.width == -1 || n < flags.width)) {
    if (str[n] == '.') has_point++;
    buffer[n] = str[n];
    n++;
  }
  if (str[n] == 'e' || str[n] == 'E') {
    buffer[n] = str[n];
    n++;
    if (str[n] == '-' || str[n] == '+') {
      buffer[n] = str[n];
      n++;
    }
    while (str[n] && isdigit(str[n])) {
      buffer[n] = str[n];
      n++;
    }
  }
  buffer[n] = '\0';

  if (!flags.supress_writing) {
    if (flags.length == 'l')
      CONVERT_TO_AND_SAVE_AS(to_float(buffer), double);
    else if (flags.length == 'L')
      CONVERT_TO_AND_SAVE_AS(to_float(buffer), long double);
    else
      CONVERT_TO_AND_SAVE_AS(to_float(buffer), float);
  }
  *count += str[0] ? 1 : 0;
  free(buffer);
  return n;
}

long int to_integer(char *buffer, int base) {
  long int result = 0;
  int sign = 1;
  s21_size_t i = 0;
  if (buffer[i] == '-' || buffer[i] == '+') {
    sign = buffer[i] == '-' ? -1 : 1;
    i++;
  }
  for (; buffer[i]; i++) {
    int digit = 0;
    if (isdigit(buffer[i]))
      digit = buffer[i] - '0';
    else if (buffer[i] >= 'a' && buffer[i] <= 'f')
      digit = buffer[i] - 'a' + 10;
    else if (buffer[i] >= 'A' && buffer[i] <= 'F')
      digit = buffer[i] - 'A' + 10;
    result = result * base + digit;
  }
  return result * sign;
}

long double to_float(char *buffer) {
  long double result = 0;
  int exponent = 0;
  int sign = 1, exponent_sign = 1;
  s21_size_t i = 0;
  long double divide_after_point = 1.0;

  if (buffer[i] == '-' || buffer[i] == '+') {
    sign = buffer[i] == '-' ? -1 : 1;
    i++;
  }
  int has_point = 0;
  while (buffer[i] && (isdigit(buffer[i]) || buffer[i] == '.')) {
    if (buffer[i] == '.')
      has_point = 1;
    else {
      if (!has_point)
        result = result * 10 + (buffer[i] - '0');
      else {
        divide_after_point /= 10;
        result += (buffer[i] - '0') * divide_after_point;
      }
    }
    i++;
  }
  if (buffer[i] == 'e' || buffer[i] == 'E') {
    i++;
    if (buffer[i] == '-' || buffer[i] == '+') {
      exponent_sign = buffer[i] == '-' ? -1 : 1;
      i++;
    }
    while (isdigit(buffer[i])) {
      exponent = exponent * 10 + buffer[i] - '0';
      i++;
    }
  }
  result *= pow(10, exponent_sign * exponent);
  return result * sign;
}