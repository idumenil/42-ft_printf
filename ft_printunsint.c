#include "ft_printf.h"
#include <stdlib.h>

int ft_unsint_len(unsigned int u)
{
    int i;

    i = 0;
    while (u != 0)
    {
        u = u / 10;
        i++;
    }
    return (i);
}

char * ft_unsint_itoa(unsigned int u)
{
    int len;
    char *res;

    len = ft_unsint_len(u);
    res = (char *)malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    res[len] = '\0';
    while (u != 0)
    {
        res[len - 1] = u % 10 + 48;
        u = u / 10;
        len--;
    }
    return (res);
}

int ft_printunsint(unsigned int u)
{
    int len;
    char    *str;

    len = 0;
    if (u == 0)
        write(1, "0", 1);
    else
    {
        str = ft_unsint_itoa(u);
        len += ft_printstr(str);
        free((void *)str);
    }
    return (len);
}
