#include "s21_string.h"

char *s21_strrchr(const char *str, int c) {
  int start;

  if (str == s21_NULL)
    return (s21_NULL);

  start = s21_strlen(str);
  while (start >= 0) {
    if (str[start] == c)
      return ((char *)&str[start]);
    start--;
  }
  return (s21_NULL);
}
