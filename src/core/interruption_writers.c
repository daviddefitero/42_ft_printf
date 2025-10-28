/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interruption_writers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:36:15 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/28 19:17:15 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_switch(const char *str, t_modifiers *mods, va_list *args_ptr)
{
	if (*str == 'd' || *str == 'i')
		return (write_int(get_int(args_ptr), mods));
	else if (*str == 'u')
		return (write_uint(get_uint(args_ptr), mods));
	else if (*str == 'c')
		return (write_char(get_char(args_ptr), mods));
	else if (*str == 's')
		return (write_str(get_str(args_ptr), mods));
	return (-1);
}

int	write_switch_hash_notation(const char *str, t_modifiers *mods,
	va_list *args_ptr)
{
	if (*str == 'c')
		ft_putchar_fd(*va_arg(*args_ptr, char *), 1);
	if (mods->blank)
		return (1);
	return (1);
}
