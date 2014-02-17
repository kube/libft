/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 15:37:23 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/02/17 19:23:06 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

void	*ft_memdup(const void *oldmem, size_t size)
{
	void	*newmem;

	if (oldmem)
	{
		newmem = malloc(size);
		if (newmem)
			ft_memmove(newmem, oldmem, size);
		return (newmem);
	}
	return (NULL);
}
