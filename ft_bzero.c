/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:31:22 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/22 15:31:35 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*cache;

	i = 0;
	cache = (unsigned char*)b;
	while (i < (unsigned int)len)
	{
		if (cache[i])
			cache[i] = c;
		i++;
	}
	return (b);
}