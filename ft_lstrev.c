/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 14:27:23 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/11 14:51:11 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstrev(t_list **alst)
{
	t_list	*b;
	t_list	*current;
	t_list	*next;

	current = *alst;
	ft_putendl("a");
	while (current)
	{
		ft_putendl("b");
		next = current->next;
		ft_lstadd(&b, current);
		ft_putendl("c");
		current = next;
		ft_putendl("d");
	}
	ft_putendl("e");
	alst = &b;
}
