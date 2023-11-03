#include "printf.h"

int	print_decimal(int decimal)
{	
	int	count;
	char	*str;

	count = 0;
	str = itoa_base(decimal, 10, "0123456789");
	count += sizenum_base(decimal, 10);
	print_string(str);
	free(str);
	return (count);
}
