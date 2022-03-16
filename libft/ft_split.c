/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:17:37 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/02 10:36:38 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			count++;
		i++;
	}
	return (count);
}

static int	ft_lettercount(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_substr_split(const char *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	cpy = malloc(sizeof(char) * len + 1);
	if (!cpy)
	{
		free(cpy);
		return (0);
	}
	while (i < len)
	{
		cpy[i] = s[start];
		start++;
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	if (!s)
		return (0);
	tab = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!tab)
	{
		free(tab);
		return (0);
	}
	while (ft_wordcount(s, c))
	{
		while (*s && *s == c)
			s++;
		if (*s != c)
			tab[i++] = ft_substr_split(s, 0, ft_lettercount(s, c));
		while (*s && *s != c)
			s++;
	}
	tab[i] = 0;
	return (tab);
}
