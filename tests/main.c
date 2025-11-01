/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:22:39 by dde-fite          #+#    #+#             */
/*   Updated: 2025/11/01 23:30:01 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(void)
{
	int const	a = 42;

	ft_printf("\n\n==== Enteros ====\n");
	printf("Orig: %d\n", printf("1. %d\n", 42));
	printf("Mine: %d\n", ft_printf("1. %d\n", 42));
	printf("Orig: %d\n", printf("2. %d\n", -42));
	printf("Mine: %d\n", ft_printf("2. %d\n", -42));
	printf("Orig: %d\n", printf("3. %+d %+d\n", 42, -42));
	printf("Mine: %d\n", ft_printf("3. %+d %+d\n", 42, -42));
	printf("Orig: %d\n", printf("4. % d % d\n", 42, -42));
	printf("Mine: %d\n", ft_printf("4. % d % d\n", 42, -42));
	printf("Orig: %d\n", printf("5. %5d %5d\n", 42, -42));
	printf("Mine: %d\n", ft_printf("5. %5d %5d\n", 42, -42));
	printf("Orig: %d\n", printf("5. %0d %0d\n", 42, -42));
	printf("Mine: %d\n", ft_printf("5. %0d %0d\n", 42, -42));
	printf("Orig: %d\n", printf("6. %-5d %-5d\n", 42, -42));
	printf("Mine: %d\n", ft_printf("6. %-5d %-5d\n", 42, -42));
	printf("Orig: %d\n", printf("7. %05d %05d\n", 42, -42));
	printf("Mine: %d\n", ft_printf("7. %05d %05d\n", 42, -42));
	printf("Orig: %d\n", printf("8. %.5d %.5d\n", 42, -42));
	printf("Mine: %d\n", ft_printf("8. %.5d %.5d\n", 42, -42));
	printf("Orig: %d\n", printf("9. %10.5d %10.5d\n", 42, -42));
	printf("Mine: %d\n", ft_printf("9. %10.5d %10.5d\n", 42, -42));
	printf("Orig: %d\n", printf("10. INT_MAX: %d\n", INT_MAX));
	printf("Mine: %d\n", ft_printf("10. INT_MAX: %d\n", INT_MAX));
	printf("Orig: %d\n", printf("11. INT_MIN: %d\n", INT_MIN));
	printf("Mine: %d\n", ft_printf("11. INT_MIN: %d\n", INT_MIN));
	printf("Orig: %d\n", printf("12. %+08.5d %+08.5d\n", 42, -42));
	printf("Mine: %d\n", ft_printf("12. %+08.5d %+08.5d\n", 42, -42));
	printf("Orig: %d\n", printf("13. %-+10.3d %-+10.3d\n", 42, -42));
	printf("Mine: %d\n", ft_printf("13. %-+10.3d %-+10.3d\n", 42, -42));
	ft_printf("\n\n==== Caracteres ====\n");
	printf("Mine: %d\n", ft_printf("Letter a: %c\n", 'a'));
	printf("Mine: %d\n", ft_printf("Letter b w/ width 10: %10c\n", 'b'));
	printf("Mine: %d\n", ft_printf("Letter c w/ width 10 and -: %-10c\n", 'c'));
	printf("Mine: %d\n", ft_printf("Letter d w/ width 10 and +: %+10c\n", 'd'));
	printf("Mine: %d\n", ft_printf("Letter e w/ width 10, - and blank: "
			"% -10c\n", 'e'));
	printf("Mine: %d\n", ft_printf("Letter f w/ width 10, -, + and "
			"precision: % -10.22c\n", 'f'));
	ft_printf("\n\n==== Unsigned ====\n");
	printf("Mine: %d\n", ft_printf("UInt Max: %u\n", (unsigned int)UINT_MAX));
	printf("Mine: %d\n", ft_printf("UInt Max: %u\n", 0));
	ft_printf("\n\n==== Porcentajes ====\n");
	printf("Orig: %d\n", printf("%%\n"));
	printf("Mine: %d\n", ft_printf("%%\n"));
	printf("Orig: %d\n", printf("%% %% %%\n"));
	printf("Mine: %d\n", ft_printf("%% %% %%\n"));
	printf("Orig: %d\n", printf("%%  %%  %%\n"));
	printf("Mine: %d\n", ft_printf("%%  %%  %%\n"));
	printf("Orig: %d\n", printf("%%   %%   %%\n"));
	printf("Mine: %d\n", ft_printf("%%   %%   %%\n"));
	ft_printf("\n\n==== Hexadecimal ====\n");
	printf("Orig: %d\n", printf("%+20.10x\n", 53463446));
	printf("Mine: %d\n", ft_printf("%+20.10x\n", 53463446));
	printf("Orig: %d\n", printf("%+20.10X\n", 53463446));
	printf("Mine: %d\n", ft_printf("%+20.10X\n", 53463446));
	printf("Orig: %d\n", printf("%#x\n", 53463446));
	printf("Mine: %d\n", ft_printf("%#x\n", 53463446));
	printf("Orig: %d\n", printf("%#.2x\n", 53463446));
	printf("Mine: %d\n", ft_printf("%#.2x\n", 53463446));
	printf("Orig: %d\n", printf("%#10x\n", 53463446));
	printf("Mine: %d\n", ft_printf("%#10x\n", 53463446));
	ft_printf("\n\n==== Strings ====\n");
	printf("Orig: %d\n", printf("%+10s\n", "Hello Good morning"));
	printf("Mine: %d\n", ft_printf("%+10s\n", "Hello Good morning"));
	printf("Orig: %d\n", printf("%-10.10s\n", "Hello Good morning"));
	printf("Mine: %d\n", ft_printf("%-10.10s\n", "Hello Good morning"));
	printf("Orig: %d\n", printf("%5.500s\n", "Hello Good morning"));
	printf("Mine: %d\n", ft_printf("%5.500s\n", "Hello Good morning"));
	printf("Orig: %d\n", printf("%5.500s\n", NULL));
	printf("Mine: %d\n", ft_printf("%5.500s\n", NULL));
	printf("Orig: %d\n", printf("%.1s\n", NULL));
	printf("Mine: %d\n", ft_printf("%.1s\n", NULL));
	printf("Orig: %d\n", printf("%013s\n", NULL));
	printf("Mine: %d\n", ft_printf("%013s\n", NULL));
	printf("Orig: %d\n", printf("%-s\n", NULL));
	printf("Mine: %d\n", ft_printf("%-s\n", NULL));
	printf("Orig: %d\n", printf("%s", ""));
	printf("Mine: %d\n", ft_printf("%s", ""));
	printf("Orig: %d\n", printf(" %s", ""));
	printf("Mine: %d\n", ft_printf(" %s", ""));
	printf("Orig: %d\n", printf("%s ", ""));
	printf("Mine: %d\n", ft_printf("%s ", ""));
	printf("Orig: %d\n", printf(" %s ", ""));
	printf("Mine: %d\n", ft_printf(" %s ", ""));
	printf("Orig: %d\n", printf(" %s ", "-"));
	printf("Mine: %d\n", ft_printf(" %s ", "-"));
	printf("Orig: %d\n", printf(" %s %s ", "", "-"));
	printf("Mine: %d\n", ft_printf(" %s %s ", "", "-"));
	printf("Orig: %d\n", printf(" %s %s ", " - ", ""));
	printf("Mine: %d\n", ft_printf(" %s %s ", " - ", ""));
	printf("Orig: %d\n", printf(" %s %s %s %s %s",
			" - ", "", "4", "", "Mussum Ipsum, cacilds vidis litro abertis. "
			"Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. "
			"Aenean sit amet nisi. Atirei o pau no gatis, per gatis num "
			"morreus."));
	printf("Mine: %d\n", ft_printf(" %s %s %s %s %s",
			" - ", "", "4", "", "Mussum Ipsum, cacilds vidis litro abertis. "
			"Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. "
			"Aenean sit amet nisi. Atirei o pau no gatis, per gatis num "
			"morreus."));
	printf("Orig: %d\n", printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
	printf("Mine: %d\n", ft_printf(" %s %s %s %s %s ", " - ", "", "4", "",
			"2 "));
	ft_printf("\n\n==== Punteros ====\n");
	printf("Orig: %d\n", printf("&a: %p\n", &a));
	printf("Mine: %d\n", ft_printf("&a: %p\n", &a));
	printf("Orig: %d\n", printf("LONG_MIN: %p\n", (void *)LONG_MIN));
	printf("Mine: %d\n", ft_printf("LONG_MIN: %p\n", (void *)LONG_MIN));
	printf("Orig: %d\n", printf("LONG_MAX: %p\n", (void *)LONG_MAX));
	printf("Mine: %d\n", ft_printf("LONG_MAX: %p\n", (void *)LONG_MAX));
	printf("Orig: %d\n", printf("ULONG_MAX: %p\n", (void *)ULONG_MAX));
	printf("Mine: %d\n", ft_printf("ULONG_MAX: %p\n", (void *)ULONG_MAX));
	printf("Orig: %d\n", printf("-1: %p\n", (void *)-1));
	printf("Mine: %d\n", ft_printf("-1: %p\n", (void *)-1));
	printf("Orig: %d\n", printf("%#20.10x\n", 5345));
	printf("Mine: %d\n", ft_printf("%#20.10x\n", 5345));
	printf("Orig: %d\n", printf("%p\n", (void *)-1));
	printf("Mine: %d\n", ft_printf("%p\n", (void *)-1));
	printf("Orig: %d\n", printf("%p\n", (void *)1));
	printf("Mine: %d\n", ft_printf("%p\n", (void *)1));
	printf("Orig: %d\n", printf("%p\n", (void *)15));
	printf("Mine: %d\n", ft_printf("%p\n", (void *)15));
	printf("Orig: %d\n", printf("%04p\n", (void *)16));
	printf("Mine: %d\n", ft_printf("%04p\n", (void *)16));
	printf("Orig: %d\n", printf("%p\n", (void *)17));
	printf("Mine: %d\n", ft_printf("%p\n", (void *)17));
	printf("Orig: %d\n", printf("%3p %p\n", (void *)LONG_MIN,
			(void *)LONG_MAX));
	printf("Mine: %d\n", ft_printf("%3p %p\n", (void *)LONG_MIN,
			(void *)LONG_MAX));
	printf("Orig: %d\n", printf("%p %p\n", (void *)INT_MIN,
			(void *)INT_MAX));
	printf("Mine: %d\n", ft_printf("%p %p\n", (void *)INT_MIN,
			(void *)INT_MAX));
	printf("Orig: %d\n", printf("%p %p\n", (void *)ULONG_MAX,
			(void *)(-ULONG_MAX)));
	printf("Mine: %d\n", ft_printf("%p %p\n", (void *)ULONG_MAX,
			(void *)(-ULONG_MAX)));
	return (0);
}
