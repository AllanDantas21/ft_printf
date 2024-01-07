/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_specifiers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 14:51:55 by aldantas          #+#    #+#             */
/*   Updated: 2024/01/07 14:51:58 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

void	init_specifiers(t_list *specifiers)
{
	specifiers = malloc(sizeof(t_list));
	specifiers->width = 0;
	specifiers->minus = 0;
	specifiers->point = 0;
	specifiers->blank = 0;
	specifiers->plus = 0;
	specifiers->hash = 0;
	specifiers->zero = 0;
}

int	check_flags(char arg, t_list *flags)
{
	int	count_flags;

	count_flags = 0;
	if (ft_strchr("0123456789", arg) == 1)
	{
		flags->width = 1;
		count_flags++;
	}
	return (count_flags);
}

