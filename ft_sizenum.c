#include "ft_printf.h"

int	sizenum_base(long n, int base)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		count++;
		n = n / base;
	}
	return (count);
}
