#include "s21_string.h"

void *s21_memcpy(void *dest, const void *src, size_t n) {
  size_t i;
  unsigned char *tmp_dest;
  unsigned char *tmp_src;

  if (src == s21_NULL)
    return (s21_NULL);

  tmp_dest = (unsigned char *)dest;
  tmp_src = (unsigned char *)src;

  i = 0;
  while (i < n) {
    *tmp_dest++ = *tmp_src++;
      i++;
  }
  return (dest);
}
