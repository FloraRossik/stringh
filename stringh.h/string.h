#ifndef STRING_H
#define STRING_H
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void    *ft_memchr(const void *str, int c, size_t n);
int     ft_memcmp(const void *str1, const void *str2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
//void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *str, int c, size_t n);

char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);
char    *strchr(const char *str, int c);
int     strcmp(const char *str1, const char *str2);
int     strncmp(const char *str1, const char *str2, size_t n);
char    *strcpy(char *dest, const char *src);
char    *strncpy(char *dest, const char *src, size_t n);
size_t  strcspn(const char *str1, const char *str2);
char    *strerror(int errnum);
size_t  ft_strlen(const char *str);
char    *strpbrk(const char *str1, const char *str2);
char    *strrchr(const char *str, int c);
size_t  strspn(const char *str1, const char *str2);
char    *ft_strstr(const char *haystack, const char *needle);
char    *strtok(char *str, const char *delim);


#endif