/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 02:14:37 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/28 19:18:38 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	begin;
	size_t	current;
	
	ft_putstr("StrNstr ");
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
		ft_putstr(", ");
	}
	else
	{
		ft_putstr("s2 : null, ");
	}
	if (n)
	{
		ft_putstr("n : ");
		ft_putnbr((int)n);
	}
	begin = 0;
	current = 0;
	if (!*s2)
	{
		return ((char *)s1);
	}
	while (s1[begin] && n > begin)
	{
		if (s1[begin + current] == s2[current] && begin + current < n)
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
