#include "../libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t leng;
    size_t j;
    size_t temp;

    j = 0;
    i = 0;
    leng = ft_strlen(needle);
    if(leng > len)
        return (NULL);
    else if (leng == 0)
        return ((char *)haystack);
    while (i < len && haystack[i] != '\0')
    {
        j = 0;
        while (haystack[i] == needle[j] && j < leng - 1)
        {
            j++;
            i++;
        }
        temp = i + 1;
        i++;
    if (j == leng - 1 && (haystack[i - 1] == needle[j] ))
        return ((char *)haystack + temp - leng);
    }
    return (NULL);
}