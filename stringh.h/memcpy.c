#include "string.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  size_t i;
  unsigned char *tmp_dest;
  unsigned char *tmp_src;

  tmp_dest = (unsigned char *)dest;
  tmp_src = (unsigned char *)src;

  i = 0;
  while (i < n)
  {
    *tmp_dest++ = *tmp_src++;
      i++;
  }
  return (dest);
}

// int main()
// {
//   unsigned char str_src[] = "My name is Florida";
//   unsigned char str_dest[16];

//   printf("%c", ft_memcpy(str_dest, str_src, 12));
//   return 0;
// }