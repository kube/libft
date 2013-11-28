/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 02:09:58 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/28 18:16:10 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	begin;
	size_t	current;

	ft_pustr("Strstr ");
	if (s1)
	{
		ft_putstr("s1 : ");
		ft_putstr(s1);
		ft_putstr(", ");
	}
	else
	{
		ft_putstr("s1 : null, ");
	}
	if (s2)
	{
		ft_putstr("s2 : ");
		ft_putstr(s2);
	}
	else
	{
		ft_putstr("s2 : null");
	}
	begin = 0;
	current = 0;
	if (!*s2)
	{
		return ((char *)s1);
	}
	while (s1[begin])
	{
		if (s1[begin + current] == s2[current])
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
