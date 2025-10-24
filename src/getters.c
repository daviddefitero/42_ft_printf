/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:28:49 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/24 22:12:13 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*get_flags(t_modifiers *mods, const char *str)
{
	mods->blank = 0;
	mods->plus = 0;
	mods->minus = 0;
	while (*str && (*str == ' ' || *str == '+' || *str == '-'))
	{
		if (*str == ' ')
			mods->blank = 1;
		if (*str == '+')
			mods->plus = 1;
		if (*str == '-')
			mods->minus = 1;
		str++;
	}
	return (str);
}

const char	*get_width(t_modifiers *mods, const char *str)
{
	if (*str && *str == '0')
	{
		mods->zero = 1;
		str++;
	}
	else
		mods->zero = 0;
	mods->width = ft_atoi(str);
	while (*str && ft_isdigit(*str))
		str++;
	return (str);
}

const char	*get_precision(t_modifiers *mods, const char *str)
{
	if (*str && *str != '.')
		return (str);
	str++;
	mods->precision = ft_atoi(str);
	while (*str && ft_isdigit(*str))
		str++;
	return (str);
}
