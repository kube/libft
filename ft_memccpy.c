/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:49:52 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 19:49:24 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	char			*c1;
	const char		*c2;

	ft_putstr("memccpy ");
	i = 0;
	c1 = s1;
	c2 = s2;
	while (i < n)
	{
		c1[i] = c2[i];
		if (c2[i] == c)
		{
			return (void *)&(c1[i + 1]);
		}
		i++;
	}
	return (0);
}
