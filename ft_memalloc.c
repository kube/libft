/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 03:56:30 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/28 04:15:59 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
void	*ft_memalloc(size_t size)
{
	void	*new;

	new = malloc(size);
	if (new)
	{
		/*ft_bzero(new, size);*/
	}
	return (new);
}
