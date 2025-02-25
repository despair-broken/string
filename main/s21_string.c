#include "s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  void *res = S21_NULL;
  const unsigned char *u_c_str = (const unsigned char *)str;
  if (u_c_str && *u_c_str && n > 0) {
    unsigned char u_c_c = (unsigned char)c;
    for (s21_size_t i = 0; i < n; i++) {
      if (u_c_str[i] == u_c_c) {
        res = (void *)&u_c_str[i];
        i = n;
      }
    }
  }
  return res;
}

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  const unsigned char *u_c_str1 = (const unsigned char *)str1;
  const unsigned char *u_c_str2 = (const unsigned char *)str2;
  int res = 0;
  for (s21_size_t i = 0; i < n; i++) {
    if (u_c_str1[i] != u_c_str2[i]) {
      res = (int)u_c_str1[i] - u_c_str2[i];
      i = n;
    }
  }
  return res;
}

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  unsigned char *u_c_dest = (unsigned char *)dest;
  const unsigned char *u_c_src = (const unsigned char *)src;
  for (s21_size_t i = 0; i < n; i++) {
    u_c_dest[i] = u_c_src[i];
  }
  return dest;
}

void *s21_memset(void *str, int c, s21_size_t n) {
  unsigned char *p = (unsigned char *)str;
  for (s21_size_t i = 0; i < n; i++) {
    *(p + i) = c;
  }
  return (void *)str;
}

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  if (dest && src) {
    char *dest_end = dest;
    while (*dest_end != '\0') {
      dest_end++;
    }
    s21_size_t i = 0;
    for (; i < n && src[i] != '\0'; i++) {
      dest_end[i] = src[i];
    }
    dest_end[i] = '\0';
  }
  return dest;
}

char *s21_strchr(const char *str, int c) {
  unsigned char *p = (unsigned char *)str;
  unsigned char uc = (unsigned char)c;
  char *result = S21_NULL;
  int flag = 1;
  while (*p != '\0') {
    if (*(p) == uc && flag) {
      result = (char *)p;
      flag = 0;
    }
    p++;
  }
  if (uc == '\0' && result == S21_NULL) {
    result = (char *)p;
  }
  return result;
}

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  const unsigned char *u_c_str1 = (const unsigned char *)str1;
  const unsigned char *u_c_str2 = (const unsigned char *)str2;
  int res = 0;
  for (s21_size_t i = 0; i < n && !res; i++) {
    if (u_c_str1[i] != u_c_str2[i]) {
      res = (int)((unsigned char)u_c_str1[i] - (unsigned char)u_c_str2[i]);
    }
  }
  return res;
}

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  char *dest_p = dest;
  s21_size_t i = 0;
  for (; i < n && src[i] != '\0'; i++) {
    dest_p[i] = src[i];
  }
  for (; i < n; i++) {
    dest_p[i] = '\0';
  }
  return dest;
}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t i = 0;
  int flag = 0;
  int flag_almazxc = 1;
  for (; str1[i] != '\0' && !flag && flag_almazxc; i++) {
    for (s21_size_t j = 0; str2[j] != '\0' && flag_almazxc; j++) {
      if (str1[i] == str2[j]) {
        flag = 1;
        flag_almazxc = 0;
      }
    }
  }
  return flag ? i - 1 : i;
}

#ifdef __linux__
const char *linux_error_messages[] = {
    "Success",                    // 0
    "Operation not permitted",    // 1
    "No such file or directory",  // 2
    "No such process",            // 3
    "Interrupted system call",    // 4
    "Input/output error",         // 5
    "No such device or address",  // 6
    "Argument list too long",     // 7
    "Exec format error",          // 8
    "Bad file descriptor",        // 9
};
#elif __APPLE__
const char *mac_error_messages[] = {
    "Undefined error: 0",         // 0
    "Operation not permitted",    // 1
    "No such file or directory",  // 2
    "No such process",            // 3
    "Interrupted system call",    // 4
    "Input/output error",         // 5
    "Device not configured",      // 6
    "Argument list too long",     // 7
    "Exec format error",          // 8
    "Bad file descriptor",        // 9
};
#else
#error "Unsupported OS"
#endif

char *s21_strerror(int errnum) {
  char *result = "Unknown error";
#ifdef __linux__
  if (errnum >= 0 && errnum <= 9) result = (char *)linux_error_messages[errnum];
#elif defined(__APPLE__)
  if (errnum >= 0 && errnum <= 9) result = (char *)mac_error_messages[errnum];
#endif
  return result;
}

s21_size_t s21_strlen(const char *str) {
  s21_size_t len = 0;
  while (str[len] != '\0') {
    len++;
  }
  return len;
}

char *s21_strpbrk(const char *str1, const char *str2) {
  char *result = S21_NULL;
  int flag = 1;
  if (str1 && str2) {
    while (*str1 != '\0' && result == S21_NULL && flag) {
      const char *s2 = str2;
      while (*s2 != '\0' && flag) {
        if (*str1 == *s2) {
          result = (char *)str1;
          flag = 0;
        }
        s2++;
      }
      str1++;
    }
  }
  return result;
}

char *s21_strrchr(const char *str, int c) {
  const char *last = S21_NULL;
  unsigned char uc = (unsigned char)c;
  while (*str != '\0') {
    if (*str == uc) last = str;
    str++;
  }
  return uc == '\0' ? (char *)str : (char *)last;
}

char *s21_strstr(const char *haystack, const char *needle) {
  char *result = S21_NULL;
  if (haystack && needle) {
    if (*needle == '\0')
      result = (char *)haystack;
    else {
      while (*haystack != '\0' && result == S21_NULL) {
        const char *h = haystack;
        const char *n = needle;
        while (*n != '\0' && *h == *n) {
          h++;
          n++;
        }
        if (*n == '\0') {
          result = (char *)haystack;
        }
        haystack++;
      }
    }
  }
  return result;
}

char *s21_strtok(char *str, const char *delim) {
  static char *current = S21_NULL;
  char *result = S21_NULL;
  if (str != S21_NULL) {
    current = str;
  }
  if (current != S21_NULL) {
    while (*current != '\0' && s21_strchr(delim, *current) != S21_NULL) {
      current++;
    }
    if (*current != '\0') {
      result = current;
      while (*current != '\0' && s21_strchr(delim, *current) == S21_NULL) {
        current++;
      }
      if (*current != '\0') {
        *current = '\0';
        current++;
      }
    }
  }
  return result;
}