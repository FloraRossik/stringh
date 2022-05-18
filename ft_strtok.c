#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>

int find_symb(char *str, int c)
{
  while (*str != '\0')
  {
    if (*str == c)
      return (1);
    str++;
  }
  return (0);
}

int ft_count_word(char *str, char *sep)
{
  int i;
  int count;

  count = 0;
  if (find_symb(sep, str[0]) == 0)
    count++;
  
  i = 1;
  while (str[i] != '\0')
  {
    if (find_symb(sep, str[i]) == 0)
      if (find_symb(sep, str[i - 1]) == 1)
        count++;
    i++;
  }
  return(count);
}

int ft_count_untill_word(char *str, char *sep)
{
  int count;

  count = 0;
  while (*str != '\0')
  {
    if (find_symb(sep, *str) == 1)
      return (count);
    count++;
    str++;
  }
  return (count);
}

char **ft_strtok(char *str, char *sep)
{
  int i;
  int j;
  int word_size;
  char **strtok;

  strtok = malloc((ft_count_word(str, sep) + 1) * sizeof(char *));
  if (strtok == NULL)
    return (NULL);

  i = 0;
  while (*str != '\0')
  {
    word_size = ft_count_untill_word(str, sep);
    if (word_size > 0)
    {
      printf("%d%s\n", i, str);
      strtok[i] = malloc((word_size + 1) * sizeof(char));
      if (strtok[i] == NULL)
        return (NULL);
      j = 0;
      while (word_size > j)
      {
        strtok[i][j] = *str;
        str++;
        j++;
      }
      strtok[i][j] = 0;
      i++;
    }
    if (*str)    
      str++;
  }
  strtok[i] = NULL;
  return (strtok);
}

int main()
{
  char **result;
  char *str = "Hello \0my name is\0";
  char *sep = "yeH";
  result = ft_strtok(str, sep);
  for (size_t i = 0; result[i] != NULL; i++)
  {
      printf("%s\n", result[i]);
  }
  return (0);
}

