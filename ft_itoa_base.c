#include "printf.h"

char	*ft_itoa_base(int n, int base, char* chr)
{
	char	*str;
	long	nb;
	int		sign;
	int		len;

	nb = n;
	sign = 0;
	len = sizenum_base(nb, base);
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
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
