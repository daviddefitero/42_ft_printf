/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/30 18:05:02 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	put_nbr_overflw(int nbr)
{
	ft_putnbr_fd(-(nbr / 10), 1);
	ft_putnbr_fd(-(nbr % 10), 1);
}

int	write_int(int nbr, t_modifiers *mods)
{
	char			sign;
	unsigned int	u_nbr;
	int				nbr_len;
	int				paddng;
	int				precsn;

	sign = manage_sign(nbr, &u_nbr, mods);
	nbr_len = ft_nbrlen(u_nbr);
	precsn = ft_maxnbr(0, mods->precision - nbr_len);
	paddng = ft_maxnbr(0, mods->width - (nbr_len + (bool)sign + precsn));
	if (mods->zero && sign)
		ft_putchar_fd(sign, 1);
	if (!mods->minus)
		fill_width(paddng, mods->zero);
	if (!mods->zero && sign)
		ft_putchar_fd(sign, 1);
	if (mods->precision)
		fill_char('0', precsn);
	if (nbr == INT_MIN)
		put_nbr_overflw(nbr);
	else
		ft_putnbr_fd(u_nbr, 1);
	if (mods->minus)
		fill_width(paddng, mods->zero);
	return (nbr_len + (bool)sign + paddng + precsn);
}
