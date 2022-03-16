/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:45:48 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/01 14:14:12 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			s;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	s = 0;
	while (s < len)
		ptr[s++] = c;
	return (str);
}
