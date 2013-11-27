/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 02:09:58 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 23:13:37 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	begin;
	size_t	current;

	ft_putstr("strstr ");
	begin = 0;
	current = 0;
	if (*s2 == 0)
	{
		return ((char *)s1);
	}
	while (s1[begin])
	{
		if ((s2[current] == s1[begin + current]))
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
