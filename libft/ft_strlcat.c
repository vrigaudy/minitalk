/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:48:23 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/11/30 13:40:08 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	len_src;
	size_t	len_dst;

	s = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	while (len_dst + s < dstsize - 1 && src[s])
	{
		dst[len_dst + s] = src[s];
		s++;
	}
	dst[len_dst + s] = 0;
	return (len_src + len_dst);
}
