/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:48:15 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/30 18:15:55 by dde-fite         ###   ########.fr       */
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

/* ****************************** MAIN PROTOYPE ***************************** */
int				ft_printf(char const *str, ...);
/* ************************************************************************** */

/* ************************** INTERRUPTION WRITERS ************************** */
int				write_switch(const char *str, va_list *args_ptr);
int				write_char(char c);
int				write_int(int nbr);
unsigned int	write_uint(unsigned int nbr);
int				write_str(char *str);
int				write_hex(int nbr, bool uppercase);
int				write_ptr(void *ptr);

int				get_int(va_list *args_ptr);
unsigned int	get_uint(va_list *args_ptr);
char			get_char(va_list *args_ptr);
char			*get_str(va_list *args_ptr);
void			*get_ptr(va_list *args_ptr);

/* ********************************  UTILS ********************************* */
char			manage_sign(int nbr, unsigned int *u_nbr);

#endif