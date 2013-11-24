/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 01:39:06 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/24 02:58:35 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = malloc(ft_strlen((char*)s1) * sizeof(*s1));
	if (s2)
	{
		while (s1[i])
		{
			s2[i] = s1[i];
			i++;
		}
	}
	else
	{
		errno = ENOMEM;
		return (0);
	}
	return (s2);
}
