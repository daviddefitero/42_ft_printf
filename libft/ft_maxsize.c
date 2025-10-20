/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 20:58:08 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/11 23:11:20 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_maxsize(size_t n1, size_t n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const int	a = 146;
// 	const int	b = 323;

// 	printf("Nº1: %d, Nº2: %d. Max: %d", a, b, ft_maxnbr(a, b));
// }
