/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstqueueadd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 22:55:28 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/08 22:09:58 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstqueueadd(t_list **alst, t_list *new)
{
	t_list	*current;

	if (new && alst)
	{
		current = *alst;
		if (current)
		{

				ft_putendl("+0");
			while (current->next)
			{
				ft_putendl("+1");
				current = current->next;
			}
			ft_putendl("+2");
			current->next = new;
			ft_putendl("+3");
		}
		else
		{
			ft_putendl("+4");
			ft_lstadd(alst, new);
		}
	}
}
