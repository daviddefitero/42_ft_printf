/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 00:12:04 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/12 01:04:29 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	const size_t	s1_len = ft_strlen(s1);
	const size_t	len = s1_len + ft_strlen(s2);
	char			*str;

	str = malloc(len + 1 * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, s1_len + 1);
	ft_strlcpy(str + s1_len, s2, len - s1_len + 1);
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Test 1: %s\n", ft_strjoin("Hello ", "World!"));
// 	printf("Test 2: %s\n", ft_strjoin("Hello                 ",
// "World!                         o"));
// 	printf("Test 3: %s\n", ft_strjoin("", "World!"));
// 	printf("Test 4: %s\n", ft_strjoin("", ""));
// }
