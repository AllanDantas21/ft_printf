#include "ft_printf.h"

int	print_address(void *p)
{
	int	counter;
	int	error;
	char	*str;
	unsigned long long adress;
	
	if (!p)
	{
		error = print_string("(nil)");
		return (error);
	}
	counter = 0;	
	adress = (unsigned long long)p;
	counter += print_string("0x");
	str = utoa_base(adress, 16, "0123456789abcdef");
	counter += print_string(str);
	free(str);
	return (counter);
}
