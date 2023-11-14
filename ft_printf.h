/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:17:29 by aldantas          #+#    #+#             */
/*   Updated: 2023/11/13 16:22:06 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define	HEX_LOW	"0123456789abcdef"
# define	HEX_UPP "0123456789ABCDEF"

int		ft_printf(const char *format, ...);
int		print_decimal(signed long value);
int		ft_putchar(int c);
int		print_string(char *str);
int		print_hexa(unsigned int n, char *base);
int		print_unsigned(unsigned int n);
int		print_address(void *p);
char	*utoa_base(unsigned long long n, int base, char *chr);
char	*itoa_base(unsigned long long n, char *chr);
int	    is_argument(int c);

#endif
