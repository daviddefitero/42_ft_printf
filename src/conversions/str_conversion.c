/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:37:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/30 18:30:36 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_str(char *str)
{
	if (!*str)
	{
		ft_putstr_fd("(null)", 1);
		return (ft_strlen("(null)"));
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
