/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 02:14:37 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 22:03:38 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
**char	*ft_strnstr(const char *s1, const char *s2, size_t n)
**{
**    size_t		begin;
**    size_t		current;
**
**    ft_putstr("strnstr ");
**    begin = 0;
**    while (s1[begin])
**    {
**        current = 0;
**        while (s1[begin + current] == s2[current] && current < n)
**        {
**            current++;
**        }
**        if (!s2[current])
**        {
**            return ((char*)(s1 + begin));
**        }
**        begin++;
**    }
**    return (NULL);
**}
*/

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*s2 == 0)
		return ((char *)s1);
	while (s1[i] && n > i)
	{
		if ((s2[j] == s1[i + j]) && i + j < n)
			++j;
		else
		{
			j = 0;
			++i;
		}
		if (s2[j] == '\0')
			return ((char *)s1 + i);
	}
	return (NULL);
}
