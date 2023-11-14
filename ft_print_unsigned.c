/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:18:00 by aldantas          #+#    #+#             */
/*   Updated: 2023/11/09 08:18:14 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	int		counter;
	char	*str;

	str = itoa_base(n, "0123456789");
	counter = print_string(str);
	free(str);
	return (counter);
}
