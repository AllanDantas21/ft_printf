#include "ft_printf.h"
static int	check_negative(long *value)
{
	if(*value < 0)
	{
		*value = -*value;
		return (1);
	}
	return (0);
}

char	*itoa_base(int n, int base, char* chr)
{
	char	*str;
	long	nb;
	int		sign;
	int		len;

	nb = n;
	len = sizenum_base(nb, base);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	sign = check_negative(&nb);
	str[len] = '\0';
	while (len--)
	{
		str[len] = chr[(nb % base)];
		nb /= base;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
