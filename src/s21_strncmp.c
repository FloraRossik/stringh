
#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
  size_t i;
  size_t j;
  unsigned char *tmp_s1;
  unsigned char *tmp_s2;

  tmp_s1 = (unsigned char *)str1;
  tmp_s2 = (unsigned char *)str2;
  i = 0;
  j = 0;
  while (i < n && tmp_s1[i] != '\0' && tmp_s2[i] != '\0' && j < n)
  {
    if (tmp_s1[i] != tmp_s2[i])
      break;
    i++;
  }
  return(tmp_s1[i] - tmp_s2[i]);
}

// int main()
// {
//   int result;
//   char str1[] = "HelloKLAA";
//   char str2[] = "Heljo";
//   result = ft_strncmp(str1, str2, 10);
//   printf("%d", result);
//   return 0;
// }