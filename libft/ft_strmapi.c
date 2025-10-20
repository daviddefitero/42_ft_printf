/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:59:40 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/15 20:31:02 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int const		len = ft_strlen(s) + 1;
	char			*rslt;
	unsigned int	i;

	rslt = malloc(len * sizeof(char));
	if (!rslt)
		return (NULL);
	rslt[len - 1] = '\0';
	i = 0;
	while (s[i])
	{
		rslt[i] = f(i, s[i]);
		i++;
	}
	return (rslt);
}

// char	ft_toupper_test(unsigned int i, char c)
// {
// 	printf("Char %d: %c\n", i, c);
// 	return (ft_toupper(c));
// }

// int	main(void)
// {
// 	printf("%s", ft_strmapi("Lorem ipsum dolor sit amet,\f incididunt est elit "
// 			"excepteur anim voluptate\b exercitation quis deserunt laborum "
// 			"anim voluptate ipsum sunt molli\nt in qui deserunt \0nisi "
// 			"exercitation", ft_toupper_test));
// }
