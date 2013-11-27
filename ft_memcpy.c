/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:28:46 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 19:50:26 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t			i;
	char			*c1;
	const char		*c2;

	ft_putstr("memcpy ");
	i = 0;
	c1 = s1;
	c2 = s2;
	while (i < n)
	{
		c1[i] = c2[i];
		i++;
	}
	return (s1);
}
