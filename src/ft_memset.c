#include "../libft.h"

void *ft_memset (void *ptr, int value, size_t num)
{
    char *meme;
    size_t i;

    i = 0;
    meme = ptr;
    while (i < num)
    {
        meme[i] = (char) value;
        i++;
    }
    return (meme);
}