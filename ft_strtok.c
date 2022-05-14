#include <string.h>
#include <stdio.h>

int find_symb(char *str, char c)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] == c)
      return (1);
    i++;
  }
  return (0);
}

int ft_count_word(char *str, char *sep)
{
  int i;
  int count;
  if (str == NULL || sep == NULL || *str == 0)
    return (0);
  
  if (find_symb(sep, str[0]) == 0)
    count++;
  
  i = 1;
  while (str[i] != '\0')
  {
    if (find_symb(sep, str[i]) == 0)
      if (find_symb(sep, str[i - 1] == 1))
          count++;
    i++;
  }
  return (count);
}
