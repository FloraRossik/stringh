#include <string.h>
#include <stdio.h>

char *ft_strpbrk(const char *s, const char *accept)
{
  if (s == NULL || strlen(accept) == 0)
    return (NULL);

  while (*s != '\0')
  {
    if(strchr(accept, *s) != NULL)
    {
      return(char *)s;
    }
    s++;
  }
  return (NULL);
}

// int main(int argc, char const *argv[])
// {
//   printf("%s\n", ft_strpbrk("hello my name is darya", "ae"));
//   return 0;
// }
