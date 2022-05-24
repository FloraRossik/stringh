
#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *str, int c)
{
  int start;
  
  start = strlen(str);
  while (start >= 0)
  {
    if (str[start] == c)
      return ((char *)&str[start]);
    start--;
  }
  return (NULL);
}

// int main()
// {
//   char *result;
//   char str[] = "16786345036899996";
//   result = ft_strrchr(str, '9');
//   printf("%s", result);
//   return 0;
// }