#include "ft_printf.h"

int	print_hexa(unsigned int n)
{
	int	counter;
	char	*str;
	
	counter = 0;
	str = itoa_base(n, 16, "0123456789abcdef");
	counter = sizenum_base(n, 16);
	print_string(str);
	free(str);
	return(counter);
}
