/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 21:36:10 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/18 16:20:45 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (((unsigned char)c) == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("Test 1 (teste, e): %s\n", ft_strchr("teste", 'e'));
// 	printf("Test 2 (teste, \\0): %d\n", *ft_strchr("teste", '\0'));
// 	printf("Test 3 (, \\0): %s\n", ft_strchr("", '\0'));
// 	printf("Test 4 ((null), \\0): %s\n", ft_strchr(NULL, '\0'));
// }
