/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 08:23:18 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/28 04:42:12 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char*)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char*)(s + i));
		}
		i--;
	}
	return (NULL);
}
