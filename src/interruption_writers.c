/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interruption_writers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:36:15 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/26 00:01:58 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_switch(const char *str, t_modifiers *mods, va_list *args_ptr)
{
	if (*str == 'd')
		return (write_int(mods, args_ptr));
	else if (*str == 'c')
		ft_putchar_fd(va_arg(*args_ptr, int), 1);
	else if (*str == 's')
		ft_putstr_fd(va_arg(*args_ptr, char *), 1);
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
