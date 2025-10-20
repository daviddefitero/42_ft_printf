/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:46:07 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/14 22:19:16 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*_big;
	const char	*_little;
	size_t		_len;

	if (!*little)
		return ((char *)big);
	while (len > 0 && *big)
	{
		if (*big == *little)
		{
			_big = big;
			_little = little;
			_len = len;
			while (_len-- > 0 && *_big++ == *_little++)
				if (!*_little)
					return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("Test 1: %s\n", ft_strnstr("hello good morning", "good", 15));
// 	printf("Test 2: %s\n", ft_strnstr("hello how are u doing", " ", 6));
// 	printf("Test 3: %s\n", ft_strnstr("hello how are u doing", " ", 1));
// 	printf("Test 4: %%START%%%s%%END%%\n",
// 		ft_strnstr("\n--a-\b--b-\n-c-\0-d--\0hi!\n", "\0", 15));
// 	printf("Test 5: %s\n", ft_strnstr("", "", 15));
// 	printf("Test 6: %s\n", ft_strnstr("abcdef", "abcdefghijklmnop", 17));
// 	printf("Test 7: %s\n", ft_strnstr("aaabcabcd", "aabc", -1));
// 	printf("Test 8: %s\n", ft_strnstr("aaabcabcd", "abcd", 9));
// }
