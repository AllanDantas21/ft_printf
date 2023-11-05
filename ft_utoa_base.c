#include "ft_printf.h"

static int      sizenum_base_u(unsigned long n, int base)
{
        int     count;

        count = 0;
        if (n == 0)
                return (1);
        while (n > 0)
        {
                count++;
                n = n / base;
        }
        return (count);
}

char	*utoa_base(unsigned int n, int base, char* chr)
{
	char	*str;
	unsigned long	nb;
	int		len;

	nb = (unsigned long)n;
	len = sizenum_base_u(nb, base);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = chr[(nb % base)];
		nb /= base;
	}
	return (str);
}
