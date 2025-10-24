/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:36:15 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/25 00:51:41 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	sign_nbr(int *nbr, t_modifiers *mods)
{
	int	chrs_count;

	chrs_count = 0;
	if (*nbr >= 0)
	{
		if (mods->plus)
		{
			ft_putchar_fd('+', 1);
			chrs_count = 1;
		}
		else if (mods->blank)
		{
			ft_putchar_fd(' ', 1);
			chrs_count = 1;
		}
	}
	else if (mods->zero)
	{
		ft_putchar_fd('-', 1);
		*nbr = -*nbr;
		chrs_count = 1;
	}
	return (chrs_count);
}

int	write_int(t_modifiers *mods, va_list *args_ptr)
{
	int				chrs_count;
	int				nbr;
	int				nbr_to_print;

	chrs_count = 0;
	nbr = va_arg(*args_ptr, int);
	nbr_to_print = nbr;
	if (mods->zero)
		chrs_count += sign_nbr(&nbr_to_print, mods);
	if (!mods->minus)
		chrs_count += fill_width_start(&nbr, 'd', mods);
	if (!mods->zero)
		chrs_count += sign_nbr(&nbr_to_print, mods);
	chrs_count += ft_nbrlen(nbr);
	ft_putnbr_fd(nbr_to_print, 1);
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
