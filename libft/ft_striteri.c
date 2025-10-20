/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:33:19 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/15 21:14:33 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// void	ft_toupper_test(unsigned int i, char *c)
// {
// 	printf("Char %d: %c\n", i, ft_toupper(*c));
// }

// int	main(void)
// {
// 	ft_striteri("Lorem ipsum dolor sit amet,\f incididunt est elit "
// 		"excepteur anim voluptate\b exercitation quis deserunt laborum "
// 		"anim voluptate ipsum sunt molli\nt in qui deserunt \0nisi "
// 		"exercitation", ft_toupper_test);
// }
