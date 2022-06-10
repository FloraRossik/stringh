#include "s21_string.h"

char *s21_strcat(char *dest, const char *src) {
  int i;
  int j;
  unsigned char *tmp_dest;
  unsigned char *tmp_src;

  tmp_dest = (unsigned char *)dest;
  tmp_src = (unsigned char *)src;
  i = 0;
  while (tmp_dest[i] != '\0') {
        i++;
  }
  j = 0;
  while (tmp_src[j] != '\0') {
    tmp_dest[i] = tmp_src[j];
      i++;
      j++;
  }
  tmp_dest[i] = '\0';
  return (dest);
}
