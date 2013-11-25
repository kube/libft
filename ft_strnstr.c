/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 02:14:37 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/25 21:49:23 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		begin;
	size_t		current;

	begin = 0;
	while (s1[begin])
	{
		ft_putstr("0\n");
		current = 0;
		while (s1[begin + current] == s2[current] && current < n)
		{
			ft_putstr("a\n");
			current++;
		}
		if (!s2[current])
		{
			ft_putstr("b\n");
			return ((char*)(s1 + begin));
		}
		begin++;
	}
	return (NULL);
}