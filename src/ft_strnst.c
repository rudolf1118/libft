#include "../libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t leng;
    size_t j;

    j = 0;
    i = 0;
    leng = ft_strlen(needle);
    if(!needle || (leng > len))
        return (NULL);
    while (i < len)
    {
        if (needle[i] == haystack[j])
        {
            i++;
            while (i < leng && needle[i] == haystack[j])
            {

            }
        }
        i++;
    }
}