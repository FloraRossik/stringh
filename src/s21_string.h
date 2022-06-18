#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

#define s21_size_t unsigned long long
#define s21_NULL (void*)0

#include <stdarg.h>
#include <math.h>
#include <stdlib.h>
#include <inttypes.h>
#include <wchar.h>

struct PutSettings {
    int r_justify;
    int justify_num;
    int dot_specifier;
    int must_signed;
    int must_spaced;
    int mem_allocated;
    int l_defined;
    int h_defined;
    int L_defined;
    int base;
    int big_x;
    int char_counter;
    int hash;
    int big_e;
    int g_specified;
    int dot_specified;
    int zero_specified;
    int is_num;
    int pointer;
};

void *s21_memchr(const void *str, int c, s21_size_t n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memmove(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);
char *s21_strcat(char *dest, const char *src);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strchr(const char *str, int c);
int s21_strcmp(const char *str1, const char *str2);
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);
char *s21_strcpy(char *dest, const char *src);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
s21_size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strerror(int errnum);
s21_size_t s21_strlen(const char *str);
char *s21_strpbrk(const char *str1, const char *str2);
char *s21_strrchr(const char *str, int c);
s21_size_t s21_strspn(const char *str1, const char *str2);
char *s21_strstr(const char *haystack, const char *needle);
char *s21_strtok(char *str, const char *delim);

void *s21_to_upper(const char *str);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, s21_size_t start_index);
void *s21_trim(const char *src, const char *trim_chars);

char *get_decimal_str(long long a, int is_neg, struct PutSettings settings);
char *get_hex_str(long long int a, struct PutSettings settings);
char *get_octa_str(long long a, struct PutSettings settings);
char *itoa(long long int a, struct PutSettings settings);
void reverse(char* src);
int get_num_from_format(char* str);
void set_default(struct PutSettings *settings);
const char *set_settings(const char *format, struct PutSettings *settings, va_list args, int set_def);
char *justify_flags(char* str, struct PutSettings settings);
char *get_float_as_str(long double f_num, struct PutSettings settings);
char *specify_int(char *num_str, struct PutSettings settings);
char *specify_str(char *str, struct PutSettings settings);
char *get_exponent_as_str(int exp);
char *get_exp_as_str(long double f_num, struct PutSettings settings);
char *get_arg_as_str(const char *format, struct PutSettings *settings, va_list args);
int s21_sprintf(char *str, const char *format, ...);

int s21_sscanf(const char *str, const char *format, ...);
void get_string(char **src, char *dest, int length);
void get_char(char **src, int *c, int length);
char *get_int(char *src, long *num, int length);
void custom_atoi(char **src, long * num, int length);
int get_character_index(char *src, char c);
void get_double(char **src, float *num);
void get_octa(char **src, unsigned long *num, int length);
void get_hexa(char **src, unsigned long *num, int length);
void skip_spaces(char **str);
void double_to_float(char **src, double *num);
void string_to_wchar(char **src, wchar_t *str, int length);
void get_ptr(char **src, void **ptr, int length);
void get_float(char **src, double *num, int length);

#endif  // SRC_S21_STRING_H_
