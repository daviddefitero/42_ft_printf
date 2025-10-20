/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:38:37 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/14 21:07:15 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n < 1)
		return (0);
	while (n-- > 1 && *(uint8_t *)s1 == *(uint8_t *)s2)
	{
		s1++;
		s2++;
	}
	return (*(uint8_t *)s1 - *(uint8_t *)s2);
}

// int	main(void)
// {
// 	const char	*a = "Hello World!";
// 	const char	*b = "Hello World!uwu";

// 	printf("%d\n", ft_memcmp(a, b, 12));
// 	printf("%d", ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
// }
