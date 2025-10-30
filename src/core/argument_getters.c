/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_getters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:28:49 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/30 13:11:15 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*get_flags(t_modifiers *mods, const char *str)
{
	mods->blank = false;
	mods->plus = false;
	mods->minus = false;
	while (*str && (*str == ' ' || *str == '+' || *str == '-'))
	{
		if (*str == ' ')
			mods->blank = true;
		if (*str == '+')
			mods->plus = true;
		if (*str == '-')
			mods->minus = true;
		str++;
	}
	return (str);
}

const char	*get_width(t_modifiers *mods, const char *str)
{
	if (*str && *str == '0')
	{
		mods->zero = true;
		str++;
	}
	else
		mods->zero = false;
	mods->width = ft_atoi(str);
	while (*str && ft_isdigit(*str))
		str++;
	return (str);
}

const char	*get_precision(t_modifiers *mods, const char *str,
	va_list *args_ptr)
{
	if (*str && *str != '.')
	{
		mods->precision = false;
		return (str);
	}
	else if (*str && *++str == '*')
	{
		mods->precision = get_int(args_ptr);
		return (str + 1);
	}
	str++;
	mods->precision = ft_atoi(str);
	while (*str && ft_isdigit(*str))
		str++;
	return (str);
}
