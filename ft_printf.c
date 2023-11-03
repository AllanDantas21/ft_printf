#include "printf.h"

static int print_fmt(char arg, va_list ap)
{
 	int	count;

	count = 0;
	if (arg == 'c')
		count += print_char(va_arg(ap, int));
	if (arg == 'd')
		count += print_decimal(va_arg(ap, int));
	if (arg == 's')
		count += print_string(va_arg(ap, char *));
	if (arg == 'p')
		return (0);
	if (arg == 'i')
		return (0);
	if (arg == 'u')
		return 0;
	if (arg == 'x')
		return 0;
	if (arg == 'X')
		return 0;
	if (arg == '%')
		return 0;
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

int	main(void)
{
	ft_printf("abacate");
}
