/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 04:44:28 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/28 19:05:47 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_getwordsnb(char const *s, char c)
{
	unsigned int	nb;
	size_t			i;

	i = 0;
	nb = 0;
	while (s[i])
	{
		while ((char)s[i] == c)
			i++;
		if(s[i] && (char)s[i] != c)
			nb++;
		while(s[i] && (char)s[i] != c)
			i++;
	}
	return (nb);
}

char		**ft_strsplit(char const *s, char c)
{
	char			**splited;
	char			*t;
	size_t			i;
	unsigned int	k;
	
	i = 0;
	k = 0;
	splited = (char**)malloc((ft_getwordsnb(s, c) + 1) * sizeof(char*));
	t = ft_strdup(s);
	while (t[i])
	{
		while ((char)t[i] == c)
		{
			t[i] = 0;
			i++;
		}
		if (t[i] && (char)t[i] != c)
		{
			splited[k] = (char*)(t + i);
			k++;
		}
		while(t[i] && (char)t[i] != c)
			i++;
	}
	splited[k] = 0;
	return (splited);
}
