#include "ft_printf.h"
#include "libft/libft.h"

int ft_printnbr(int n)
{
    int len;
    char    *char_n;

    len = 0;
    char_n = ft_itoa(n);
    len = ft_printstr(char_n);
    free(char_n);
    return (len);
}


