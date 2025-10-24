/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:18:01 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/24 20:44:39 by dde-fite         ###   ########.fr       */
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

static void	write_data(const char *str, t_modifiers mods, va_list *args_ptr)
{
	if (*str == 'd')
	{
		ft_putnbr_fd(va_arg(*args_ptr, int), 1);
	}
	else if (*str == 'c')
	{
		ft_putchar_fd(va_arg(*args_ptr, int), 1);
	}
	else if (*str == 's')
	{
		ft_putstr_fd(va_arg(*args_ptr, char *), 1);
	}
	if (mods.blank)
		return ;
}

static void	write_data_hash_notation(const char *str, t_modifiers mods,
	va_list *args_ptr)
{
	if (*str == 'c')
		ft_putchar_fd(*va_arg(*args_ptr, char *), 1);
	if (mods.blank)
		return ;
}

static void	interruption_event(const char **str, va_list *args_ptr)
{
	t_modifiers	mods;
	const char	*_str = *str;

	if (!*_str)
		return ;
	_str++;
	if (*_str == '%')
	{
		ft_putchar_fd('%', 1);
		*str += 2;
		return ;
	}
	_str = get_flags(&mods, _str);
	_str = get_width(&mods, _str);
	_str = get_precision(&mods, _str);
	if (**str != '#')
		write_data(_str++, mods, args_ptr);
	else
		write_data_hash_notation(_str++, mods, args_ptr);
	*str = _str;
}

int	ft_printf(char const *str, ...)
{
	va_list		args;

	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
			interruption_event(&str, &args);
		else
			ft_putchar_fd(*(char *)str++, 1);
	}
	va_end(args);
	return (1);
}
