/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/11/01 21:54:53 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_hex(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

static void	print_hex(unsigned int nbr, bool uppercase)
{
	char const	*hex = "0123456789abcdef";

	if (nbr > 0)
	{
		print_hex(nbr / 16, uppercase);
		if (uppercase)
			ft_putchar_fd(ft_toupper(hex[nbr % 16]), 1);
		else
			ft_putchar_fd(hex[nbr % 16], 1);
	}
}

int	write_hex(unsigned int nbr, bool uppercase)
{
	if (nbr == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	print_hex(nbr, uppercase);
	return (len_hex(nbr));
}
