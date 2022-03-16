/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:09:57 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/01 13:29:29 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	t;

	t = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = 0;
	cpy = (char *)malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (0);
	if (start < ft_strlen(s))
	{
		while (s[start + t] && t < len)
		{
			cpy[t] = s[start + t];
			t++;
		}
	}
	cpy[t] = 0;
	return (cpy);
}
