/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:36:24 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/02 12:30:54 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*trg;
	unsigned int	i;

	i = 0;
	trg = (unsigned char *)str;
	while (i < len)
	{
		if (trg[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
