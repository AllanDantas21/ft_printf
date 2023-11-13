/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:15:12 by aldantas          #+#    #+#             */
/*   Updated: 2023/11/13 19:13:20 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	print_fmt(char arg, va_list ap)
{
	int	count;

	count = 0;
	if (arg == 'c')
		count += print_char(va_arg(ap, int));
	else if (arg == 'd' || arg == 'i')
		count += print_decimal(va_arg(ap, signed int));
	else if (arg == 's')
		count += print_string(va_arg(ap, char *));
	else if (arg == 'p')
		count += print_address(va_arg(ap, void *));
	else if (arg == 'u')
		count += print_unsigned(va_arg(ap, unsigned int));
	else if (arg == 'x')
		count += print_hexa(va_arg(ap, unsigned int));
	else if (arg == 'X')
		count += print_hexa_upper(va_arg(ap, unsigned int));
	else if (arg == '%')
		count += print_percent();
	else
	{
		write(1, "%", 1);
		write(1, &arg, 1);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += print_fmt(*format, ap);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
