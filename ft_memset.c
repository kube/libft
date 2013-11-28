/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:44:18 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/28 04:00:12 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*cache;

	i = 0;
	cache = (unsigned char*)b;
	while (i < (unsigned int)len)
	{
		cache[i] = c;
		i++;
	}
	return (b);
}
