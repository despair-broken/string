#ifndef S21_STRING_H
#define S21_STRING_H

#include <ctype.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <mpfr.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define s21_size_t unsigned int
#define S21_NULL ((void *)0)
#define CONVERT_TO_AND_SAVE_AS(TO, AS) *va_arg(arg, AS *) = TO

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

typedef struct {
  int width, supress_writing;
  char length, spec;
} format_flags;

void *s21_memchr(const void *str, int c, s21_size_t n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strchr(const char *str, int c);
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
s21_size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strerror(int errnum);
s21_size_t s21_strlen(const char *str);
char *s21_strpbrk(const char *str1, const char *str2);
char *s21_strrchr(const char *str, int c);
char *s21_strstr(const char *haystack, const char *needle);
char *s21_strtok(char *str, const char *delim);

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

void print_frac_part(char *str, int *l, long double num, int frac_len);
void print_int_part(char *str, int *l, long double num);

void print_frac_part(char *str, int *l, long double num, int frac_len);
void print_int_part(char *str, int *l, long double num);

void print_c(char *str, int *l, int flag, char c);
void print_space_c(char *str, int width, int *l);
void print_space(char *str, int width, int *l);
void pirnt_char(char *str, char *buff, int width, int *l);
void get_int_number_and_sign(va_list factor, flags *f, long long int *num,
                             int *sign);
void get_uns_number(va_list factor, flags *f, long long unsigned int *num);
void get_doub_number_and_sign(va_list factor, flags *f, long double *num,
                              int *sign);

int s21_sscanf(const char *str, const char *format, ...);
void read_format(const char *format, format_flags *flags, s21_size_t *pi);
int is_space(const char *str, format_flags flags);
int write_char(va_list arg, const char *str, format_flags flags, int *count);
int write_string(va_list arg, const char *str, format_flags flags, int *count);
int write_signed_int(va_list arg, const char *str, format_flags flags,
                     int *count);
int write_unsigned_int(va_list arg, const char *str, format_flags flags,
                       int *count);
int write_float(va_list arg, const char *str, format_flags flags, int *count);
long int to_integer(char *buffer, int base);
long double to_float(char *buffer);

void *s21_to_upper(const char *str);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, s21_size_t start_index);
void s21_strcpy(char *dest, const char *src);
void *s21_trim(const char *src, const char *trim_chars);

#endif