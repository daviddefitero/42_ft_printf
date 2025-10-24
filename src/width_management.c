/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:34:41 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/25 00:49:28 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fill_width_start(void *content, char type, t_modifiers *mods)
{
	int	expctd_width;
	int	to_fill;
	int	_w;

	expctd_width = 0;
	if (type == 'd')
	{
		if (mods->plus && *(int *)content >= 0)
			expctd_width++;
		expctd_width += ft_nbrlen(*(int *)content);
	}
	to_fill = mods->width - expctd_width;
	_w = 0;
	while (to_fill > _w)
	{
		if (!mods->zero)
			ft_putchar_fd(' ', 1);
		else
			ft_putchar_fd('0', 1);
		_w++;
	}
	return (to_fill);
}

int	fill_width_end(int chrs_count, t_modifiers *mods)
{
	int	to_fill;
	int	_w;

	to_fill = mods->width - chrs_count;
	_w = 0;
	while (to_fill > _w)
	{
		if (!mods->zero)
			ft_putchar_fd(' ', 1);
		_w++;
	}
	return (to_fill);
}
