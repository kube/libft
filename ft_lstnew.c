/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 15:18:08 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/08 22:13:18 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlst;

				ft_putendl("+1a");
	newlst = (t_list*)malloc(sizeof(t_list));
				ft_putendl("+1b");
	if (content_size)
		newlst->content = ft_memdup(content, content_size);
				ft_putendl("+2");
	newlst->content_size = content_size;
	newlst->next = NULL;
	return (newlst);
}
