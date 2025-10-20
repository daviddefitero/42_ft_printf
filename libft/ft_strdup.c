/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 14:54:04 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/15 21:38:42 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	return (ft_strndup(s, ft_strlen(s)));
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
