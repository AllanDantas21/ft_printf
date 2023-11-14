/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:49:04 by aldantas          #+#    #+#             */
/*   Updated: 2023/11/07 20:50:34 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

static size_t	sizenum_base(unsigned long long n, char *base)
{
	size_t	len;
	unsigned long long baselen;

	len = 1;
	baselen = ft_strlen(base);
	while(n >= baselen)
	{
		n /= baselen;
		len++;
	}
	return (len);
}

static void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

static void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

char	*itoa_base(unsigned long long n, char *base)
{
	char	*str;
	int		len;
	int		baselen;

	len = sizenum_base(n, base);
	baselen = ft_strlen(base);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (len)
	{	
		len--;
		str[len] = base[(n % baselen)];
		n /= baselen;
	}
	return (str);
}
