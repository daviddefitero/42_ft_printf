/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:28:41 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/16 19:14:55 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*occrnce;

	if (((unsigned char)c) == '\0')
		return ((char *)(s + ft_strlen(s)));
	occrnce = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			occrnce = (char *)s;
		s++;
	}
	return (occrnce);
}

// int	main(void)
// {
// 	printf("Test 1 (teste, e): %s\n", ft_strchr("teste", 'e'));
// 	printf("Test 2 (teste, \\0): %d\n", *ft_strchr("teste", '\0'));
// 	printf("Test 3 (, \\0): %d\n", *ft_strchr("", '\0'));
// 	printf("Test 4 ((null), \\0): %s\n", ft_strchr(NULL, '\0'));
// }