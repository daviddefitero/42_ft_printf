/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:28:49 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/31 23:37:03 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_hex_ptr(uintptr_t nbr)
{
	int	i;

	i = 2;
	while (nbr > 0)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

static void	print_hex_ptr(uintptr_t nbr)
{
	char const	*hex = "0123456789abcdef";

	if (nbr > 0)
	{
		print_hex_ptr(nbr / 16);
		ft_putchar_fd(hex[nbr % 16], 1);
	}
}

int	write_ptr(void *ptr)
{
	if (ptr == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		return (ft_strlen("(nil)"));
	}
	ft_putstr_fd("0x", 1);
	print_hex_ptr((uintptr_t)ptr);
	return (len_hex_ptr((uintptr_t)ptr));
}
