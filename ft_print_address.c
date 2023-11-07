#include "ft_printf.h"

static int print_error(void)
{
	int	error;

	error = print_string("(nil)");
	return (error);
}

int	print_address(void *p)
{
	int			counter;
	char		*str;
	unsigned long long	adress;

	if (!p)
		return(print_error());
	counter = 0;
	adress = (unsigned long long)p;
	counter += print_string("0x");
	str = utoa_base(adress, 16, "0123456789abcdef");
	counter += print_string(str);
	free(str);
	return (counter);
}
