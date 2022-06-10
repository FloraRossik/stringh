#include "s21_string.h"
#include <stdio.h>

int main()
{

  char *res = s21_memchr("Germany", 'r', 2);
  printf("%d\n", res == s21_NULL);

  return 0;
}
