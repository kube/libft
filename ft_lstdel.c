/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 16:27:46 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/04 23:55:58 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;

	if (alst)
	{
		current = *alst;
		while (current)
		{
			if (del)
				(*del)(current->content, current->content_size);
			free(current);
			current = current->next;
		}
	}
	*alst = NULL;
}
