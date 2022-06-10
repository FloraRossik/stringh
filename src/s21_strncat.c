#include "s21_string.h"

char *s21_strncat(char *dest, const char *src, size_t n) {
  int i;
  size_t j;
  unsigned char *tmp_dest;
  unsigned char *tmp_src;
  if (src == s21_NULL)
    return (s21_NULL);
  tmp_dest = (unsigned char *)dest;
  tmp_src = (unsigned char *)src;
  i = 0;
  while (tmp_dest[i]!= '\0') {
        i++;
  }
  j = 0;
  while (tmp_src[j] != '\0' && j < n) {
    tmp_dest[i] = tmp_src[j];
      i++;
      j++;
  }
  tmp_dest[i] = '\0';
  return (dest);
}
