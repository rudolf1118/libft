#include "../libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;
    unsigned char	*ptr;
    unsigned char	*ptr2;
    ptr = (unsigned char*)s1;
    ptr2 = (unsigned char*)s2;

    i = 0;

    while ((ptr[i] != '\0' || ptr2[i] != '\0') && i < (int)n)
    {
        if (ptr[i] != ptr2[i])
            return (ptr[i] - ptr2[i]);

        i++;
    }
    return (0);
}