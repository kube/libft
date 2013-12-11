/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 14:27:23 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/11 14:33:05 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstrev(t_list **alst)
{
	t_list	*b;
	t_list	*current;

	current = *alst;
	while (current)
	{
		ft_lstadd(&b, current);
		current = current->next;
	}
	alst = &b;
}
