/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 04:44:28 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 04:26:44 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_getwordsnb(char const *s, char c)
{
	unsigned int	nb;
	size_t			i;

	i = 0;
	while (s[i])
	{
		while ((char)s[i] == c)
		{
			i++;
		}
		nb++;
		while(s[i] && (char)s[i] != c)
		{
			i++;
		}
	}
	return (nb - 1);
}

char		**ft_strsplit(char const *s, char c)
{
	char			**a;
	char			*t;
	size_t			i;
	unsigned int	k;
	
	i = 0;
	k = 0;
	a = (char**)malloc(ft_getwordsnb(s, c) * sizeof(char*));
	t = ft_strdup(s);
	while (t[i])
	{
		while ((char)s[i] == c)
		{
			t[i] = 0;
			i++;
		}
		a[k] = (char*)(t + i);
		k++;
		while(t[i] && (char)t[i] != c)
		{
			i++;
		}
	}
	return (a);
}
