/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:33:00 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/07 19:19:07 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countchar(int n)
{
	int	len;

	len = 0;
	while (n >= 1 || n <= -1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

	len = ft_countchar(n);
	sign = 1;
	if (n <= 0)
	{
		sign = -1;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[0] = '-';
	if (n == 0)
		str[0] = '0';
	str[len] = 0;
	while (--len >= 0 && (n >= 1 || n <= -1))
	{
		str[len] = n % 10 * sign + '0';
		n /= 10;
	}
	return (str);
}
