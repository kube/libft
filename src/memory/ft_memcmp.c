/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:48:59 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/03/14 20:09:15 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		c;

	while (n)
	{
		c = (int)(*((unsigned char*)s1) - *((unsigned char*)s2));
		s1 = (void*)((char*)s1 + 1);
		s2 = (void*)((char*)s2 + 1);
		if (c)
			return (c);
		n--;
	}
	return (0);
}
