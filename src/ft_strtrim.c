#include "../libft.h"

static size_t finderfromstart(const char *s1, const char *set, size_t len)
{
    size_t lenres;
    int i;
    int j;
    int breaker;
    i = 0;
    j = 0;
    lenres = 0;
    while (s1[j] != '\0' && breaker != 1)
    {
        i = 0;
        while(s1[j] == set[i])
        {
            j++;
            i++;
        }
        if(i == len)
        {
            lenres += len;
            breaker = 1;
        }
        j++;
    }
    return (lenres);
}

static size_t finderfromend(const char *s1, const char *set, size_t len)
{
    size_t lenres;
    int i;
    int j;
    int breaker;

    i = len - 1;
    j = (int)ft_strlen(s1) - 1;
    lenres = 0;
    while (j > 0 && breaker != 1)
    {
        i = len - 1;
        while(s1[j] == set[i] && i > 0)
        {
            j--;
            i--;
        }
        if (i == 0)
        {
            lenres += len;
            breaker = 1;
        }
        j--;
    }
    return (lenres);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t len;
    char *result;
    size_t lenres;

    lenres = 0;
    len = ft_strlen(set);
    result = (char *) malloc(sizeof(char) * finderfromend(s1, set, len) + finderfromstart(s1, set, len) + 1);

}