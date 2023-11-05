#include "ft_printf.h"

int	print_hexa(unsigned int n)
{
	int	counter;
	char	*str;
	
	counter = 0;
	str = utoa_base(n, 16, "0123456789abcdef");
	counter += print_string(str);
	free(str);
	return(counter);
}

int     print_hexa_upper(unsigned int n)
{
	int     counter;
	char    *str;
	
	counter = 0;
	str = utoa_base(n, 16, "0123456789ABCDEF");
        counter += print_string(str);
	free(str);
	return (counter);
}
