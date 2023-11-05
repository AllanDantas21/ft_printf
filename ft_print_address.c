#include "ft_printf.h"

int	print_address(void *p)
{
	int	counter;
	char	*str;
	unsigned long adress;
	
	adress = (unsigned long)p;
	counter = print_string("0x");
	str = utoa_base(adress, 16, "0123456789abcdef");
	counter += print_string(str);
	free(str);
	return (counter);
}
