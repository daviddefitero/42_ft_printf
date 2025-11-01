/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_conversion_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/11/01 22:50:17 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	putstrn(char *s, size_t len)
{
	while (len-- > 0)
		write(1, s++, 1);
}

static int	null_management(t_modifiers *mods)
{
	int	null_len;
	int	paddng;

	null_len = ft_strlen("(null)");
	if (mods->precision >= null_len)
		paddng = ft_maxnbr(0, mods->width - null_len);
	else
		paddng = mods->width;
	if (!mods->minus)
		fill_width(paddng, false);
	if (!mods->precision || (mods->is_precision && mods->precision >= null_len))
		ft_putstr_fd("(null)", 1);
	else
		null_len = 0;
	if (mods->minus)
		fill_width(paddng, false);
	return (null_len + paddng);
}

int	write_str(char *str, t_modifiers *mods)
{
	size_t			str_len;
	int				paddng;

	if (!str)
		return (null_management(mods));
	if (mods->is_precision)
		str_len = ft_minnbr(ft_strlen(str), mods->precision);
	else
		str_len = ft_strlen(str);
	paddng = ft_maxnbr(0, mods->width - str_len);
	if (!mods->minus)
		fill_width(paddng, false);
	putstrn(str, str_len);
	if (mods->minus)
		fill_width(paddng, false);
	return (str_len + paddng);
}
