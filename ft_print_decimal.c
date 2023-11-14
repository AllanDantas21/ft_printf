/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:16:38 by aldantas          #+#    #+#             */
/*   Updated: 2023/11/09 08:16:52 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	handle_negative(signed long *value)
{
	int	counter;

	counter = 0;
	if (*value < 0)
	{
		ft_putchar('-');
		*value *= -1;
		counter++;
	}
	return (counter);
}

int	print_decimal(signed long value)
{
	int		counter;
	char	*str;

	counter = handle_negative(&value);
	str = itoa_base(value, "0123456789");
	counter += print_string(str);
	free(str);
	return (counter);
}
