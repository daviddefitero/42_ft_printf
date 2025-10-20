/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:52:34 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/15 21:38:42 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_fwdtrim(char const *s1, char const *set)
{
	const char	*_set;

	while (*s1)
	{
		_set = set;
		while (*_set)
		{
			if (*s1 == *_set)
				break ;
			else
				_set++;
		}
		if (*s1 != *_set)
			return (s1);
		s1++;
	}
	return (s1);
}

static const char	*ft_bcktrim(char const *s1, char const *set)
{
	const char	*_s1 = s1 + ft_strlen(s1);
	const char	*_set;

	while (*s1 && _s1 > s1)
	{
		_set = set;
		while (*_set)
		{
			if (*_s1 == *_set)
				break ;
			else
				_set++;
		}
		if (*_s1 != *_set)
			return (_s1 + 1);
		_s1--;
	}
	return (_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;

	if (!s1)
		return (NULL);
	if (!set || !*set || !*s1)
		return (ft_strdup(s1));
	start = ft_fwdtrim(s1, set);
	end = ft_bcktrim(s1, set);
	if (start > end)
		return (ft_strdup(""));
	return (ft_strndup(start, end - start));
}

// int	main(void)
// {
// 	const char	s1[] = "-_-_-_-___--_____----I like pizza-_-_-_-___--_____----";
// 	const char	s2[] = "	 	| 	 42 Madrid <3	 |	 	  ";
// 	const char	s3[] = "  \t \t \n   \n\n\n\t";

// 	printf("Original: %s\nTrimmed: %s\n\n", s1, ft_strtrim(s1, "-_"));
// 	printf("Original: %s\nTrimmed: %s\n\n", s2, ft_strtrim(s2, " 	"));
// 	printf("Original: %s\nTrimmed: %s\n\n", "", ft_strtrim("", " 	"));
// 	printf("Original: %s\nTrimmed: %s\n\n", " ", ft_strtrim(" ", " "));
// 	printf("Original: %s\nTrimmed: %s\n\n", "Hi!", ft_strtrim("Hi!", NULL));
// 	printf("Original: %p\nTrimmed: %s\n\n", NULL, ft_strtrim(NULL, "-_"));
// 	printf("Original: %s\nTrimmed: %s\n\n", s3, ft_strtrim(s3, " \n\t"));
// }
