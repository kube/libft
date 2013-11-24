/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 08:23:18 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/24 03:06:55 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen((char*)s);
	while (*s)
	{
		if (*s == c)
		{
			return ((char*)s);
		}
		s--;
	}
	return (NULL);
}
