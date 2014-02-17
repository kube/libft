/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 04:24:44 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/02/17 19:35:57 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const*s, char (*f)(char))
{
	char	*newstr;

	if (s && *f)
	{
		newstr = ft_strdup(s);
		ft_striter((char*)newstr, (void(*)(char*))f);
		return (newstr);
	}
	return (NULL);
}
