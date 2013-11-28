/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 02:09:58 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/28 04:44:01 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	begin;
	size_t	current;

	begin = 0;
	if (*s2 == 0)
	{
		return ((char*)s1);
	}
	while (s1[begin] && ft_strlen(s1) - begin >= ft_strlen(s2))
	{
		current = 0;
		while (s2[current] == s1[begin + current])
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
