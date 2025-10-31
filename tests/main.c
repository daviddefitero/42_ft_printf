/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:22:39 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/31 20:16:03 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(void)
{
	// char const	a[] = "Hello good morning, have a nice day!";
	// int			ret_std;
	// int			ret_ft;
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
	// ft_printf("UInt Max: %u\n", (unsigned int)UINT_MAX);
	// ft_printf("UInt Max: %u\n", 0);
	// ft_printf("Test 1: %+50s\n", test);
	// ft_printf("Test 2: %-50.10s\n", test);
	// ft_printf("Test 3: %5.500s\n", test);
	// ft_printf("%+20.10x\n", 53463446);
	// ft_printf("%+20.10X\n", 53463446);
	// printf("Test printf (&a):		%p\n", &a);
	// ft_printf("Test ft_printf (&a):		%p\n\n", &a);
	// printf("Test printf (&ret_std):		%p\n", &ret_std);
	// ft_printf("Test ft_printf (&ret_std):	%p\n\n", &ret_std);
	// printf("Test printf (&ret_ft):		%p\n", &ret_ft);
	// ft_printf("Test ft_printf (&ret_ft):	%p\n\n", &ret_ft);
	// printf("Test printf (LONG_MIN):		%p\n", LONG_MIN);
	// ft_printf("Test ft_printf (LONG_MIN):	%p\n\n", LONG_MIN);
	// printf("Test printf (LONG_MAX):		%p\n", LONG_MAX);
	// ft_printf("Test ft_printf (LONG_MAX):	%p\n\n", LONG_MAX);
	// printf("Test printf (ULONG_MAX):	%p\n", ULONG_MAX);
	// ft_printf("Test ft_printf (ULONG_MAX):	%p\n\n", ULONG_MAX);
	// printf("Test printf (-1):		%p\n", -1);
	// ft_printf("Test ft_printf (-1):		%p\n\n", -1);
	// printf("%#20.10x\n", 5345);
	// ft_printf("%#20.10x\n", 5345);
	// ft_printf(" %s \n", "-");
	// ft_printf(" %s %s \n", "", "-");
	// ft_printf(" %s %s \n", " - ", "");
	// ft_printf(" %s %s %s %s\n", " - ", "", "4", "");
	// ft_printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	// ft_printf(" NULL %s NULL \n", NULL);
	printf("Orig: %p \n", -1);
	ft_printf("Mine: %p \n", -1);
	printf("Orig: %p \n", 1);
	ft_printf("Mine: %p \n", 1);
	printf("Orig: %p \n", 15);
	ft_printf("Mine: %p \n", 15);
	printf("Orig: %p \n", 16);
	ft_printf("Mine: %p \n", 16);
	printf("Orig: %p \n", 17);
	ft_printf("Mine: %p \n", 17);
	printf("Orig: %p %p \n", LONG_MIN, LONG_MAX);
	ft_printf("Mine: %p %p \n", LONG_MIN, LONG_MAX);
	printf("Orig: %p %p \n", INT_MIN, INT_MAX);
	ft_printf("Mine: %p %p \n", INT_MIN, INT_MAX);
	printf("Orig: %p %p \n", ULONG_MAX, -ULONG_MAX);
	ft_printf("Mine: %p %p \n", ULONG_MAX, -ULONG_MAX);
	return (0);
}
