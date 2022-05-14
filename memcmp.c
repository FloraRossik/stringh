#include <string.h>
#include <unistd.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  size_t i;
  size_t j;
  unsigned char *tmp_s1;
  unsigned char *tmp_s2;

  tmp_s1 = (unsigned char *)s1;
  tmp_s2 = (unsigned char *)s2;

  i = 0;
  j = 0;
  while (i < n)
  {
    if ( tmp_s1[i] != tmp_s2[j])
      return (tmp_s1[i] - tmp_s2[j]);
    i++;
    j++;
  }
  return (0);
}

int main()
{
  int result;
  char str1[] = "My name is";
  char str2[] = "My name is";

  result = ft_memcmp(str1, str2, 9);
  printf("%d", result);
  return 0;
}