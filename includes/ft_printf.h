/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 00:50:04 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:36:25 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include "libft.h"

# define HEXA_UPPER "0123456789ABCDEF"
# define HEXA_LOWER "0123456789abcdef"
# define PERCENTAGE '%'

typedef enum		e_type
{
	NONE,
	INTEGER,
	CHAR,
	UNSIGNED_INTEGER,
	STRING,
	HEXADECIMAL_LOWER,
	HEXADECIMAL_UPPER,
	POINTER,
	PERCENT,
	SIZE,
}					t_type;

typedef struct		s_printf
{
	char			*content;
	int				width;
	va_list			params;
	int				precision;
	int				i;
	int				negative;
	int				contains_zero;
	int				contains_precision;
	unsigned
	long long		additional_size;
	int				int_size;
	t_type			type;
}					t_printf;

int					ft_contains_char(char *s, char c);
char				*ft_unsigned_itoa(unsigned int nb);
int					ft_convert_char(t_printf *pf, char c);
int					ft_convert_int(t_printf *pf, int i);
int					ft_convert_unsigned_int(t_printf *pf, unsigned int i);
int					ft_convert_string(t_printf *pf, char *s);
int					ft_is_conversion(char c);
char				*ft_init_unsigned_itoa(unsigned int i);
char				*ft_init_itoa(int i);
int					ft_is_integer(char c);
int					ft_is_pf_char(char c);
int					ft_convert_percentage(t_printf *pf);
void				ft_init_pf(t_printf *pf, const char *format);
void				ft_reset_pf(t_printf *pf);
int					ft_exit_pf(t_printf *pf);
int					ft_perform_pf(t_printf *pf);
void				ft_parse_pf(t_printf *pf);
t_type				ft_get_type_by_char(char c);
void				ft_convert_by_flags(t_printf *pf);
int					ft_apply_digits(t_printf *pf, int is_width);
void				ft_apply_stars(t_printf *pf);
void				ft_apply_precision(t_printf *pf);
int					ft_convert_hexadecimal(t_printf *pf, int i);
int					ft_convert_pointer(t_printf *pf, void *ptr);
int					ft_apply_size_converter(
	t_printf *pf, unsigned long long **ptr);
#endif
