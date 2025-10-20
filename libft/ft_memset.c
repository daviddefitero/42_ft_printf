/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:09:27 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/18 16:19:21 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	const void	*_s = s;

	while (n-- > 0)
		*((uint8_t *)s++) = c;
	return ((void *)_s);
}

// int	main(void)
// {
// 	char	*a;
// 	int		*b;

// 	a = malloc(1000 * sizeof(char));
// 	b = malloc(20 * sizeof(int));
// 	ft_memset(a, 'J', 1000);
// 	ft_memset(b, 3, 20);
// 	printf("String A(char): %s", a);
// 	// printf("String B(int): %d", b);
// 	return (0);
// }
