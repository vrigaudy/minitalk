/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:34:01 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/01 17:36:12 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	s;

	s = 0;
	while ((s1[s] || s2[s]) && s < len)
	{
		if (s1[s] != s2[s])
			return ((unsigned char)s1[s] - (unsigned char)s2[s]);
		s++;
	}
	return (0);
}
