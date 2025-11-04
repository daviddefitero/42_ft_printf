/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:18:01 by dde-fite          #+#    #+#             */
/*   Updated: 2025/11/04 16:05:33 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	interruption_event(const char **str, va_list *args_ptr)
{
	if (!**str)
		return (0);
	(*str)++;
	if (**str == '%')
	{
		ft_putchar_fd('%', 1);
		*str += 1;
		return (1);
	}
	return (write_switch((*str)++, args_ptr));
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	int			chrs_count;

	if (!str)
		return (0);
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
