/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_getter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 21:05:12 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/28 18:46:53 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_int(va_list *args_ptr)
{
	return (va_arg(*args_ptr, int));
}

unsigned int	get_uint(va_list *args_ptr)
{
	return (va_arg(*args_ptr, unsigned int));
}

char	get_char(va_list *args_ptr)
{
	return ((char)va_arg(*args_ptr, int));
}

char	*get_str(va_list *args_ptr)
{
	return (va_arg(*args_ptr, char *));
}
