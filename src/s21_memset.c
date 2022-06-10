#include "s21_string.h"

void *s21_memset(void *str, int c, size_t n) {
  size_t i;
  unsigned char *tmp_s;

  if (str == s21_NULL)
    return (s21_NULL);

  tmp_s = (unsigned char *)str;
  i = 0;
  while (i < n) {
    *tmp_s++ = c;
      i++;
  }
  return (str);
}
