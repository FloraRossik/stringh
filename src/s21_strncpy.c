#include "s21_string.h"

char *s21_strncpy(char *dest, const char *src, size_t n) {
  size_t i;
  unsigned char *tmp_dest;
  unsigned char *tmp_src;

  if (n == 0)
    return (dest);
  if (dest == s21_NULL || src == s21_NULL)
    return (s21_NULL);
  tmp_dest = (unsigned char *)dest;
  tmp_src = (unsigned char *)src;
  i = 0;
  while (i < n && tmp_src[i] != '\0') {
    tmp_dest[i] = tmp_src[i];
      i++;
  }
  if (tmp_src[i] != '\0')
    tmp_dest[i] = '\0';
  return (dest);
}
