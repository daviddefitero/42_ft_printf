/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:19:49 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/14 21:02:21 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*((uint8_t *)s) == (uint8_t)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*a = "Hello World!";

// 	printf("Test 1: %s\n", (char *)ft_memchr(a, 'W', 13));
// 	printf("Test 2: %s\n", (char *)ft_memchr("/|\x12\xff\x09\0\x42\042\0\42|\\",
// 			'\0', 12));
// }
