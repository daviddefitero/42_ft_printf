/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interruption_writers_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:36:15 by dde-fite          #+#    #+#             */
/*   Updated: 2025/11/01 21:53:30 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

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
	else if (*str == 'x')
		return (write_hex(get_uint(args_ptr), mods, false));
	else if (*str == 'X')
		return (write_hex(get_uint(args_ptr), mods, true));
	else if (*str == 'p')
		return (write_ptr(get_ptr(args_ptr), mods));
	return (0);
}
