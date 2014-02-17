/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfreeto.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 23:28:23 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/08 23:31:14 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstfreeto(t_list **alst, t_list *to)
{
	t_list	*last;
	t_list	*current;

	current = *alst;
	if (alst && to)
	{
		while (current && current != to)
		{
			last = current;
			current = current->next;
			free(last);
		}
	}
}
