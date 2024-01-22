#include "../libft.h"

int ft_isalnum(int arg)
{
    if((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z') || (arg >= '0' && arg <= '9') )
        return (1);
    return (0);
}