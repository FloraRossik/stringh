#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
  unsigned char *tmp_s;

  tmp_s = (unsigned char *)str;
  while (*tmp_s != '\0')
  {
    if (*tmp_s == c)
      return (char *)tmp_s;
    tmp_s++;
  }
  return (NULL);
}

// int main()
// {
//   char *result;
//   char str[] = "Holywood Anjelina";
//   result = ft_strchr(str, 'n');
//   printf("%s", result);
//   return 0;
// }