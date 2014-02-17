/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 03:56:30 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/10 10:57:11 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
void	*ft_memalloc(size_t size)
{
	void	*new;

	new = malloc(size * sizeof(char));
	if (new)
		ft_bzero(new, size);
	return (new);
}
