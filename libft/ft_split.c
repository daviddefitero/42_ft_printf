/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:57:50 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/15 21:38:42 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cntsplits(char const *s, char const c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			cnt++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (cnt);
}

static const char	*ft_resrvsplit(char **_arr, char **arr,
	char const *s, size_t len)
{
	*_arr = ft_strndup(s, len);
	if (!*_arr)
	{
		while (arr < _arr)
			free(*(arr++));
		return (NULL);
	}
	return (*_arr);
}

static int	ft_mksplits(char **arr, char const *s, char c)
{
	size_t		_len;
	char const	**_arr = (char const **)arr;
	char const	*_s;

	while (*s)
	{
		if (*s != c)
		{
			_len = 0;
			_s = s;
			while (*_s && *_s != c)
			{
				_len++;
				_s++;
			}
			*_arr = ft_resrvsplit((char **)_arr, arr, s, _len);
			if (!*_arr)
				return (-1);
			_arr++;
			s = _s;
		}
		else
			s++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	size_t const	count = ft_cntsplits(s, c);

	if (!s)
		return (NULL);
	if (!*s)
	{
		arr = malloc(sizeof(char *));
		if (!arr)
			return (NULL);
		*arr = NULL;
		return (arr);
	}
	while (*s && *s == c)
		s++;
	arr = malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr[count] = NULL;
	if (ft_mksplits(arr, s, c))
	{
		free (arr);
		return (NULL);
	}
	return (arr);
}

// int	main(void)
// {
// 	char	**arr;
// 	int		i;

// 	arr = ft_split("__________\n_______Hi!_____Good_Morning_"____aaah____help"
// "____me____I’m______in_pain_______________lmao__________________", '_');
// 	// arr = ft_split("split  ||this|for|me|||||!|", '0');
// 	// arr = ft_split("hello!", ' ');
// 	i = 0;
// 	while (arr[i])
// 	{
// 		printf("String %d: %s\n", i, arr[i]);
// 		i++;
// 	}
// }
