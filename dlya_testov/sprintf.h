#include <ctype.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <mpfr.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "check.h"

#define s21_size_t unsigned int
#define S21_NULL ((void *)0)

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
void handle_float(va_list factor, char *str, int *l, flags *f, int uppercase);
void handle_general(va_list factor, char *str, int *l, flags *f, int uppercase);
void handle_e(va_list factor, char *str, int *l, flags *f, int uppercase);

void handle_p(va_list factor, char *str, int *l, flags *f);

void print_frac_part(char *str, int *l, long double num, int frac_len);
void print_int_part(char *str, int *l, long double num);

void print_space_c(char *str, int count, int *l);
void print_c(char *str, int *l, int flag, char c);
void print_char(char *str, char *buff, int width, int *l);
void pirnt_char_reverse(char *str, char *buff, int width, int *l);
void print_space(char *str, int count, int *l);
void get_int_number_and_sign_and_len(va_list factor, flags *f,
                                     long long int *num, int *sign, char *buff,
                                     int *len);
void get_uns_number(va_list factor, flags *f, long long unsigned *num);
void get_uns_number_and_len(va_list factor, flags *f, long long unsigned *num,
                            char *buff, int *len);
void get_doub_number_and_sign(va_list factor, flags *f, long double *num,
                              int *sign);
void add_sign(int sign, char *str, int *l);
void print_zero(char *str, int count, int *l);
void calculate_leading_zeros(int *count_zero, flags *f, int len);
void print_nan_inf(long double num, flags *f, char *str, int *l, int uppercase);
void print_point(char *str, flags *f, int *l);
int get_len_and_precision_float(flags *f, int *frac_len, int sign,
                                long double *num);
int get_len_and_precision_hex_and_o(unsigned long long int num, int *len,
                                    flags *f, int *count_zero, char *buff,
                                    int uppercase, int value);
void handle_hex_and_o(va_list factor, char *str, int *l, flags *f,
                      int uppercase, char value);
void set_sharp_hex_and_o(flags *f, int num, char *str, int *l, int uppercase,
                         int value);
int get_exponent(long double *num);