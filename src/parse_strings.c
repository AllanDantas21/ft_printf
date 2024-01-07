#include "../ft_printf.h"

static int ft_parse_cspdixX(const char arg, va_list ap, t_list *flags)
{
	int	count;
	(void)flags;

	count = 0;
	if (arg == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (arg == 'd' || arg == 'i')
		count += ft_print_decimal(va_arg(ap, signed int));
	else if (arg == 's')
		count += ft_print_string(va_arg(ap, char *));
	else if (arg == 'p')
		count += ft_print_address(va_arg(ap, void *));
	else if (arg == 'u')
		count += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (arg == 'x')
		count += ft_print_hexa(va_arg(ap, unsigned int));
	else if (arg == 'X')
		count += ft_print_hexa_upper(va_arg(ap, unsigned int));
	else if (arg == '%')
		count += write(1, "%", 1);
	return (count);
}

static int	ft_parse_fmt(const char *arg, va_list ap)
{
	int		count;
	t_list	*flags;

	count = 0;
	flags = NULL;
	init_specifiers(flags);
	arg += check_flags(*arg, flags);
	count = ft_parse_cspdixX(*arg, ap, flags);
	free(flags);
	return (count);
}

int	parse_string(const char *fmt, va_list ap)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
		while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			count += ft_parse_fmt(&fmt[i + 1], ap);
			i++;
		}
		else
			count += write(1, &fmt[i], 1);
		i++;
	}
	return (count);
}