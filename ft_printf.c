/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:15:12 by aldantas          #+#    #+#             */
/*   Updated: 2023/11/16 06:23:08 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	int	count;
	va_list	ap;

	va_start(ap, fmt);
	count = parse_string(fmt, ap);
	va_end(ap);
	return (count);
}
