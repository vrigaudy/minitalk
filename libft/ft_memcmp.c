/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:52:40 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/01 14:18:49 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t len)
{
	size_t			s;
	unsigned char	*str1;
	unsigned char	*str2;

	s = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (len--)
	{
		if (str1[s] != str2[s])
			return ((str1[s] - str2[s]));
		s++;
	}
	return (0);
}
