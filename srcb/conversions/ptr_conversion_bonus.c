/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_conversion_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:28:49 by dde-fite          #+#    #+#             */
/*   Updated: 2025/11/01 23:06:20 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	len_hex_ptr(uintptr_t nbr)
{
	int	i;

	i = 2;
	while (nbr > 0)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

static void	print_hex_ptr(uintptr_t nbr)
{
	char const	*hex = "0123456789abcdef";

	if (nbr > 0)
	{
		print_hex_ptr(nbr / 16);
		ft_putchar_fd(hex[nbr % 16], 1);
	}
}

static int	null_management(t_modifiers *mods)
{
	int	paddng;

	paddng = ft_maxnbr(0, mods->width - ft_strlen("(nil)"));
	if (!mods->minus)
		fill_width(paddng, mods->zero);
	ft_putstr_fd("(nil)", 1);
	if (mods->minus)
		fill_width(paddng, mods->zero);
	return (ft_strlen("(nil)") + paddng);
}

int	write_ptr(void *ptr, t_modifiers *mods)
{
	int				nbr_len;
	int				paddng;
	int				precsn;

	if (ptr == NULL)
		return (null_management(mods));
	nbr_len = len_hex_ptr((uintptr_t)ptr);
	precsn = ft_maxnbr(0, mods->precision - nbr_len - 2);
	paddng = ft_maxnbr(0, mods->width - (nbr_len + precsn));
	if (!mods->minus)
		fill_width(paddng, mods->zero);
	ft_putstr_fd("0x", 1);
	if (mods->precision)
		fill_char('0', precsn);
	print_hex_ptr((uintptr_t)ptr);
	if (mods->minus)
		fill_width(paddng, mods->zero);
	return (nbr_len + paddng + precsn);
}
