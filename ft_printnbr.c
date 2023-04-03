/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idumenil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:59:12 by idumenil          #+#    #+#             */
/*   Updated: 2023/03/15 15:29:58 by idumenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int		len;
	char	*char_n;

	len = 0;
	char_n = ft_itoa(n);
	len = ft_printstr(char_n);
	free(char_n);
	return (len);
}
