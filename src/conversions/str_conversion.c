/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/30 17:26:33 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	putstrn(char *s, size_t len)
{
	while (len-- > 0)
		write(1, s++, 1);
}

static int	null_management(t_modifiers *mods)
{
	int const	null_len = ft_strlen("(null)");
	int			paddng;

	if (mods->precision >= null_len)
		paddng = ft_maxnbr(0, mods->width - null_len);
	else
		paddng = mods->width;
	if (!mods->minus)
		fill_width(paddng, false);
	if (mods->precision >= null_len)
		ft_putstr_fd("(null)", 1);
	if (mods->minus)
		fill_width(paddng, false);
	return (null_len + paddng);
}

int	write_str(char *str, t_modifiers *mods)
{
	size_t			str_len;
	size_t			out_str_len;
	int				paddng;

	if (!str)
		return (null_management(mods));
	str_len = ft_strlen(str);
	if (mods->is_precision)
		out_str_len = ft_minnbr(str_len, mods->precision);
	else
		out_str_len = str_len;
	paddng = ft_maxnbr(0, mods->width - out_str_len);
	if (!mods->minus)
		fill_width(paddng, false);
	putstrn(str, out_str_len);
	if (mods->minus)
		fill_width(paddng, false);
	return (str_len + paddng + out_str_len);
}
