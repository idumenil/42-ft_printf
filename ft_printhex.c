/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idumenil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:17:15 by idumenil          #+#    #+#             */
/*   Updated: 2023/03/15 15:21:20 by idumenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		nbr = nbr / 16;
		i++;
	}
	return (i);
}

void	ft_puthex(unsigned int nbr, const char format)
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
				ft_putchar_fd(nbr - 10 + 'a', 1);
			if (format == 'X')
				ft_putchar_fd(nbr - 10 + 'A', 1);
		}
		else
			ft_putchar_fd(nbr + '0', 1);
	}
}

int	ft_printhex(unsigned int nbr, const char format)
{
	if (nbr == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	else
		ft_puthex(nbr, format);
	return (ft_hexlen(nbr));
}
