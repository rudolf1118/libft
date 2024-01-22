#include "../libft.h"

size_t ft_strlen(const char *arg)
{
    int i;

    i = 0;
    while(arg[i])
        i++;
    return (i);
}