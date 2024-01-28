#include "../libft.h"

static int partofstr(char s, const char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (s == str[i])
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set) // "helloarmenhello"
{
    int i;
    char *result;
    int start;
    int end;

    i = 0;
    start = 0;
    while (s1[start] && partofstr(s1[start],set))
        start++;
    end = ft_strlen(s1) - 1;
    while (end > start && partofstr(s1[end],set))
        end--;
    result = (char *)malloc(sizeof(char) * (end - start) + 1);
    while (start <= end)
    {
        result[i] = s1[start];
        start++;
        i++;
    }
    result[i] = '\0';
    return (result);
}