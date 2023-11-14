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

int	print_decimal(int decimal)
{
	int		counter;
	char	*str;

	counter = 0;
	str = itoa_base(decimal, 10, "0123456789");
	count += print_string(str);
	free(str);
	return (counter);
}
