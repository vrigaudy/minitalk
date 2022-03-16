/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:58:28 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/11/29 14:43:55 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	s;
	size_t	t;

	s = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[s] && s < len)
	{
		t = 0;
		if (haystack[s] == *needle)
		{
			while (haystack[s + t] == needle[t] && s + t < len)
			{
				t++;
				if (needle[t] == 0)
					return ((char *)&haystack[s]);
			}
		}
		s++;
	}
	return (0);
}
