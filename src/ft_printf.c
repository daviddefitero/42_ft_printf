/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:18:01 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/24 22:42:51 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Modifiers
	int		plus;
	int		minus;
	int		blank;
	int		width;
	int		zero;
	int		precision;
*/

static int	interruption_event(const char **str, va_list *args_ptr)
{
	t_modifiers	mods;
	const char	*_str = *str;
	int			chrs_count;

	if (!*_str)
		return (0);
	_str++;
	if (*_str == '%')
	{
		ft_putchar_fd('%', 1);
		*str += 2;
		return (1);
	}
	_str = get_flags(&mods, _str);
	_str = get_width(&mods, _str);
	_str = get_precision(&mods, _str);
	if (**str != '#')
		chrs_count = write_data(_str++, mods, args_ptr);
	else
		chrs_count = write_data_hash_notation(_str++, mods, args_ptr);
	*str = _str;
	return (chrs_count);
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	int			chrs_count;

	chrs_count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
			chrs_count += interruption_event(&str, &args);
		else
		{
			ft_putchar_fd(*(char *)str++, 1);
			chrs_count++;
		}
	}
	va_end(args);
	return (chrs_count);
}
