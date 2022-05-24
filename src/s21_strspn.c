#include <string.h>
#include <stdio.h>

int ft_strchr(unsigned char *str, char c)
{
    while(*str == c)
    {
        if (*str == c)
            return (1);
        str++;
    }
    return (-1);
}

size_t ft_strspn(const char *str1, const char *str2)
{
    size_t count;
    unsigned char *tmp_str1;
    unsigned char *tmp_str2;

    tmp_str1 = (unsigned char *)str1;
    tmp_str2 = (unsigned char *)str2;

    count = 0;
    while (*tmp_str2 == *tmp_str1)
    {
        count++;
        tmp_str2++;
        tmp_str1++;
    }
    if (count > 0)
        return (count);
    return (0);
}

// int main()
// {
//   int result;
//   char str1[] = "123456-йд90";
//   char str2[] = "7890";
//   result = ft_strspn(str1, str2);
//   printf("%d", result);
//   return 0;
// }