#include "printf.h"

int	print_unsigned(unsigned long n)
{
	int	counter;
	char	*str;
	
	counter = 0;
	str = itoa_base(n, 10, "0123456789");
	counter = sizenum_base(n, 10);
	print_string(str);
	free(str);
	return (counter);
}
