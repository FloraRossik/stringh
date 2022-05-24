
#include <string.h>
#include <stdio.h>

char *ft_strpbrk(const char *str1, const char *str2)
{
  if (str1 == NULL || strlen(str2) == 0)
    return (NULL);

  while (*str1 != '\0')
  {
    if(strchr(str2, *str1) != NULL)
    {
      return(char *)str1;
    }
    str1++;
  }
  return (NULL);
}

// int main(int argc, char const *argv[])
// {
//   printf("%s\n", ft_strpbrk("hello my name is darya", "ae"));
//   return 0;
// }
