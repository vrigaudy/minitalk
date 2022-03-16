/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:44:55 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/15 16:34:20 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		count;

	if (!str)
		return (0);
	count = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			ft_dispatch(arg, *(str + 1), &count);
			str += 2;
		}
		else
		{
			ft_putchar_pf(*str, &count);
			str++;
		}
	}
	va_end(arg);
	return (count);
}
