/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:55:54 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/13 19:06:55 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int i, int *count)
{
	unsigned int	nb;

	nb = i;
	if (i < 0)
	{
		nb = -nb;
		ft_putchar_pf('-', count);
	}
	if (nb > 9)
	{
		ft_putnbr_pf(nb / 10, count);
		ft_putnbr_pf(nb % 10, count);
	}
	else
		ft_putchar_pf(nb + '0', count);
}
