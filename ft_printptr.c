#include "ft_printf.h"
#include "libft/libft.h"
#include <stdint.h>

int ft_ptrlen(uintptr_t ptr)
{
    int i;

    i = 0;
    while (ptr != 0)
    {
        ptr = ptr / 16;
        i++;
    }
    return (i);
}

void    ft_putptr(uintptr_t nbr)
{
    if (nbr >= 16)
    {
        ft_putnbr_fd(nbr / 16, 1);
        ft_putnbr_fd(nbr % 16, 1);
    }
    else
    {
        if (nbr > 9)
            ft_putchar_fd(nbr - 10 + 'a', 1);
        else
            ft_putchar_fd(nbr + '0', 1);
    }
}

int ft_printptr(uintptr_t nbr)
{
    int len;

    len = 0;
    if (nbr == 0)
    {
        ft_putchar_fd('0', 1);
        return (1);
    }
    else
    {
        write(1, "0x", 2);
        len += 2;
        ft_putptr(nbr);
        len += ft_ptrlen(nbr);
    }
    return (len);
}
