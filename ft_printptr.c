/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idumenil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:03:56 by idumenil          #+#    #+#             */
/*   Updated: 2023/03/23 15:38:11 by idumenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrlen(uintptr_t ptr)
{
	int	i;

	i = 0;
	while (ptr != 0)
	{
		ptr = ptr / 16;
		i++;
	}
	return (i);
}

void	ft_putptr(uintptr_t nbr)
{
	if (nbr >= 16)
	{
		ft_putptr(nbr / 16);
		ft_putptr(nbr % 16);
	}
	else
	{
		if (nbr > 9)
			ft_putchar_fd(nbr - 10 + 'a', 1);
		else
			ft_putchar_fd(nbr + '0', 1);
	}
}

int	ft_printptr(uintptr_t nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		len += write(1, "0x", 2);
		ft_putptr(nbr);
		len += ft_ptrlen(nbr);
	}
	return (len);
}
