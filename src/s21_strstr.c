
#include <string.h>
#include <stdio.h>

char *ft_strstr(const char *haystack, const char *needle)
{
  int j;
  unsigned char *tmp_str;

  if (*needle == '\0')
    return (char *)haystack;

  while (*haystack != '\0')
  {
      j = 0;
      tmp_str = (unsigned char *)haystack;
      while (*haystack == needle[j])
      {
        if(needle[j + 1] == '\0')
          return (char *)tmp_str;
        j++;
        haystack++;
      }
    haystack++;
  }
  return (NULL);
}

// int main()
// {
//   char *result;
//   char str1[] = "Hel GTA llo error Juy MAY";
//   char str2[] = "Juy";
//   result = ft_strstr(str1,str2);
//   printf("%s", result);
//   return 0;
// }