#include "s21_string.h"

void *s21_memchr(const void *str, int c, size_t n) {
  size_t i;
  unsigned char *tmp_s;
  unsigned char tmp_chr;

  if (str == s21_NULL)
    return (s21_NULL);

  tmp_s = (unsigned char *)str;
  tmp_chr = (unsigned char)c;
  i = 0;
  while (i < n) {
    if (*tmp_s == tmp_chr)
      return(tmp_s);
    i++;
    tmp_s++;
  }
  return (s21_NULL);
}
