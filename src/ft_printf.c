/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:18:01 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/22 22:28:36 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	write_data(char chr, char *flags, va_list *args)
{
	if (chr == 'c')
		ft_putchar_fd(*va_arg(*args, char *), 1);
}

static t_flags	get_flags(char **str)
{
	t_flags		*flgs;
	char const	*_str = *str;

	while (**str)
	{
		while (**str && ft_isspace(**str))
		{
			flgs->space++;
			*str++;
		}
		if (ft_isdigit(**str))
		{
			if (**str == '0')
			{
				flgs->zero = 1;
				*str++;
			}
			_str = *str
			while (ft_isdigit(**str))
			{
				
			}
		}
	}
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
