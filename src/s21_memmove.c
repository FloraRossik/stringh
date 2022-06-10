#include "s21_string.h"

void *s21_memmove(void *dest, const void *src, size_t n) {
    char *pp = (char *)src;
    char *pp2 = (char *)dest;

  if (dest == s21_NULL && src == s21_NULL)
    return (s21_NULL);
  if (pp2 > pp) {
    while (n-- > 0)
    pp2[n] = pp[n];
  } else {
  while (0 < n) {
    *pp2 = *pp;
    pp++;
    pp2++;
    n--;
    }
  }
  return (dest);
}
