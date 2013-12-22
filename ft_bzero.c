/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:31:22 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/22 15:39:11 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_bzero(void *s, size_t n)
{
	char	*cache;

	cache = s;
	while ((size_t)cache < (size_t)(cache + n))
	{
		if (cache)
			*cache = 0;
		cache++;
	}
}