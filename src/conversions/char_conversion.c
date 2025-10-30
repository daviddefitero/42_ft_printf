/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/30 17:00:16 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_char(char c, t_modifiers *mods)
{
	int				paddng;

	paddng = ft_maxnbr(0, mods->width - 1);
	if (!mods->minus)
		fill_width(paddng, false);
	ft_putchar_fd(c, 1);
	if (mods->minus)
		fill_width(paddng, false);
	return (paddng + 1);
}
