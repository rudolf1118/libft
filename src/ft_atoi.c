#include "../libft.h"

static int qanak(const char *str, int i)
{
    int qanak;

    qanak = 0;
    while (str[i] != '\0' && str[i] == '-' || str[i] == '+')
    {
        qanak++;
        i++;
    }
    return (qanak);
}
static int checker(const char *str, int i)
{
    int minus;

    minus = 1;
    if (str[i] == '-')
        return (minus * -1);
    return (minus);
}

int ft_atoi(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] == ' ')
        i++;
    if (qanak(str, i) > 1 )
        return (0);
    
    
}