/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/29 00:12:50 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hex(unsigned int nbr)
{
	char const	*hex = "0123456789abcdef";

	if (nbr > 0)
	{
		print_hex(nbr / 16);
		ft_putchar_fd(hex[nbr % 16], 1);
	}
}

int	write_hex(int nbr, t_modifiers *mods)
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
	print_hex(nbr);
	if (mods->minus)
		fill_width(paddng, mods->zero);
	return (nbr_len + (bool)sign + paddng + precsn);
}
