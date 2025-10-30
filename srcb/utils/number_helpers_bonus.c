/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:08:50 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/30 18:05:02 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

// Takes a signed number and copies it to an unsigned int, then returns the sign
// that should be displayed.
char	manage_sign(int nbr, unsigned int *u_nbr, t_modifiers *mods)
{
	if (nbr >= 0)
	{
		*u_nbr = (unsigned int)nbr;
		if (mods->plus)
			return ('+');
		else if (mods->blank)
			return (' ');
	}
	else
	{
		*u_nbr = (unsigned int)(-(long)nbr);
		return ('-');
	}
	return (0);
}
