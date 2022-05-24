#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memset(void *str, int c, size_t n)
{
  size_t i;
  unsigned char *tmp_s;

  tmp_s = (unsigned char *)str;
  i = 0;
  while (i < n)
  {
    *tmp_s++ = c;
      i++;
  }
  return (str);
}

// int main()
// {
//   char str[11];
//   //str[14] = 0;
//   ft_memset(str, 'P', 9);
//   printf("%s\n", str);
//   return 0;
// }