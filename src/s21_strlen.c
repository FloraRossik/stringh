#include "s21_string.h"

size_t s21_strlen(const char *str) {
  size_t i;
  unsigned char *tmp_s;

  tmp_s = (unsigned char *)str;
  i = 0;
  while (tmp_s[i] != '\0') {
    i++;
  }
  return (i);
}
