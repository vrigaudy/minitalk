/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:08:41 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/01 15:29:59 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*temp_dst;
	const unsigned char	*temp_src;

	temp_dst = (unsigned char *)dst;
	temp_src = (const unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (temp_dst > temp_src)
	{
		while (len)
		{
			len--;
			temp_dst[len] = temp_src[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
