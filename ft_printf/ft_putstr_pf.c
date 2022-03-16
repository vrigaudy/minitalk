/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:43:08 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/13 20:15:29 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *str, int *count)
{
	if (!str)
		ft_putstr_pf("(null)", count);
	else
	{
		while (*str)
		{
			ft_putchar_pf(*str, count);
			str++;
		}
	}
}
