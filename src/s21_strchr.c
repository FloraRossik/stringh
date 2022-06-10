#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
  unsigned char *tmp_s;

  if (str == s21_NULL)
    return (s21_NULL);

  tmp_s = (unsigned char *)str;
  while (*tmp_s != '\0') {
    if (*tmp_s == c)
      return (char *)tmp_s;
    tmp_s++;
  }
  if (c == '\0')
    return (char *)tmp_s;
  return (s21_NULL);
}
