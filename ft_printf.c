#include "ft_printf.h"

static int print_fmt(char arg, va_list ap)
{
 	int	count;

	count = 0;
	if (arg == 'c')
		count += print_char(va_arg(ap, int));
	if (arg == 'd')
		count += print_decimal(va_arg(ap, signed long));
	if (arg == 's')
		count += print_string(va_arg(ap, char *));
	if (arg == 'p')
		count += print_address(va_arg(ap, unsigned long));
	if (arg == 'i')
		count += print_integer(va_arg(ap, signed long));
	if (arg == 'u')
		count += print_unsigned(va_arg(ap, unsigned int));
	if (arg == 'x')
		count += print_hexa(va_arg(ap, unsigned int));
	if (arg == 'X')
		count += print_hexa_upper(va_arg(ap, unsigned int));
	if (arg == '%')
		count += print_percent();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	count;

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
