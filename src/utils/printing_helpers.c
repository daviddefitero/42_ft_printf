/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing_helpers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:34:41 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/26 00:01:32 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fill_width(unsigned int pd, bool zeroes)
{
	if (zeroes)
		fill_char('0', pd);
	else
		fill_char(' ', pd);
}

void	fill_char(char c, unsigned int nbr)
{
	while (nbr-- > 0)
	{
		ft_putchar_fd(c, 1);
	}
}
