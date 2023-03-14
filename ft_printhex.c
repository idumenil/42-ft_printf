#include "ft_printf.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_hexlen(unsigned int nbr)
{
    int i;

    i = 0;
    while (nbr != 0)
    {
        nbr = nbr / 16;
        i++;
    }
    return (i);
}

void    ft_puthex(unsigned int nbr, const char format)
{
    if (nbr >= 16)
    {
        ft_puthex(nbr / 16, format);
        ft_puthex(nbr % 16, format);
    }
    else
    {
        if (nbr > 9)
        {
            if (format == 'x')
                ft_putchar(nbr - 10 + 'a');
            if (format == 'X')
                ft_putchar(nbr - 10 + 'A');
        }
        else
            ft_putchar(nbr + '0');
    }
}

int ft_printhex(unsigned int nbr, const char format)
{
    if (nbr == 0)
    {
        ft_putchar('0');
        return (1);
    }
    else
        ft_puthex(nbr, format);
    return (ft_hexlen(nbr));
}
