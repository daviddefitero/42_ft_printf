/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:26:25 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/18 16:20:22 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putchar_fd('H', 1);
// 	ft_putchar_fd('i', 1);
// 	ft_putchar_fd('!', 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putchar_fd(':', 1);
// 	ft_putchar_fd(')', 1);
// 	ft_putchar_fd('\n', 1);
// }
