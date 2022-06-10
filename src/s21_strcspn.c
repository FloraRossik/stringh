#include "s21_string.h"

size_t s21_strcspn(const char *str1, const char *str2) {
  int i;
  int j;
  size_t count;

  if (str1 == s21_NULL)
    return (0);
  if (*str2 == 0)
    return (s21_strlen(str1));

  count = 0;
  i = 0;
  j = 0;
  while (str1[i] != str2[j] && str1[i] != '\0') {
    if (s21_strchr(str2, str1[i]) == s21_NULL)
      count++;
    if (s21_strchr(str2, str1[i]) != s21_NULL)
      return (count);
    i++;
    j++;
  }
  return (count);
}

// int main()
// {
//   size_t result;
//   char str1[] = "This is - www.tutorialspoint.com - website";
//   char test1[] = "-";
//   result = s21_strcspn(str1, test1);
//   printf("%d", result);
//   return 0;
// }