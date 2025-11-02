/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writers_switch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:36:15 by dde-fite          #+#    #+#             */
/*   Updated: 2025/11/02 19:35:10 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_switch(const char *str, va_list *args_ptr)
{
	if (*str == 'd' || *str == 'i')
		return (write_int(get_int(args_ptr)));
	else if (*str == 'u')
		return (write_uint(get_uint(args_ptr)));
	else if (*str == 'c')
		return (write_char(get_char(args_ptr)));
	else if (*str == 's')
		return (write_str(get_str(args_ptr)));
	else if (*str == 'x')
		return (write_hex(get_uint(args_ptr), false));
	else if (*str == 'X')
		return (write_hex(get_uint(args_ptr), true));
	else if (*str == 'p')
		return (write_ptr(get_ptr(args_ptr)));
	return (0);
}
