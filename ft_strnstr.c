/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 02:14:37 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 23:13:38 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	begin;
	size_t	current;

	ft_putstr("strnstr ");
	begin = 0;
	current = 0;
	if (*s2 == 0)
	{
		return ((char *)s1);
	}
	while (s1[begin] && n > begin)
	{
		if ((s2[current] == s1[begin + current]) && begin + current < n)
		{
			current++;
		}
		else
		{
			current = 0;
			begin++;
		}
		if (!s2[current])
		{
			return ((char *)s1 + begin);
		}
	}
	return (NULL);
}
