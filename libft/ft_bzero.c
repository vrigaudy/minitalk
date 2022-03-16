/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:30:49 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/11/24 12:26:28 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t len)
{
	size_t			s;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	s = 0;
	while (s < len)
		ptr[s++] = 0;
	return (str);
}
