/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:18:01 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/23 22:38:00 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	write_data(char chr, t_flags *flags, va_list *args)
{
	if (chr == 'c')
		ft_putchar_fd(*va_arg(*args, char *), 1);
}

static t_flags	get_flags(char **str)
{
	t_flags		*flgs;
	char const	*_str = *str;

	while (*_str)
	{
		if (ft_isdigit(**str))
		{
			if (*_str == '0')
			{
				flgs->zeroes = 1;
				*str++;
			}
			flgs->width = ft_atoi(str);
		}
		if (*_str)
		{
			/* code */
		}
	}
	if (ft_isspace(_str - 1))
		flgs->sign = ' ';
	else if (_str - 1 == '+')
		flgs->sign = '+';
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	char	*flags;

	va_start(args, str);
	while (*str)
	{
		while (*str && *str != '%')
			ft_putchar_fd(*(char *)str++, 1);
		if (*str && *str == '%')
		{
			if (*++str == '%')
				ft_putchar_fd(*str++, 1);
			else
			{
				
				write_data(*str++, &args);
			}
		}
	}
	va_end(args);
	return (1);
}
