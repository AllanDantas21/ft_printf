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

static int	print_format(int arg, va_list ap)
{
	int	count;

	count = 0;
	if (arg == 'c')
		count += print_char(va_arg(ap, int));
	else if (arg == 's')
		count += print_string(va_arg(ap, char *));
	else if (arg == 'p')
		count += print_address(va_arg(ap, void *));
	else if (arg == 'd' || arg == 'i')
		count += print_decimal(va_arg(ap, signed int));
	else if (arg == 'u')
		count += print_unsigned(va_arg(ap, unsigned int)); 
	else if (arg == 'x')
		count += print_hexa(va_arg(ap, unsigned int));
	else if (arg == 'X')
		count += print_hexa_upper(va_arg(ap, unsigned int));
	else if (arg == '%')
		count += print_percent();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		counter;
	int		i;

	va_start(ap, format);
	i = 0;
	counter = 0;
	while (format[i])
	{
		if (format[i] != '%')
			counter += write(1, &format[i], 1);
		else if ((format[i] == '%') && format[i + 1])
		{
			i++;
			if (is_argument(format[i]))
				counter += print_format(format[i], ap);
			else if (format[i])
				counter += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(ap);
	return (counter);
}
