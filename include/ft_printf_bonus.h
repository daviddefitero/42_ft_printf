/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:48:15 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/30 18:13:08 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           FT_PRINTF by dde-fite                            */
/* ************************************************************************** */

/* ************************ PREPROCESSOR STATEMENTS ************************* */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>
# include "libft.h"

/* ******************** STRUCTS, TYPES, OTHER STATEMENTS ******************** */

typedef struct s_modifiers
{
	bool	plus;
	bool	minus;
	bool	blank;
	bool	hash;
	int		width;
	bool	zero;
	int		precision;
	bool	is_precision;
}	t_modifiers;

/* ****************************** MAIN PROTOYPE ***************************** */
int				ft_printf(char const *str, ...);
/* ************************************************************************** */

/* **************************** ARGUMENT GETTERS **************************** */
const char		*get_flags(t_modifiers *mods, const char *str);
const char		*get_width(t_modifiers *mods, const char *str);
const char		*get_precision(t_modifiers *mods, const char *str,
					va_list *args_ptr);

/* ************************** INTERRUPTION WRITERS ************************** */
int				write_switch(const char *str, t_modifiers *mods,
					va_list *args_ptr);
int				write_char(char c, t_modifiers *mods);
int				write_int(int nbr, t_modifiers *mods);
unsigned int	write_uint(unsigned int nbr, t_modifiers *mods);
int				write_str(char *str, t_modifiers *mods);
int				write_hex(int nbr, t_modifiers *mods, bool uppercase);
int				write_ptr(void *ptr, t_modifiers *mods);

int				get_int(va_list *args_ptr);
unsigned int	get_uint(va_list *args_ptr);
char			get_char(va_list *args_ptr);
char			*get_str(va_list *args_ptr);
void			*get_ptr(va_list *args_ptr);

/* ********************************  UTILS ********************************* */
void			fill_width(unsigned int pd, bool zeroes);
void			fill_char(char c, unsigned int nbr);
char			manage_sign(int nbr, unsigned int *u_nbr, t_modifiers *mods);

#endif