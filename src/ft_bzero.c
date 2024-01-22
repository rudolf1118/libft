#include "../libft.h"

void ft_bzero(void *str, size_t num)
{
    char *string;
    size_t  i;

    string = str;
    i = 0;
    while (i < num)
    {
        string[i] = 0;
        i++;
    }
}