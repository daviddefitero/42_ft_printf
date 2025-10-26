/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:22:39 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/26 23:37:23 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int	ret_std;
	int	ret_ft;
	// printf("=== Casos básicos ===\n");
	// ret_std = printf("1. %d\n", 42);
	// ret_ft = ft_printf("1. %d\n", 42);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// ret_std = printf("2. %d\n", -42);
	// ret_ft = ft_printf("2. %d\n", -42);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// printf("=== Flags ===\n");
	// ret_std = printf("3. %+d %+d\n", 42, -42);
	// ret_ft = ft_printf("3. %+d %+d\n", 42, -42);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// ret_std = printf("4. % d % d\n", 42, -42);
	// ret_ft = ft_printf("4. % d % d\n", 42, -42);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// printf("=== Width ===\n");
	// ret_std = printf("5. %5d %5d\n", 42, -42);
	// ret_ft = ft_printf("5. %5d %5d\n", 42, -42);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// ret_std = printf("6. %-5d %-5d\n", 42, -42);
	// ret_ft = ft_printf("6. %-5d %-5d\n", 42, -42);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// ret_std = printf("7. %05d %05d\n", 42, -42);
	// ret_ft = ft_printf("7. %05d %05d\n", 42, -42);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// printf("=== Precision ===\n");
	// ret_std = printf("8. %.5d %.5d\n", 42, -42);
	// ret_ft = ft_printf("8. %.5d %.5d\n", 42, -42);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// ret_std = printf("9. %10.5d %10.5d\n", 42, -42);
	// ret_ft = ft_printf("9. %10.5d %10.5d\n", 42, -42);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// printf("=== Limites ===\n");
	// ret_std = printf("10. INT_MAX: %d\n", INT_MAX);
	// ret_ft = ft_printf("10. INT_MAX: %d\n", INT_MAX);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// ret_std = printf("11. INT_MIN: %d\n", INT_MIN);
	// ret_ft = ft_printf("11. INT_MIN: %d\n", INT_MIN);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// printf("=== Combinaciones ===\n");
	// ret_std = printf("12. %+08.5d %+08.5d\n", 42, -42);
	// ret_ft = ft_printf("12. %+08.5d %+08.5d\n", 42, -42);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// ret_std = printf("13. %-+10.3d %-+10.3d\n", 42, -42);
	// ret_ft = ft_printf("13. %-+10.3d %-+10.3d\n", 42, -42);
	// printf("-> Retornos: printf=%d, ft_printf=%d\n\n", ret_std, ret_ft);
	// ft_printf("Letter a:	 %c\n", 'a');
	// ft_printf("Letter b w/ width 10: %10c\n", 'b');
	// ft_printf("Letter c w/ width 10 and -: %-10c\n", 'c');
	// ft_printf("Letter d w/ width 10 and +: %+10c\n", 'd');
	// ft_printf("Letter e w/ width 10, - and (blank): % -10c\n", 'e');
	// ft_printf("Letter f w/ width 10, -, + and precision: % -10.22c\n", 'f');
	ft_printf("UInt Max: %u\n", (unsigned int)UINT_MAX);
	ft_printf("UInt Max: %u\n", 0);
	return (0);
}
