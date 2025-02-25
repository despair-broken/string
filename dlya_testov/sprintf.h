#include <ctype.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <mpfr.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct flags_width_precision_length {
  int minus;
  int plus;
  int space;
  int sharp;
  int zero;
  int width;
  int precision;
  int short_;
  int long_;
  int longlong_;
} flags;

int s21_sprintf(char *str, const char *format, ...);

void initialize_flags(flags *f);

void parse_flags(const char *format, int *i, flags *f);
void parse_width(const char *format, int *i, flags *f, va_list args);
void parse_precision(const char *format, int *i, flags *f, va_list args);
void parse_length(const char *format, int *i, flags *f);

void handle_specifier(const char *format, int *i, va_list factor, char *str,
                      int *l, flags *f);

void handle_char(va_list factor, char *str, int *l, flags *f);
void handle_string(va_list factor, char *str, int *l, flags *f);
void handle_int(va_list factor, char *str, int *l, flags *f);
void handle_unsigned(va_list factor, char *str, int *l, flags *f);
void handle_float(va_list factor, char *str, int *l, flags *f);
void handle_general(va_list factor, char *str, int *l, flags *f, int uppercase);
void handle_hex(va_list factor, char *str, int *l, flags *f, int uppercase);
void handle_e(va_list factor, char *str, int *l, flags *f, int uppercase);
void handle_o(va_list factor, char *str, int *l, flags *f);
void handle_p(va_list factor, char *str, int *l, flags *f);

void print_frac_part(char *str, int *l, double num, int frac_len);
void print_int_part(char *str, int *l, double num);