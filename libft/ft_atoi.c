/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:44:19 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/12 15:22:22 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		nbr;
	char	sign;

	nbr = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			sign = -sign;
	while (ft_isdigit(*nptr))
	{
		nbr = nbr * 10 + (*nptr - '0');
		nptr++;
	}
	return (nbr * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_atoi("+2324"));
// }
