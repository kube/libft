/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfreeto.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 23:28:23 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/02/17 20:03:12 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

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
