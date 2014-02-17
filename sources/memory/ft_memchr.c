/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:41:46 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/01/05 20:38:30 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*t;

	i = 0;
	t = s;
	while (i < n)
	{
		if (t[i] == (char)c)
		{
			return (void *)(t + i);
		}
		i++;
	}
	return (0);
}
