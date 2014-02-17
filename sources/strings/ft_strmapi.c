/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 04:30:09 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/30 23:16:28 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;

	if (s && *f)
	{
		newstr = ft_strdup(s);
		ft_striteri((char*)s, (void(*)(unsigned int, char*))f);
		return (newstr);
	}
	return (NULL);
}
