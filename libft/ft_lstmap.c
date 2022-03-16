/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:05:42 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/03 11:05:50 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newelem;
	t_list	*newlist;

	if (!lst)
		return (0);
	newelem = ft_lstnew((*f)(lst->content));
	if (!newelem)
		ft_lstclear(&newlist, (*del));
	newlist = newelem;
	lst = lst->next;
	while (lst)
	{
		newelem = ft_lstnew((*f)(lst->content));
		if (!newelem)
			ft_lstclear(&newlist, (*del));
		ft_lstadd_back(&newlist, newelem);
		lst = lst->next;
	}
	return (newlist);
}
