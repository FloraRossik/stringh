#include "s21_string.h"

int s21_strcmp(const char *s1, const char *s2) {
  int i;
  unsigned char *tmp_s1;
  unsigned char *tmp_s2;
  if (s1 == NULL || s2 == NULL)
    return (0);
  tmp_s1 = (unsigned char *)s1;
  tmp_s2 = (unsigned char *)s2;
  i = 0;
  while (tmp_s1[i] != '\0' && tmp_s2[i] != '\0') {
    if (tmp_s1[i] != tmp_s2[i] || tmp_s1[i] == '\0' || tmp_s2[i] == '\0')
      break;
    i++;
  }
  return (tmp_s1[i] - tmp_s2[i]);
}
