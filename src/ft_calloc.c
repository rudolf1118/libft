#include "../libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *result;

    result = (int *) malloc(count * size);
    if (!result)
        return (result);
    ft_bzero(result, count * size);
    return (result);
}