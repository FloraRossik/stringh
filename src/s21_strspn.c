#include "s21_string.h"

size_t s21_strspn(const char *str1, const char *str2) {
  size_t count;
  unsigned char *tmp_str1;
  unsigned char *tmp_str2;

  tmp_str1 = (unsigned char *)str1;
  tmp_str2 = (unsigned char *)str2;

  count = 0;
  while (*tmp_str2 == *tmp_str1) {
    count++;
    tmp_str2++;
    tmp_str1++;
  }
  if (count > 0)
    return (count);
  return (0);
}
