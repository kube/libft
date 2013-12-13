/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 14:27:23 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/12 02:30:50 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstrev(t_list **alst)
{
	t_list	*new;
	t_list	*old_next;
	t_list	*old_current;

	new = NULL;
	old_current = *alst;
	while (old_current)
	{
		old_next = old_current->next;
		old_current->next = new;
		new = old_current;
		old_current = old_next;
	}
	*alst = new;
}
