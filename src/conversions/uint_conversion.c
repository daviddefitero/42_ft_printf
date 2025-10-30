/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uint_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/30 18:31:08 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_number(unsigned int nbr, bool int_max_overflow)
{
	if (int_max_overflow)
	{
		ft_putnbr_fd(nbr / 10, 1);
		ft_putnbr_fd(nbr % 10, 1);
	}
	else
		ft_putnbr_fd(nbr, 1);
}

unsigned int	write_uint(unsigned int nbr)
{
	bool			int_max_overflow;

	if (nbr >= INT_MAX)
		int_max_overflow = true;
	else
		int_max_overflow = false;
	print_number(nbr, int_max_overflow);
	return (ft_nbrlen(nbr));
}
