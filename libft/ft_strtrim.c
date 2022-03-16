/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:39:49 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/01 13:32:11 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	len;
	char	*dst;

	if (!s1 || !set)
		return (0);
	s = 0;
	len = ft_strlen(s1);
	while (s < len && ft_strchr(set, s1[s]))
		s++;
	while (s < len && ft_strchr(set, s1[len]))
		len--;
	if (len == 0)
		dst = ft_substr(s1, 0, 0);
	else
		dst = ft_substr(s1, s, len - s + 1);
	if (!dst)
		return (0);
	return (dst);
}
