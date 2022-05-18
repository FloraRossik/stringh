#include "string.h"
#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, const char *src)
{
  int i;
  int j;
  unsigned char *tmp_dest;
  unsigned char *tmp_src;

  tmp_dest = (unsigned char *)dest;
  tmp_src = (unsigned char *)src;
  i = 0;
  while (tmp_dest[i] != '\0') {
        i++;
  }
  j = 0;
  while (tmp_src[j] != '\0')
  {
    tmp_dest[i] = tmp_src[j];
      i++;
      j++;
  }
  tmp_dest[i] = '\0';
  return (dest);
}

// int main()
// {
//   char str1[40] = "Hello";
//   char str2[] = "my name is Florida";
//   ft_strcat(str1, str2);
//   printf("%s\n", str1);
//   return 0;
// }