#ifndef STRING_H
#define STRING_H
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#define s21_NULL ((void*)0)
#define size_t unsigned int

void    *s21_memchr(const void *str, int c, size_t n);
int     s21_memcmp(const void *str1, const void *str2, size_t n);
void    *s21_memcpy(void *dest, const void *src, size_t n);
void    *s21_memmove(void *dest, const void *src, size_t n);
void    *s21_memset(void *str, int c, size_t n);

char    *s21_strcat(char *dest, const char *src);
char    *s21_strncat(char *dest, const char *src, size_t n);
char    *s21_strchr(const char *str, int c);
int     s21_strcmp(const char *str1, const char *str2);
int     s21_strncmp(const char *str1, const char *str2, size_t n);
char    *s21_strcpy(char *dest, const char *src);
char    *s21_strncpy(char *dest, const char *src, size_t n);
size_t  s21_strlen(const char *str);
size_t  s21_strcspn(const char *str1, const char *str2);
char    *s21_strerror(int errnum);
char    *s21_strpbrk(const char *str1, const char *str2);
char    *s21_strrchr(const char *str, int c);
size_t  s21_strspn(const char *str1, const char *str2);
char    *s21_strstr(const char *haystack, const char *needle);
char    *s21_strtok(char *str, const char *delim);


#endif