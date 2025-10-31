/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/30 18:05:02 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

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

static void	print_prefix(bool uppercase)
{
	if (uppercase)
		ft_putstr_fd("0X", 1);
	else
		ft_putstr_fd("0x", 1);
}

static int	sum_prefix(unsigned int nbr, t_modifiers *mods)
{
	if (mods->hash && nbr != 0)
		return (2);
	else
		return (0);
}

int	write_hex(int nbr, t_modifiers *mods, bool uppercase)
{
	char			sign;
	unsigned int	u_nbr;
	int				nbr_len;
	int				paddng;
	int				precsn;

	sign = manage_sign(nbr, &u_nbr, mods);
	nbr_len = len_hex(u_nbr);
	precsn = ft_maxnbr(0, mods->precision - nbr_len);
	paddng = ft_maxnbr(0, mods->width - (nbr_len + (bool)sign + precsn
				+ sum_prefix(u_nbr, mods)));
	if (mods->zero && sign)
		ft_putchar_fd(sign, 1);
	if (!mods->minus)
		fill_width(paddng, mods->zero);
	if (!mods->zero && sign)
		ft_putchar_fd(sign, 1);
	if (mods->hash && nbr != 0)
		print_prefix(uppercase);
	if (mods->precision)
		fill_char('0', precsn);
	print_hex(nbr, uppercase);
	if (mods->minus)
		fill_width(paddng, mods->zero);
	return (nbr_len + (bool)sign + paddng + precsn);
}
