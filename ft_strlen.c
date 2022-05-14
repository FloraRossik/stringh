#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
  size_t i;
  unsigned char *tmp_s;

  tmp_s = (unsigned char *)s;
  i = 0;
  while (tmp_s[i] != '\0')
  {
    i++;
  }
  return (i);
}

int main()
{
  size_t result;
  char str[] = "Hello My name is Darya";

  result = ft_strlen(str);
  printf("%ld", result);
  return 0;
}