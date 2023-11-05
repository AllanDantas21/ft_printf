#include "ft_printf.h"

static long	handle_negative(long *value)
{
    if (*value < 0)
    {
                *value = -*value;
		return (1);
    }
    return (0);
}

static void	fill_itoa(int nb, char *str, int base, char *chr, int len)
{
	str[len] = '\0';
       	while (len--)
        {
                str[len] = chr[(nb % base)];
                nb /= base;
        }
}

static void	add_sign(char *str, int sign)
{
	if (sign == 1)
		str[0] = '-';
}

char	*itoa_base(int n, int base, char *chr)
{
	char	*str;
	long	nb;
	int		sign;
	int		len;

	nb = n;
	len = sizenum_base(nb, base);
	sign = handle_negative(&nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	fill_itoa(nb, str, base, chr, len);
	add_sign(str, sign);
	return (str);
}
