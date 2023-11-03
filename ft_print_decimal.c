#include "printf.h"

int	print_decimal(int decimal)
{	
	int	count;
	char	*str;

	count = 0;
	str = ft_itoa_base(decimal, 10, "0123456789");
	print_string(str);
	count += sizenum_base(decimal, 10);
	free(str);
	return (count);
}
