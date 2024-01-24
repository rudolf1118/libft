#include "../libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    int i;

    i = 0;
    if(!dst)
        return (NULL);
        if (dst > src)
        {
            i = (int) len - 1;
            while (i >= 0)
            {
                *(char*)(dst + i) =  *(char*)(src + i);
                i--;
            }
        }
        else
        {
            while(i < (int)len)
            {
                *(char*)(dst + i) =  *(char*)(src + i);
                i++;
            }
        }
        return (dst);
}