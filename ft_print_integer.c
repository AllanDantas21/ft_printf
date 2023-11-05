#include "ft_printf.h"

int	print_integer(int integer)
{
	int	counter;
	char 	*str;

	counter = 0;
	str = itoa_base(integer, 10, "0123456789");
	counter = sizenum_base(integer, 10);
	print_string(str);
	free(str);
	return (counter);
}
