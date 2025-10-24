/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:18:01 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/24 22:33:21 by dde-fite         ###   ########.fr       */
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

int	fill_width_start(void *content, char type, t_modifiers mods)
{
	int	expctd_width;
	int	to_fill;
	int	_w;

	expctd_width = 0;
	if (type == 'd')
	{
		if (mods.plus && *(int *)content >= 0)
			expctd_width++;
		expctd_width += ft_nbrlen(*(int *)content);
	}
	to_fill = mods.width - expctd_width;
	_w = 0;
	while (to_fill > _w)
	{
		if (!mods.zero)
			ft_putchar_fd(' ', 1);
		else
			ft_putchar_fd('0', 1);
		_w++;
	}
	return (to_fill);
}

int	fill_width_end(int chrs_count, t_modifiers mods)
{
	int	to_fill;
	int	_w;

	to_fill = mods.width - chrs_count;
	_w = 0;
	while (to_fill >= _w)
	{
		if (!mods.zero)
			ft_putchar_fd(' ', 1);
		_w++;
	}
	return (to_fill);
}

static int	write_data(const char *str, t_modifiers mods, va_list *args_ptr)
{
	int		chrs_count;
	int		_buff_int;
	// char	*_buff_str;
	chrs_count = 0;
	if (*str == 'd')
	{
		_buff_int = va_arg(*args_ptr, int);
		if (mods.plus && _buff_int >= 0)
		{
			ft_putchar_fd('+', 1);
			chrs_count++;
		}
		else if (mods.zero && _buff_int >= 0)
		{
			ft_putchar_fd(' ', 1);
			chrs_count++;
		}
		if (!mods.minus)
			chrs_count += fill_width_start(&_buff_int, *str, mods);
		chrs_count += ft_nbrlen(_buff_int);
		ft_putnbr_fd(_buff_int, 1);
		if (mods.minus)
			chrs_count += fill_width_end(chrs_count, mods);
	}
	else if (*str == 'c')
		ft_putchar_fd(va_arg(*args_ptr, int), 1);
	else if (*str == 's')
		ft_putstr_fd(va_arg(*args_ptr, char *), 1);
	return (chrs_count);
}

static int	write_data_hash_notation(const char *str, t_modifiers mods,
	va_list *args_ptr)
{
	if (*str == 'c')
		ft_putchar_fd(*va_arg(*args_ptr, char *), 1);
	if (mods.blank)
		return (1);
	return (1);
}

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
		{
			chrs_count += interruption_event(&str, &args);
		}
		else
		{
			ft_putchar_fd(*(char *)str++, 1);
			chrs_count++;
		}
	}
	va_end(args);
	return (chrs_count);
}
