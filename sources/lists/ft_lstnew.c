/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 15:18:08 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/09 00:59:26 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlst;

	newlst = (t_list*)malloc(sizeof(t_list));
	if (content_size)
		newlst->content = ft_memdup(content, content_size);
	newlst->content_size = content_size;
	newlst->next = NULL;
	return (newlst);
}
