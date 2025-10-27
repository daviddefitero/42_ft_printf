/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/27 20:06:00 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_str(int nbr, t_modifiers *mods)
{
	char			sign;
	int				paddng;
	int				precsn;

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
