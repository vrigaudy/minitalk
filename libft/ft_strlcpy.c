/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:21:11 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/01 17:37:30 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	len;

	s = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (s < dstsize - 1 && src[s])
	{
		dst[s] = src[s];
		s++;
	}
	dst[s] = 0;
	return (len);
}
