#include "s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  if (str1 == s21_NULL || s21_strlen(str2) == 0)
    return (s21_NULL);

  while (*str1 != '\0') {
    if (s21_strchr(str2, *str1) != s21_NULL) {
      return(char *)str1;
    }
    str1++;
  }
  return (s21_NULL);
}
