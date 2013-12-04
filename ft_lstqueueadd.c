/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstqueueadd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 22:55:28 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/04 23:01:25 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstqueueadd(t_list **alst, t_list *new)
{
	t_list	*current;

	if (new && alst)
	{
		current = *alst;
		while (current->next)
			current = current->next;
		current->next = new;
	}
}
