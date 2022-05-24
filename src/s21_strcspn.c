
#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
  int count;

  count = 0;
  while (*s != '\0')
  {
    count++;
    s++;
  }
  return (count);
}

size_t ft_strcspn(const char *str1, const char *str2)
{
  size_t count;
  size_t result;
  size_t i;
  size_t j;
  unsigned char *tmp_str1;
  unsigned char *tmp_str2;

  tmp_str1 = (unsigned char *)str1;
  tmp_str2 = (unsigned char *)str2;
  i = 0;
  count = 0;
  result = 0;
  while (tmp_str2[i] != '\0')
  {
    j = 0;
    while (tmp_str1[j] != '\0')
    {
      if (tmp_str1[j] == tmp_str2[i])
      {
        count++;
      }
      j++;
    }
    i++;
  }
  result = ft_strlen(str1);
  result -= count;
  return (result);
}

// int main()
// {
//   int result;
//   char str1[] = "Rita RiRiRiTQ";
//   char str2[] = "Ri";
//   result = ft_strcspn(str1, str2);
//   printf("%d", result);
//   return 0;
// }