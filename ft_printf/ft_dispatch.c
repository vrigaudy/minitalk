/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:31:43 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/15 16:31:56 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dispatch(va_list arg, char c, int *count)
{
	char	*basemaj;
	char	*basemin;

	basemaj = "0123456789ABCDEF";
	basemin = "0123456789abcdef";
	if (c == 'c')
		ft_putchar_pf(va_arg(arg, int), count);
	if (c == 's')
		ft_putstr_pf(va_arg(arg, char *), count);
	if (c == 'd' || c == 'i')
		ft_putnbr_pf(va_arg(arg, int), count);
	if (c == 'u')
		ft_putnbru_pf(va_arg(arg, unsigned int), count);
	if (c == 'X')
		ft_putnbr_base_pf(va_arg(arg, unsigned int), basemaj, count);
	if (c == 'x')
		ft_putnbr_base_pf(va_arg(arg, unsigned int), basemin, count);
	if (c == 'p')
	{
		ft_putstr_pf("0x", count);
		ft_putnbr_base_pf(va_arg(arg, unsigned long int), basemin, count);
	}
	if (c == '%')
		ft_putchar_pf('%', count);
}
