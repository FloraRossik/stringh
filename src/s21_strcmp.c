
#include <string.h>
#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
  int i;
  unsigned char *tmp_s1;
  unsigned char *tmp_s2;

  tmp_s1 = (unsigned char *)s1;
  tmp_s2 = (unsigned char *)s2;
  i = 0;
  while (tmp_s1[i] != '\0' && tmp_s2[i] != '\0')
  {
    if (tmp_s1[i] != tmp_s2[i])
      break;
    i++;
  }
  return (tmp_s1[i] - tmp_s2[i]);
}

// int main()
// {
//   int result;
//   char str1[] = "Hellol";
//   char str2[] = "Hello";
//   result = ft_strcmp(str1, str2);
//   printf("%d", result);
//   return 0;
// }