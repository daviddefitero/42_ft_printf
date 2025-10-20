/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 20:52:58 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/11 21:02:16 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_minnbr(int n1, int n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const int	a = 146;
// 	const int	b = 323;

// 	printf("Nº1: %d, Nº2: %d. Min: %d", a, b, ft_minnbr(a, b));
// }
