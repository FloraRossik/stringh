#include "string.h"
#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *dest, const char *src, size_t n)
{
  size_t i;
  unsigned char *tmp_dest;
  unsigned char *tmp_src;

  tmp_dest = (unsigned char *)dest;
  tmp_src = (unsigned char *)src;
  i = 0;
  while (i < n)
  {
    tmp_dest[i] = tmp_src[i];
      i++;
  }
  tmp_dest[i] = '\0';
  return (dest);
}

// int main()
// {
//   char str1[16];
//   char str2[] = "Hello my name";
//   ft_strcpy(str1, str2, 5);
//   printf("%s", str1);
//   return 0;
// }