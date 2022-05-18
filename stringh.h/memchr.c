#include "string.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
    unsigned char *tmp_s;
    unsigned char tmp_chr;

    tmp_s = (unsigned char *)str;
    tmp_chr = (unsigned char)c;
    i = 0;
    while(i < n)
    {
        if (*tmp_s == tmp_chr)
            return(tmp_s);
        i++;
        tmp_s++;
    }
    return (NULL);
}

// int main()
// {
//     char str1[] = "world mog after source";
//     char *str_print;

//     str_print = ft_memchr(str1, 'f', 17);
//     printf("%p", str_print);
//     return 0;
// }