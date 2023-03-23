/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idumenil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:50:43 by idumenil          #+#    #+#             */
/*   Updated: 2023/03/23 10:30:21 by idumenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_find_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	if (format == 'p')
		len += ft_printptr(va_arg(args, unsigned long long));
	if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(args, int));
	if (format == 'u')
		len += ft_printunsint(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		len += ft_printhex(va_arg(args, unsigned int), format);
	if (format == '%')
		len += ft_printpercent();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_find_format(args, str[i + 1]);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
