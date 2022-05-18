#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memmove(void *dest, void *src, size_t n)
{
    size_t i;
    unsigned char *tmp_dest;
    unsigned char *tmp_src;

    tmp_dest = (unsigned char *)dest;
    tmp_src = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        *tmp_dest++ = *tmp_src++;
            i++;
    }
    return (tmp_dest);
}

// int main()
// {
//     char str1[20] = "Hello";
//     char str2[] = "";
//     memmove(str1, str2, 10);
//     printf("%s", str1);
//     return 0;
// }