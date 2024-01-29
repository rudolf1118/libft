#include "../libft.h"

/*static int counter(char const *str, char c, int counter, int index)
{
    while (str[index])
    {
        if(str[index] == c)
            counter++;
        index++;
    }
    return (counter);
}
static int starter(char const *str, char c, int counter, int index)
{
    int i;
    int start;
    while (str[i])
    {
        if (str[i] != c && (str[i - 1] == c || i == 0))
        {
            start = i;
        }
        i++;
    }
}

static int counterofindex(char const *str, char c, int counter, int index)
{
    int i;
    int end;

    
    while (str[index])
    {
        while(str[index] != c)
        {
            end = index;
            index++;
        }
        index++;
    }
    return (i);
}
*/
char **ft_split(char const *s, char c)
{
    int index;
    int counter;
    char **result;
    result = (char **)malloc(sizeof(c) *( 2 + ft_strlen(s)));
    counter = 1;
    index = 0;
    return (result);
}