/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:49:23 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/18 16:20:50 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO Revisar errores en algunos casos
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t		dst_len = ft_strlen(dst);

	if (size <= dst_len)
		return (size + ft_strlen(src));
	ft_strlcpy(dst + dst_len, src, size - dst_len);
	return (dst_len + ft_strlen(src));
}

// int	main(void)
// {
// 	const char	*a = " ";
// 	const char	*b = "Hola buenas";
// 	char		exptd[20];
// 	char		rstl[20];

// 	ft_strlcpy(exptd, a, strlen(a));
// 	ft_strlcpy(rstl, a, strlen(a));
// 	strlcat(exptd, b, 12);
// 	ft_strlcat(rstl, b, 12);
// 	printf("%s\n", exptd);
// 	printf("%s\n", rstl);
// }
