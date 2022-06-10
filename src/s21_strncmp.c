#include "s21_string.h"

int s21_strncmp(const char *str1, const char *str2, size_t n) {
  size_t i;
  size_t j;
  unsigned char *tmp_s1;
  unsigned char *tmp_s2;

  if (n == 0)
    return (0);
  if (str1 == s21_NULL || str2 == s21_NULL)
    return (0);

  tmp_s1 = (unsigned char *)str1;
  tmp_s2 = (unsigned char *)str2;
  i = 0;
  j = 0;
  while (i < n && tmp_s1[i] != '\0' && tmp_s2[i] != '\0' && j < n) {
    if (tmp_s1[i] != tmp_s2[i] || tmp_s1[i] == '\0' || tmp_s2[i] == '\0')
      break;
    i++;
  }
  return(tmp_s1[i] - tmp_s2[i]);
}
