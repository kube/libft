/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 02:14:37 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/28 00:41:16 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	begin;
	size_t	current;

	ft_putstr("strnstrA ");
	begin = 0;
	if (*s2 == 0)
	{
		return ((char*)s1);
	}
	while (s1[begin] && ft_strlen(s1) - begin >= ft_strlen(s2))
	{
		current = 0;
		while (s2[current]
				&& current < n
				&& s2[current] == s1[begin + current])
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
