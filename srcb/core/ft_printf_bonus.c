/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:18:01 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/30 18:05:02 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

/* Modifiers
	int		plus;
	int		minus;
	int		blank;
	int		width;
	int		zero;
	int		precision;
*/

static int	interruption_event(const char **str, va_list *args_ptr)
{
	t_modifiers	mods;

	if (!**str)
		return (0);
	(*str)++;
	if (**str == '%')
	{
		ft_putchar_fd('%', 1);
		*str += 2;
		return (1);
	}
	*str = get_flags(&mods, *str);
	*str = get_width(&mods, *str);
	*str = get_precision(&mods, *str, args_ptr);
	if (mods.is_precision || mods.minus)
		mods.zero = 0;
	return (write_switch((*str)++, &mods, args_ptr));
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
