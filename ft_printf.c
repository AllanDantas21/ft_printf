#include "libft.h"
#include "stdarg.h"

static	print_fmt(char arg, va_list ap)
{
 	int	count;

	count = 0;
	if (arg == 'c')
		print_char(va_arg(ap, int));
	if (arg == 'd')
		print_integer(va_arg(ap, int));
	if (arg == 's')
		print_string(va_arg(ap, char *));
	if (arg == 'p')
		;
	if (arg == 'i')
		;
	if (arg == 'u')
		;
	if (arg == 'x')
		;
	if (arg == 'X')
		;
	if (arg == '%')
		;
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
			count += print_format(*format, ap);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
