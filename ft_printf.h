/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:17:29 by aldantas          #+#    #+#             */
/*   Updated: 2023/11/16 06:05:52 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define NUMBERS "0123456789"

typedef struct s_list
{
	int width;
	int point;
	int	zero;
	int minus;
	int plus;
	int hash;
	int blank;
}	t_list;

// printf funcs
int		ft_printf(const char *format, ...);
int		parse_string(const char *fmt, va_list ap);
int		ft_print_decimal(int decimal);
int		ft_print_char(char c);
int		ft_print_string(const char *str);
int		ft_print_hexa(unsigned int n);
int		ft_print_hexa_upper(unsigned int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_address(void *p);
char	*utoa_base(unsigned long long n, int base, char *chr);
char	*ft_itoa(int n);

// specifiers funcs
void	init_specifiers(t_list *specifiers);
int		check_flags(char arg, t_list *flags);

// utils funcs 
int ft_strchr(const char *s, int c);

#endif
