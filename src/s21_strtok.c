#include "s21_string.h"
#include <string.h>
#include <stdio.h>

char *s21_strtok(char *str, const char *delim) {
  char *tmp_ptr;
  static char *token = s21_NULL;

  if (delim == s21_NULL)
    return (s21_NULL);

  if (str == s21_NULL)
  {
    if (token == s21_NULL)
      return (s21_NULL);
    str = token;
  }
  while (strchr(delim, *str) != s21_NULL)
    str++;
  tmp_ptr = str;
  while (*str != '\0')
  {
    if (strchr(delim, *str) != s21_NULL)
      break;
    str++;
  }
  if (*str == '\0')
  {
    token = s21_NULL;
    return (tmp_ptr);
  }
  *str = 0;
  token = str + 1;
  return (tmp_ptr);
}


// int main()
// {
//    char test1[50] = "aboba,hello,world,trim";
//     char test2[50] = "aboba,hello,world,trim";
//     char delim1[10] = "123,";
//     char *orig1, *copy1;
//     orig1 = strtok(test1, delim1);
//     copy1 = strtok(test2, delim1);
//     char orig_res1[1000] = {0};
//     char copy_res1[1000] = {0};
//     while (orig1 != NULL) {
//       strcat(orig_res1, orig1);
//       orig1 = strtok(NULL, delim1);
//     }
//     while (copy1 != NULL) {
//       strcat(copy_res1, copy1);
//       copy1 = strtok(NULL, delim1);
//     }
//   printf("%s\n", orig_res1);
//   printf("%s\n", copy_res1);
//   return (0);
// }

// int main()
// {
//    char str[60] = "School-21";
//    const char s[3] = "Sc";
//    char *token;
   
//    /* get the first token */
//    token = s21_strtok(str, s);
  
//    /* walk through other tokens */
//    while( token != NULL ) {
//       printf( "%s\n", token );
    
//       token = s21_strtok(NULL, s);
//    }
   
//    return(0);
// }