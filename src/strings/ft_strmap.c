/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 04:24:44 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/02/17 21:21:37 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_strings.h>

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*newstr;
	unsigned int	i;

	if (s && *f)
	{
		newstr = ft_strdup(s);
		i = 0;
		while (i < ft_strlen(s))
		{
			newstr[i] = f(s[i]);
			i++;
		}
		return (newstr);
	}
	return (0);
}
