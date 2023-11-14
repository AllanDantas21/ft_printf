/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:20:12 by aldantas          #+#    #+#             */
/*   Updated: 2023/11/09 08:20:39 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	print_error(void)
{
	int	error;

	error = print_string("(nil)");
	return (error);
}

static int	print_preceding_address(char *str)
{
	int	counter;

	counter = print_string(str);
	return (counter);
}

int	print_address(void *p)
{
	int					counter;
	char				*str;
	unsigned long long	adress;

	if (!p)
		return (print_error());
	adress = (unsigned long)p;
	counter = print_preceding_address("0x");
	str = itoa_base(adress, HEX_LOW);
	counter += print_string(str);
	free(str);
	return (counter);
}
