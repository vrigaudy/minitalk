/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:35:54 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/01 15:34:08 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t				s;
	unsigned char		*temp_dst;
	const unsigned char	*temp_src;

	if (!dst && !src)
		return (dst);
	s = 0;
	temp_dst = (unsigned char *)dst;
	temp_src = (const unsigned char *)src;
	while (s < len)
	{
		temp_dst[s] = temp_src[s];
		s++;
	}
	return (dst);
}
