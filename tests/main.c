/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:22:39 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/24 20:43:21 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("Incomplete symbol: %");
	ft_printf("\n");
	ft_printf("Percent Symbol: %%\n");
	ft_printf("Number %%d: %d\n", 98682);
	ft_printf("Character %%c: %c\n", 'a');
	ft_printf("String %%s: %s\n", "Hello World!");
}
