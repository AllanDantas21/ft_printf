#include "ft_printf.h"

int	print_unsigned(unsigned long n)
{
	int		counter;
	char	*str;

	counter = 0;
	str = utoa_base(n, 10, "0123456789");
	counter = print_string(str);
	free(str);
	return (counter);
}
