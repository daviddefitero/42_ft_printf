/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uint_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/30 18:05:02 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

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

unsigned int	write_uint(unsigned int nbr, t_modifiers *mods)
{
	int const		nbr_len = ft_nbrlen(nbr);
	int				paddng;
	int				precsn;
	bool			int_max_overflow;

	if (nbr >= INT_MAX)
		int_max_overflow = true;
	else
		int_max_overflow = false;
	precsn = ft_maxnbr(0, mods->precision - nbr_len);
	paddng = ft_maxnbr(0, mods->width - (nbr_len + precsn));
	if (!mods->minus)
		fill_width(paddng, mods->zero);
	if (mods->precision)
		fill_char('0', precsn);
	print_number(nbr, int_max_overflow);
	if (mods->minus)
		fill_width(paddng, mods->zero);
	return (nbr_len + paddng + precsn);
}
