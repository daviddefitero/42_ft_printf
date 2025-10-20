/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:14:06 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/18 16:20:56 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*_s = src;

	if (size > 0)
	{
		while (size-- > 1 && *src)
			*(dst++) = *(src++);
		*dst = '\0';
	}
	return (ft_strlen(_s));
}
