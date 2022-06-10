#include "s21_string.h"

int s21_memcmp(const void *str1, const void *str2, size_t n) {
  size_t i;
  size_t j;
  unsigned char *tmp_s1;
  unsigned char *tmp_s2;

  if (str1 == s21_NULL && str2 == s21_NULL)
    return (0);
  tmp_s1 = (unsigned char *)str1;
  tmp_s2 = (unsigned char *)str2;

  i = 0;
  j = 0;
  while (i < n) {
    if ( tmp_s1[i] != tmp_s2[j])
      return (tmp_s1[i] - tmp_s2[j]);
    i++;
    j++;
  }
  return (0);
}
