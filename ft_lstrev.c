/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 14:27:23 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/11 15:02:28 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstrev(t_list **alst)
{
	t_list	*b;
	t_list	*current;
	t_list	*next;

	b = NULL;
	current = *alst;
	while (current)
	{
		ft_putendl("a");
		next = current->next;
		current->next = b;
		b = current;
		current = next;
	}
	alst = &b;
}
