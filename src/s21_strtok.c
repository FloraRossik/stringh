#include "s21_string.h"
#include <string.h>
#include <stdio.h>

unsigned int is_delim(char c, const char *delim) {
    int ret = 0;

    while (*delim != '\0') {
        if (c == *delim) {
            ret = 1;
            break;
        }
        delim++;
    }
    return ret;
}

char *s21_strtok(char *str, const char *delim) {
    char *ret = s21_NULL;
    int let_work = 1;

    static char *backup_string;
    if (!str)
        str = backup_string;
    while (1) {
        if (is_delim(*str, delim)) {
            str++;
            continue;
        }
        if (*str == '\0') {
            let_work = 0;
        }
        break;
    }

    if (let_work) {
        ret = str;
        while (1) {
            if (*str == '\0') {
                backup_string = str;
                break;
            }
            if (is_delim(*str, delim)) {
                *str = '\0';
                backup_string = str + 1;
                break;
            }
            str++;
        }
    }

    return ret;
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
//    char str[60] = "This is - www.tutorialspoint.com - website";
//    const char s[2] = "-";
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