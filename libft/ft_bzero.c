/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:56:03 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/18 16:19:08 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int main(void)
// {
// 	int		nums[10];
// 	char	ltr[] = "abcdefghijk";
// 	int		i;

// 	i = 0;
// 	while (i < 10)
// 	{
// 		nums[i] = i;
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 10)
// 		printf("%d", nums[i++]);
// 	printf("\n");
// 	printf("%s", ltr);
// 	printf("\n");
// 	ft_bzero(nums, sizeof(int) * 3);
// 	ft_bzero(ltr, 5);
// 	i = 0;
// 	while (i < 10)
// 		printf("%d", nums[i++]);
// 	printf("\n");
// 	printf("%s", ltr);
// 	printf("\n");
// 	return (0);
// }
