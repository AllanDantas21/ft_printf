/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:19:58 by aldantas          #+#    #+#             */
/*   Updated: 2023/11/09 08:19:59 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	print_string(char *str)
{
	int	counter;
	int	i;
	
	i = 0;
	counter = 0;
	if (!str)
		return(write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		counter += ft_putchar(str[i]);
		i++;
	}
	return (counter);
}
