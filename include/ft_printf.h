/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:48:15 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/24 23:12:51 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

typedef struct s_modifiers
{
	int		plus;
	int		minus;
	int		blank;
	int		width;
	int		zero;
	int		precision;
}	t_modifiers;

int			ft_printf(char const *str, ...);
const char	*get_flags(t_modifiers *mods, const char *str);
const char	*get_width(t_modifiers *mods, const char *str);
const char	*get_precision(t_modifiers *mods, const char *str);
int			fill_width_start(void *content, char type, t_modifiers *mods);
int			fill_width_end(int chrs_count, t_modifiers *mods);
int			write_switch(const char *str, t_modifiers mods, va_list *args_ptr);
int			write_switch_hash_notation(const char *str, t_modifiers mods,
				va_list *args_ptr);

#endif