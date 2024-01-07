#include "../ft_printf.h"

int ft_strchr(const char *s, int c)
{
	unsigned char	*a;

	a = (unsigned char *) s;
	while (*a)
	{
		if (*a == (unsigned char)c)
			return (1);
		a++;
	}
	if (*a == c)
		return (1);
	return (0);
}