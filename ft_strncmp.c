#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t i;
  unsigned char *tmp_s1;
  unsigned char *tmp_s2;

  tmp_s1 = (unsigned char *)s1;
  tmp_s2 = (unsigned char *)s2;
  i = 0;
  while (i < n && tmp_s1[i] != '\0' && tmp_s2[i] != '\0')
  {
    if (tmp_s1[i] != tmp_s2[i])
      break;
    i++;
  }
  return(tmp_s1[i] - tmp_s2[i]);
}

int main()
{
  int result;
  char str1[] = "HelloKLAA";
  char str2[] = "Heljo";
  result = ft_strncmp(str1, str2, 10);
  printf("%d", result);
  return 0;
}