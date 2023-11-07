#include "ft_printf.h"

int	print_percent(void)
{
	int	count;

	count = write(1, "%", 1);
	return (count);
}
