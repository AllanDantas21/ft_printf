/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:19:47 by aldantas          #+#    #+#             */
/*   Updated: 2023/11/09 08:19:51 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_hexa(unsigned int value, char *base)
{
	int		counter;
	char	*str;

	counter = 0;
	str = itoa_base(value, base);
	counter += print_string(str);
	free(str);
	return (counter);
}
