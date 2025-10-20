/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 14:54:04 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/14 20:06:40 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t len)
{
	char			*str;

	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len + 1);
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	a[] = "Lorem ipsum dolor sit amet, non enim anim nostrud velit"
// " mollit elit sit magna sit ut non dolore non eiusmod in aute officia "
// "sed deserunt";
// 	char	*b;

// 	b = ft_strdup(a);
// 	printf("%s", b);
// }
