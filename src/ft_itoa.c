#include "../libft.h"

static int count(int num)
{
    int counter;

    counter = 0;
    while (num != 0)
    {
        num /= 10;
        counter++;
    }
    return (counter);
}
static char *inner(char *src, int n, int counter, char minus)
{
    int x;
    int c;
    int i;
    int res;

    i = 0;
    c = counter;
    x = 1;
     while (--c > 0)
        x *= 10;
    if (minus == '-')
    {
        src[0] = minus;
        i = 1;
    }
    while (i <= counter)
    {
        res = n / x;
        src[i] = res + '0';
        n = n - res * x;
        x /= 10;
        i++;
    }
    src[i] = '\0';
    return (src);
}

char *ft_itoa(int n)
{
    char minus;
    int counter;
    char *result;

    minus = '\0';
    counter = count(n);
    /*if (n < 0)
    {
        result = (char *)malloc(sizeof(char) * (counter + 2));
        n = n * -1;
        minus = '-';
    }
    else
    {
        result = (char *)malloc(sizeof(char) * (counter + 10));
    }
    */
       if (n >= 0)
    {
        result = (char *)malloc(sizeof(char) * (counter + 1));
        minus = '+';
    }
    else
    {
        result = (char *)malloc(sizeof(char) * (counter + 2));
        minus = '-';
        n *= -1;
    }
    inner(result, n, counter, minus);
    return (result);
}