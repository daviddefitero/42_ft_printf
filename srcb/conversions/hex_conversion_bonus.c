/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_conversion_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/11/01 22:10:35 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	len_hex(unsigned int nbr)
{
	int	i;

	if (nbr == 0)
		return (1);
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

int	write_hex(unsigned int nbr, t_modifiers *mods, bool uppercase)
{
	int const		nbr_len = len_hex(nbr);
	int				paddng;
	int				precsn;

	precsn = ft_maxnbr(0, mods->precision - nbr_len);
	paddng = ft_maxnbr(0, mods->width - (nbr_len + precsn
				+ sum_prefix(nbr, mods)));
	if (!mods->minus)
		fill_width(paddng, mods->zero);
	if (mods->hash && nbr != 0)
		print_prefix(uppercase);
	if (mods->precision)
		fill_char('0', precsn);
	if (nbr == 0)
		ft_putchar_fd('0', 1);
	else
		print_hex(nbr, uppercase);
	if (mods->minus)
		fill_width(paddng, mods->zero);
	return (nbr_len + paddng + precsn);
}
