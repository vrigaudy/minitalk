/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:17:43 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/11/26 21:53:49 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	c = (unsigned char) c;
	last = 0;
	while (*str)
	{
		if (*str == c)
			last = (char *)str;
		str++;
	}
	if (c == 0)
		return ((char *)str);
	return (last);
}
