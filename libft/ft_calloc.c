/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:35:42 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/11/26 16:39:28 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	size_t	total;

	total = size * count;
	dst = malloc(total);
	if (!dst)
		return (0);
	ft_bzero((void *)dst, total);
	return ((void *)dst);
}
