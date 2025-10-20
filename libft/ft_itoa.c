/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:44:24 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/11 20:19:40 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(long nbr)
{
	int		len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		n_len;
	char	*str;

	nbr = n;
	n_len = ft_nbrlen(nbr);
	str = malloc((n_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[n_len] = '\0';
	if (nbr == 0)
		*str = '0';
	if (nbr < 0)
	{
		*str = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[n_len-- - 1] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-623));
// 	printf("%s\n", ft_itoa(156));
// 	printf("%s\n", ft_itoa(-0));
// 	printf("%s\n", ft_itoa(543000));
// 	printf("%s\n", ft_itoa(INT_MAX));
// 	printf("%s\n", ft_itoa(INT_MIN));
// }
