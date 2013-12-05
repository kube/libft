/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 15:18:08 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/05 15:00:51 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlst;

		ft_putstr("   *1\n");
		newlst = (t_list*)malloc(sizeof(t_list));
		ft_putstr("   *2\n");
		ft_putnbr(content_size);
		if (content_size)
			newlst->content = ft_memdup(content, content_size);
		ft_putstr("   *3\n");
		newlst->content_size = content_size;
		ft_putstr("   *4\n");
		newlst->next = NULL;
		ft_putstr("   *5\n");
	return (newlst);
}
