/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uint_conversion_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/11/02 21:53:30 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	print_number(unsigned int nbr, t_modifiers *mods)
{
	if (!(mods->is_precision && mods->precision == 0 && nbr == 0))
	{
		if (nbr >= INT_MAX)
		{
			ft_putnbr_fd(nbr / 10, 1);
			ft_putnbr_fd(nbr % 10, 1);
		}
		else
			ft_putnbr_fd(nbr, 1);
	}
}

unsigned int	write_uint(unsigned int nbr, t_modifiers *mods)
{
	int				nbr_len;
	int				paddng;
	int				precsn;

	if (mods->is_precision && mods->precision == 0 && nbr == 0)
		nbr_len = 0;
	else
		nbr_len = ft_nbrlen(nbr);
	precsn = ft_maxnbr(0, mods->precision - nbr_len);
	paddng = ft_maxnbr(0, mods->width - (nbr_len + precsn));
	if (!mods->minus)
		fill_width(paddng, mods->zero);
	fill_char('0', precsn);
	print_number(nbr, mods);
	if (mods->minus)
		fill_width(paddng, mods->zero);
	return (nbr_len + paddng + precsn);
}
