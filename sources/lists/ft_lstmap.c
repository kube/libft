/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 16:37:01 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/01 19:29:27 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;

	if (lst && *f)
	{
		newlst = (*f)(lst);
		if (newlst && lst->next)
		{
			newlst->next = ft_lstmap(lst->next, f);
		}
		return (newlst);
	}
	return (NULL);
}
