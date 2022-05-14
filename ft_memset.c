#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
  size_t i;
  unsigned char *tmp_s;
  if (s == NULL || n < 1)
    return (NULL);
  tmp_s = (unsigned char *)s;
  i = 0;
  while (i < n)
  {
    *tmp_s++ = c;
      i++;
  }
  return (s);
}

int main()
{
  char str[11];
  //str[14] = 0;
  ft_memset(str, 'P', 9);
  printf("%s\n", str);
  return 0;
}