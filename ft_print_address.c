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

int	print_address(void *p)
{
	int					counter;
	char				*str;
	unsigned long long	adress;

	if (!p)
		return (print_error());
	counter = 0;
	adress = (unsigned long long)p;
	counter += print_string("0x");
	str = utoa_base(adress, 16, "0123456789abcdef");
	counter += print_string(str);
	free(str);
	return (counter);
}
