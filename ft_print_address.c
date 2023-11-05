#include "ft_printf.h"

int	print_address(unsigned long p)
{
	int	counter;
	char	*str;
	
	counter = print_string("0x");
	str = itoa_base(p, 16, "0123456789abcdef");
	counter += print_string(str);
	free(str);
	return (counter);
}
