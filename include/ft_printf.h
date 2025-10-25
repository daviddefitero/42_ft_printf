/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:48:15 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/25 23:40:11 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>
# include "libft.h"

typedef struct s_modifiers
{
	bool	plus;
	bool	minus;
	bool	blank;
	int		width;
	bool	zero;
	int		precision;
}	t_modifiers;

int			ft_printf(char const *str, ...);
const char	*get_flags(t_modifiers *mods, const char *str);
const char	*get_width(t_modifiers *mods, const char *str);
const char	*get_precision(t_modifiers *mods, const char *str);
void		fill_width(unsigned int pd, bool zeroes);
int			write_switch(const char *str, t_modifiers *mods, va_list *args_ptr);
int			write_switch_hash_notation(const char *str, t_modifiers *mods,
				va_list *args_ptr);
int			write_int(t_modifiers *mods, va_list *args_ptr);
void		fill_char(char c, unsigned int nbr);

#endif