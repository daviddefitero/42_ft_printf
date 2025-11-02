/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_conversion_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/11/02 21:52:56 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	print_number(unsigned int nbr, t_modifiers *mods)
{
	if (!(mods->is_precision && mods->precision == 0 && nbr == 0))
	{
		if (nbr == (unsigned int)INT_MIN)
		{
			ft_putnbr_fd(nbr / 10, 1);
			ft_putnbr_fd(nbr % 10, 1);
		}
		else
			ft_putnbr_fd(nbr, 1);
	}
}

int	write_int(int nbr, t_modifiers *mods)
{
	char			sign;
	unsigned int	u_nbr;
	int				nbr_len;
	int				paddng;
	int				precsn;

	sign = manage_sign(nbr, &u_nbr, mods);
	if (mods->is_precision && mods->precision == 0 && u_nbr == 0)
		nbr_len = 0;
	else
		nbr_len = ft_nbrlen(u_nbr);
	precsn = ft_maxnbr(0, mods->precision - nbr_len);
	paddng = ft_maxnbr(0, mods->width - (nbr_len + (bool)sign + precsn));
	if (mods->zero && sign)
		ft_putchar_fd(sign, 1);
	if (!mods->minus)
		fill_width(paddng, mods->zero);
	if (!mods->zero && sign)
		ft_putchar_fd(sign, 1);
	fill_char('0', precsn);
	print_number(u_nbr, mods);
	if (mods->minus)
		fill_width(paddng, mods->zero);
	return (nbr_len + (bool)sign + paddng + precsn);
}
