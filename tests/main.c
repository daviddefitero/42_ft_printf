/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:22:39 by dde-fite          #+#    #+#             */
/*   Updated: 2025/11/02 22:13:27 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

// int	main(void)
// {
// 	int const	a = 42;

// 	ft_printf("\n\n==== Enteros ====\n");
// 	printf("Orig: %d\n", printf("1. %d\n", 42));
// 	printf("Mine: %d\n\n", ft_printf("1. %d\n", 42));
// 	printf("Orig: %d\n", printf("2. %d\n", -42));
// 	printf("Mine: %d\n\n", ft_printf("2. %d\n", -42));
// 	printf("Orig: %d\n", printf("3. %+d %+d\n", 42, -42));
// 	printf("Mine: %d\n\n", ft_printf("3. %+d %+d\n", 42, -42));
// 	printf("Orig: %d\n", printf("4. % d % d\n", 42, -42));
// 	printf("Mine: %d\n\n", ft_printf("4. % d % d\n", 42, -42));
// 	printf("Orig: %d\n", printf("5. %5d %5d\n", 42, -42));
// 	printf("Mine: %d\n\n", ft_printf("5. %5d %5d\n", 42, -42));
// 	printf("Orig: %d\n", printf("5. %0d %0d\n", 42, -42));
// 	printf("Mine: %d\n\n", ft_printf("5. %0d %0d\n", 42, -42));
// 	printf("Orig: %d\n", printf("6. %-5d %-5d\n", 42, -42));
// 	printf("Mine: %d\n\n", ft_printf("6. %-5d %-5d\n", 42, -42));
// 	printf("Orig: %d\n", printf("7. %05d %05d\n", 42, -42));
// 	printf("Mine: %d\n\n", ft_printf("7. %05d %05d\n", 42, -42));
// 	printf("Orig: %d\n", printf("8. %.5d %.5d\n", 42, -42));
// 	printf("Mine: %d\n\n", ft_printf("8. %.5d %.5d\n", 42, -42));
// 	printf("Orig: %d\n", printf("9. %10.5d %10.5d\n", 42, -42));
// 	printf("Mine: %d\n\n", ft_printf("9. %10.5d %10.5d\n", 42, -42));
// 	printf("Orig: %d\n", printf("10. INT_MAX: %d\n", INT_MAX));
// 	printf("Mine: %d\n\n", ft_printf("10. INT_MAX: %d\n", INT_MAX));
// 	printf("Orig: %d\n", printf("11. INT_MIN: %d\n", INT_MIN));
// 	printf("Mine: %d\n\n", ft_printf("11. INT_MIN: %d\n", INT_MIN));
// 	printf("Orig: %d\n", printf("12. %+08.5d %+08.5d\n", 42, -42));
// 	printf("Mine: %d\n\n", ft_printf("12. %+08.5d %+08.5d\n", 42, -42));
// 	printf("Orig: %d\n", printf("13. %-+10.3d %-+10.3d\n", 42, -42));
// 	printf("Mine: %d\n\n", ft_printf("13. %-+10.3d %-+10.3d\n", 42, -42));
// 	ft_printf("\n\n==== Caracteres ====\n");
// 	printf("Mine: %d\n\n", ft_printf("Letter a: %c\n", 'a'));
// 	printf("Mine: %d\n\n", ft_printf("Letter b w/ width 10: %10c\n", 'b'));
// 	printf("Mine: %d\n\n", ft_printf("Letter c w/ width 10 and -: %-10c\n",
// 			'c'));
// 	printf("Mine: %d\n\n", ft_printf("Letter d w/ width 10 and +: %+10c\n",
// 			'd'));
// 	printf("Mine: %d\n\n", ft_printf("Letter e w/ width 10, - and blank: "
// 			"% -10c\n", 'e'));
// 	printf("Mine: %d\n\n", ft_printf("Letter f w/ width 10, -, + and "
// 			"precision: % -10.22c\n", 'f'));
// 	ft_printf("\n\n==== Unsigned ====\n");
// 	printf("Mine: %d\n\n", ft_printf("UInt Max: %u\n", (unsigned int)UINT_MAX));
// 	printf("Mine: %d\n\n", ft_printf("UInt Min: %u\n", 0));
// 	ft_printf("\n\n==== Porcentajes ====\n");
// 	printf("Orig: %d\n", printf("%%\n"));
// 	printf("Mine: %d\n\n", ft_printf("%%\n"));
// 	printf("Orig: %d\n", printf("%% %% %%\n"));
// 	printf("Mine: %d\n\n", ft_printf("%% %% %%\n"));
// 	printf("Orig: %d\n", printf("%%  %%  %%\n"));
// 	printf("Mine: %d\n\n", ft_printf("%%  %%  %%\n"));
// 	printf("Orig: %d\n", printf("%%   %%   %%\n"));
// 	printf("Mine: %d\n\n", ft_printf("%%   %%   %%\n"));
// 	ft_printf("\n\n==== Hexadecimal ====\n");
// 	printf("Orig: %d\n", printf("%+20.10x\n", 53463446));
// 	printf("Mine: %d\n\n", ft_printf("%+20.10x\n", 53463446));
// 	printf("Orig: %d\n", printf("%+20.10X\n", 53463446));
// 	printf("Mine: %d\n\n", ft_printf("%+20.10X\n", 53463446));
// 	printf("Orig: %d\n", printf("%#x\n", 53463446));
// 	printf("Mine: %d\n\n", ft_printf("%#x\n", 53463446));
// 	printf("Orig: %d\n", printf("%#.2x\n", 53463446));
// 	printf("Mine: %d\n\n", ft_printf("%#.2x\n", 53463446));
// 	printf("Orig: %d\n", printf("%#10x\n", 53463446));
// 	printf("Mine: %d\n\n", ft_printf("%#10x\n", 53463446));
// 	ft_printf("\n\n==== Strings ====\n");
// 	printf("Orig: %d\n", printf("%+10s\n", "Hello Good morning"));
// 	printf("Mine: %d\n\n", ft_printf("%+10s\n", "Hello Good morning"));
// 	printf("Orig: %d\n", printf("%-10.10s\n", "Hello Good morning"));
// 	printf("Mine: %d\n\n", ft_printf("%-10.10s\n", "Hello Good morning"));
// 	printf("Orig: %d\n", printf("%5.500s\n", "Hello Good morning"));
// 	printf("Mine: %d\n\n", ft_printf("%5.500s\n", "Hello Good morning"));
// 	printf("Orig: %d\n", printf("%5.500s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%5.500s\n", NULL));
// 	printf("Orig: %d\n", printf("%.1s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%.1s\n", NULL));
// 	printf("Orig: %d\n", printf("%013s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%013s\n", NULL));
// 	printf("Orig: %d\n", printf("%-s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%-s\n", NULL));
// 	printf("Orig: %d\n", printf("%s", ""));
// 	printf("Mine: %d\n\n", ft_printf("%s", ""));
// 	printf("Orig: %d\n", printf(" %s", ""));
// 	printf("Mine: %d\n\n", ft_printf(" %s", ""));
// 	printf("Orig: %d\n", printf("%s ", ""));
// 	printf("Mine: %d\n\n", ft_printf("%s ", ""));
// 	printf("Orig: %d\n", printf(" %s ", ""));
// 	printf("Mine: %d\n\n", ft_printf(" %s ", ""));
// 	printf("Orig: %d\n", printf(" %s ", "-"));
// 	printf("Mine: %d\n\n", ft_printf(" %s ", "-"));
// 	printf("Orig: %d\n", printf(" %s %s ", "", "-"));
// 	printf("Mine: %d\n\n", ft_printf(" %s %s ", "", "-"));
// 	printf("Orig: %d\n", printf(" %s %s ", " - ", ""));
// 	printf("Mine: %d\n\n", ft_printf(" %s %s ", " - ", ""));
// 	printf("Orig: %d\n", printf(" %s %s %s %s %s",
// 			" - ", "", "4", "", "Mussum Ipsum, cacilds vidis litro abertis. "
// 			"Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. "
// 			"Aenean sit amet nisi. Atirei o pau no gatis, per gatis num "
// 			"morreus."));
// 	printf("Mine: %d\n\n", ft_printf(" %s %s %s %s %s",
// 			" - ", "", "4", "", "Mussum Ipsum, cacilds vidis litro abertis. "
// 			"Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. "
// 			"Aenean sit amet nisi. Atirei o pau no gatis, per gatis num "
// 			"morreus."));
// 	printf("Orig: %d\n", printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
// 	printf("Mine: %d\n\n", ft_printf(" %s %s %s %s %s ", " - ", "", "4", "",
// 			"2 "));
// 	ft_printf("\n\n==== Punteros ====\n");
// 	printf("Orig: %d\n", printf("&a: %p\n", &a));
// 	printf("Mine: %d\n\n", ft_printf("&a: %p\n", &a));
// 	printf("Orig: %d\n", printf("LONG_MIN: %p\n", (void *)LONG_MIN));
// 	printf("Mine: %d\n\n", ft_printf("LONG_MIN: %p\n", (void *)LONG_MIN));
// 	printf("Orig: %d\n", printf("LONG_MAX: %p\n", (void *)LONG_MAX));
// 	printf("Mine: %d\n\n", ft_printf("LONG_MAX: %p\n", (void *)LONG_MAX));
// 	printf("Orig: %d\n", printf("ULONG_MAX: %p\n", (void *)ULONG_MAX));
// 	printf("Mine: %d\n\n", ft_printf("ULONG_MAX: %p\n", (void *)ULONG_MAX));
// 	printf("Orig: %d\n", printf("-1: %p\n", (void *)-1));
// 	printf("Mine: %d\n\n", ft_printf("-1: %p\n", (void *)-1));
// 	printf("Orig: %d\n", printf("%#20.10x\n", 5345));
// 	printf("Mine: %d\n\n", ft_printf("%#20.10x\n", 5345));
// 	printf("Orig: %d\n", printf("%p\n", (void *)-1));
// 	printf("Mine: %d\n\n", ft_printf("%p\n", (void *)-1));
// 	printf("Orig: %d\n", printf("%p\n", (void *)1));
// 	printf("Mine: %d\n\n", ft_printf("%p\n", (void *)1));
// 	printf("Orig: %d\n", printf("%p\n", (void *)15));
// 	printf("Mine: %d\n\n", ft_printf("%p\n", (void *)15));
// 	printf("Orig: %d\n", printf("%04p\n", (void *)16));
// 	printf("Mine: %d\n\n", ft_printf("%04p\n", (void *)16));
// 	printf("Orig: %d\n", printf("%p\n", (void *)17));
// 	printf("Mine: %d\n\n", ft_printf("%p\n", (void *)17));
// 	printf("Orig: %d\n", printf("%3p %p\n", (void *)LONG_MIN,
// 			(void *)LONG_MAX));
// 	printf("Mine: %d\n\n", ft_printf("%3p %p\n", (void *)LONG_MIN,
// 			(void *)LONG_MAX));
// 	printf("Orig: %d\n", printf("%p %p\n", (void *)INT_MIN,
// 			(void *)INT_MAX));
// 	printf("Mine: %d\n\n", ft_printf("%p %p\n", (void *)INT_MIN,
// 			(void *)INT_MAX));
// 	printf("Orig: %d\n", printf("%p %p\n", (void *)ULONG_MAX,
// 			(void *)(-ULONG_MAX)));
// 	printf("Mine: %d\n\n", ft_printf("%p %p\n", (void *)ULONG_MAX,
// 			(void *)(-ULONG_MAX)));
// 	ft_printf("\n\n==== Extras ====\n");
// 	printf("Orig: %d\n", printf("%5%\n"));
// 	printf("Mine: %d\n\n", ft_printf("%5%\n"));
// 	printf("Orig: %d\n", printf("%-5%\n"));
// 	printf("Mine: %d\n\n", ft_printf("%-5%\n"));
// 	printf("Orig: %d\n", printf("%-05%\n"));
// 	printf("Mine: %d\n\n", ft_printf("%-05%\n"));
// 	printf("Orig: %d\n", printf("%23s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%23s\n", NULL));
// 	printf("Orig: %d\n", printf("%.s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%.s\n", NULL));
// 	printf("Orig: %d\n", printf("%32s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%32s\n", NULL));
// 	printf("Orig: %d\n", printf("%2s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%2s\n", NULL));
// 	printf("Orig: %d\n", printf("%-32s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%-32s\n", NULL));
// 	printf("Orig: %d\n", printf("%-16s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%-16s\n", NULL));
// 	printf("Orig: %d\n", printf("%-3s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%-3s\n", NULL));
// 	printf("Orig: %d\n", printf("%3.s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%3.s\n", NULL));
// 	printf("Orig: %d\n", printf("%10.s\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%10.s\n", NULL));
// 	printf("Orig: %d\n", printf("%-3.s|\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%-3.s|\n", NULL));
// 	printf("Orig: %d\n", printf("%-8.s|\n", NULL));
// 	printf("Mine: %d\n\n", ft_printf("%-8.s|\n", NULL));
// 	printf("Orig: %d\n", printf("%.0i|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%.0i|\n", 0));
// 	printf("Orig: %d\n", printf("%.i|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%.i|\n", 0));
// 	printf("Orig: %d\n", printf("%5.0i|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%5.0i|\n", 0));
// 	printf("Orig: %d\n", printf("%5.i|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%5.i|\n", 0));
// 	printf("Orig: %d\n", printf("%5.0i|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%5.0i|\n", 0));
// 	printf("Orig: %d\n", printf("%5.i|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%5.i|\n", 0));
// 	printf("Orig: %d\n", printf("%-5.0i|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%-5.0i|\n", 0));
// 	printf("Orig: %d\n", printf("%-5.i|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%-5.i|\n", 0));
// 	printf("Orig: %d\n", printf("%5.0d|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%5.0d|\n", 0));
// 	printf("Orig: %d\n", printf("%5.d|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%5.d|\n", 0));
// 	printf("Orig: %d\n", printf("%-5.0d|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%-5.0d|\n", 0));
// 	printf("Orig: %d\n", printf("%-5.d|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%-5.d|\n", 0));
// 	printf("Orig: %d\n", printf("%5.0u|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%5.0u|\n", 0));
// 	printf("Orig: %d\n", printf("%5.u|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%5.u|\n", 0));
// 	printf("Orig: %d\n", printf("%-5.0u|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%-5.0u|\n", 0));
// 	printf("Orig: %d\n", printf("%-5.u|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%-5.u|\n", 0));
// 	printf("Orig: %d\n", printf("%.0x|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%.0x|\n", 0));
// 	printf("Orig: %d\n", printf("%.x|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%.x|\n", 0));
// 	printf("Orig: %d\n", printf("%5.0x|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%5.0x|\n", 0));
// 	printf("Orig: %d\n", printf("%5.x|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%5.x|\n", 0));
// 	printf("Orig: %d\n", printf("%-5.0x|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%-5.0x|\n", 0));
// 	printf("Orig: %d\n", printf("%-5.x|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%-5.x|\n", 0));
// 	printf("Orig: %d\n", printf("%.0X|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%.0X|\n", 0));
// 	printf("Orig: %d\n", printf("%.X|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%.X|\n", 0));
// 	printf("Orig: %d\n", printf("%5.0X|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%5.0X|\n", 0));
// 	printf("Orig: %d\n", printf("%5.X|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%5.X|\n", 0));
// 	printf("Orig: %d\n", printf("%-5.0X|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%-5.0X|\n", 0));
// 	printf("Orig: %d\n", printf("%-5.X|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("%-5.X|\n", 0));
// 	printf("Orig: %d\n", printf("%.x, %.0x|\n", 0, 0));
// 	printf("Mine: %d\n\n", ft_printf("%.x, %.0x|\n", 0, 0));
// 	printf("Orig: %d\n", printf("%.X, %.0X|\n", 0, 0));
// 	printf("Mine: %d\n\n", ft_printf("%.X, %.0X|\n", 0, 0));
// 	printf("Orig: %d\n", printf("p6 %.0d|\n", 0));
// 	printf("Mine: %d\n\n", ft_printf("p6 %.0d|\n", 100));
// 	printf("Orig: %d\n", printf("p14 %.0i|\n", 100));
// 	printf("Mine: %d\n\n", ft_printf("p14 %.0i|\n", 100));
// 	printf("Orig: %d\n", printf("p22 %.0x|\n", 100));
// 	printf("Mine: %d\n\n", ft_printf("p22 %.0x|\n", 100));
// 	printf("Orig: %d\n", printf("p30 %.0u|\n", 100));
// 	printf("Mine: %d\n\n", ft_printf("p30 %.0u|\n", 100));
// 	printf("Orig: %d\n", printf("t3 %50.0d|\n", 10));
// 	printf("Mine: %d\n\n", ft_printf("t3 %50.0d|\n", 10));
// 	printf("Orig: %d\n", printf("%20.0d|\n", 1024));
// 	printf("Mine: %d\n\n", ft_printf("%20.0d|\n", 1024));
// 	printf("Orig: %d\n", printf("%20.d|\n", -1024));
// 	printf("Mine: %d\n\n", ft_printf("%20.d|\n", -1024));
// 	printf("Orig: %d\n", printf("%20.0i|\n", 1024));
// 	printf("Mine: %d\n\n", ft_printf("%20.0i|\n", 1024));
// 	printf("Orig: %d\n", printf("%20.i|\n", -1024));
// 	printf("Mine: %d\n\n", ft_printf("%20.i|\n", -1024));
// 	printf("Orig: %d\n", printf("%20.u|\n", 1024u));
// 	printf("Mine: %d\n\n", ft_printf("%20.u|\n", 1024u));
// 	printf("Orig: %d\n", printf("%20.0u|\n", -1024u));
// 	printf("Mine: %d\n\n", ft_printf("%20.0u|\n", -1024u));
// 	printf("Orig: %d\n", printf("%20.x|\n", 0x1234abcdu));
// 	printf("Mine: %d\n\n", ft_printf("%20.x|\n", 0x1234abcdu));
// 	printf("Orig: %d\n", printf("%20.0x|\n", -0x1234abcdu));
// 	printf("Mine: %d\n\n", ft_printf("%20.0x|\n", -0x1234abcdu));
// 	printf("Orig: %d\n", printf("%20.X|\n", 0x1234abcdu));
// 	printf("Mine: %d\n\n", ft_printf("%20.X|\n", 0x1234abcdu));
// 	printf("Orig: %d\n", printf("%20.0X|\n", -0x1234abcdu));
// 	printf("Mine: %d\n\n", ft_printf("%20.0X|\n", -0x1234abcdu));
// 	printf("Orig: %d\n", printf("%-163.23u%-68.0X|\n",
// 			3421138903u, 514939578u));
// 	printf("Mine: %d\n\n", ft_printf("%-163.23u%-68.0X|\n",
// 			3421138903u, 514939578u));
// 	printf("Orig: %d\n", printf("%---105p%-%%--150.i|\n",
// 			(void*)5854188174500153960lu, -1646567843));
// 	printf("Mine: %d\n\n", ft_printf("%---105p%-%%--150.i|\n",
// 			(void*)5854188174500153960lu, -1646567843));
// 	printf("Orig: %d\n", printf("%197c%12p%013.i%--147.185x%-1c|\n",
// 			7, (void*)18229185041105221837lu, -1488496170, 703835510u, 120));
// 	printf("Mine: %d\n\n", ft_printf("%197c%12p%013.i%--147.185x%-1c|\n",
// 			7, (void*)18229185041105221837lu, -1488496170, 703835510u, 120));
// 	printf("Orig: %d\n", printf("%-189.X%000130.137d%092.60d|\n",
// 			823761827u, -369802385, -444387222));
// 	printf("Mine: %d\n\n", ft_printf("%-189.X%000130.137d%092.60d|\n",
// 			823761827u, -369802385, -444387222));
// 	printf("Orig: %d\n", printf("%.d|\n", 1));
// 	printf("Mine: %d\n\n", ft_printf("%.d|\n", 1));
// 	printf("Orig: %d\n", printf("%0d", 42));
// 	printf("Mine: %d\n\n", ft_printf("%0d", 42));
// 	return (0);
// }
