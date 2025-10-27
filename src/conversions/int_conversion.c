/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/27 20:03:28 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	manage_sign(int *nbr, t_modifiers *mods, bool *int_min_overflow)
{
	if (*nbr >= 0)
	{
		if (mods->plus)
			return ('+');
		else if (mods->blank)
			return (' ');
	}
	else if (mods->width || mods->precision)
	{
		if (*nbr == INT_MIN)
		{
			*nbr = -(*nbr + 1);
			*int_min_overflow = true;
		}
		else
			*nbr = -*nbr;
		return ('-');
	}
	return (0);
}

static void	print_number(int nbr, bool int_min_overflow)
{
	if (int_min_overflow)
	{
		ft_putnbr_fd(nbr / 10, 1);
		ft_putnbr_fd(nbr % 10 + 1, 1);
	}
	else
		ft_putnbr_fd(nbr, 1);
}

int	write_int(int nbr, t_modifiers *mods)
{
	char			sign;
	int				paddng;
	int				precsn;
	bool			int_min_overflow;

	int_min_overflow = false;
	sign = manage_sign(&nbr, mods, &int_min_overflow);
	precsn = ft_maxnbr(0, mods->precision - ft_nbrlen(nbr));
	paddng = ft_maxnbr(0, mods->width - (ft_nbrlen(nbr) + (bool)sign + precsn));
	if (mods->zero && sign)
		ft_putchar_fd(sign, 1);
	if (!mods->minus)
		fill_width(paddng, mods->zero);
	if (!mods->zero && sign)
		ft_putchar_fd(sign, 1);
	if (mods->precision)
		fill_char('0', precsn);
	print_number(nbr, int_min_overflow);
	if (mods->minus)
		fill_width(paddng, mods->zero);
	return (ft_nbrlen(nbr) + (bool)sign + paddng + precsn);
}
