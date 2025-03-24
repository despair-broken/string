#include "s21_string.h"

void s21_strcpy(char *dest, const char *src) {
  while ((*dest++ = *src++)) {
  }
}

void *s21_to_upper(const char *str) {
  char *result;
  if (str) {
    s21_size_t len = s21_strlen(str) + 1;
    result = malloc(len);
    for (char *p = result; *str; p++, str++) {
      if (*str >= 'a' && *str <= 'z')
        *p = *str - 32;
      else
        *p = *str;
    }
    result[len - 1] = '\0';
  }
  return result;
}

void *s21_to_lower(const char *str) {
  char *result = NULL;
  if (str) {
    s21_size_t len = s21_strlen(str) + 1;
    result = malloc(len);
    for (char *p = result; *str; p++, str++) {
      if (*str >= 'A' && *str <= 'Z')
        *p = *str + 32;
      else
        *p = *str;
    }
    result[len - 1] = '\0';
  }
  return result;
}

void *s21_insert(const char *src, const char *str, size_t start_index) {
  char *res = S21_NULL;
  if (src != NULL && str != NULL) {
    s21_size_t src_len = s21_strlen(src);
    s21_size_t str_len = s21_strlen(str);
    if (start_index <= src_len) {
      res = (char *)malloc(src_len + str_len + 1);
      if (res != NULL) {
        s21_strncpy(res, src, start_index);
        s21_strcpy(res + start_index, str);
        s21_strcpy(res + start_index + str_len, src + start_index);
      }
    }
  }
  return res;
}

void *s21_trim(const char *src, const char *trim_chars) {
  char *res = S21_NULL;
  int break_cycle_flag = 0;
  if (src && trim_chars) {
    s21_size_t src_len = s21_strlen(src);
    res = malloc(src_len + 1);
    while (*src && s21_strchr(trim_chars, *src)) src++;
    s21_strcpy(res, src);
    s21_size_t res_len = s21_strlen(src);
    for (s21_size_t i = 0; i < res_len && !break_cycle_flag; i++) {
      char last_char = src[res_len - i];
      if (s21_strchr(trim_chars, last_char))
        res[s21_strlen(src) - i] = '\0';
      else
        break_cycle_flag = 1;
    }
    res = realloc(res, res_len + 1);
  }
  return res;
}