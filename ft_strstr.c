/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 02:09:58 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 20:29:07 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		begin;
	size_t		current;

	ft_putstr("strstr ");
	begin = 0;
	while (s1[begin])
	{
		current = 0;
		while (s1[begin + current] == s2[current])
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
