/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 02:14:37 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/26 14:40:57 by cfeijoo          ###   ########.fr       */
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
		current = 0;
		while (s1[begin + current] == s2[current] && current < n)
		{
			current++;
		}
		if (!s2[current])
		{
			return ((char*)(s1 + begin));
		}
		begin++;
	}
	return (NULL);
}
