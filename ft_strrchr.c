#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
  int start;
  
  start = strlen(s);
  while (start >= 0)
  {
    if (s[start] == c)
      return ((char *)&s[start]);
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