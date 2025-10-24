/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:36:15 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/24 23:16:03 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_int(t_modifiers *mods, va_list *args_ptr)
{
	int		chrs_count;
	int		_buff_int;

	chrs_count = 0;
	_buff_int = va_arg(*args_ptr, int);
	if (mods->plus && _buff_int >= 0)
	{
		ft_putchar_fd('+', 1);
		chrs_count++;
	}
	else if (mods->zero && _buff_int >= 0)
	{
		ft_putchar_fd(' ', 1);
		chrs_count++;
	}
	if (!mods->minus)
		chrs_count += fill_width_start(&_buff_int, 'd', mods);
	chrs_count += ft_nbrlen(_buff_int);
	ft_putnbr_fd(_buff_int, 1);
	if (mods->minus)
		chrs_count += fill_width_end(chrs_count, mods);
	return (chrs_count);
}

int	write_switch(const char *str, t_modifiers mods, va_list *args_ptr)
{
	if (*str == 'd')
		return (write_int(&mods, args_ptr));
	else if (*str == 'c')
		ft_putchar_fd(va_arg(*args_ptr, int), 1);
	else if (*str == 's')
		ft_putstr_fd(va_arg(*args_ptr, char *), 1);
	return (-1);
}

int	write_switch_hash_notation(const char *str, t_modifiers mods,
	va_list *args_ptr)
{
	if (*str == 'c')
		ft_putchar_fd(*va_arg(*args_ptr, char *), 1);
	if (mods.blank)
		return (1);
	return (1);
}
