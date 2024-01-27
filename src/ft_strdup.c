#include "../libft.h"

char *ft_strdup(const char *s1)
{
    char *copy;
    size_t len;
    int i;

    i = 0;
    len = ft_strlen(s1);
    copy = (char *) malloc((len + 1) * sizeof(char));
    if(!copy)
        return (NULL);
    while (s1[i] != '\0')
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}