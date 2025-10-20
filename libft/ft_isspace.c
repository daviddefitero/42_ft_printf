/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:19:53 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/12 15:29:31 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	a = 'J';
// 	const char	b = ' ';
// 	const char	c = '4';
// 	const char	d = '\t';

// 	printf("Test 1: %c is space? %d\n", a, ft_isspace(a));
// 	printf("Test 2: %c is space? %d\n", b, ft_isspace(b));
// 	printf("Test 3: %c is space? %d\n", c, ft_isspace(c));
// 	printf("Test 4: %c is space? %d\n", d, ft_isspace(d));
// }
