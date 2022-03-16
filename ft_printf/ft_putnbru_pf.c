/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:07:04 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/13 22:22:18 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru_pf(unsigned int i, int *count)
{
	if (i > 9)
	{
		ft_putnbru_pf(i / 10, count);
		ft_putnbru_pf(i % 10, count);
	}
	else
		ft_putchar_pf(i + '0', count);
}
