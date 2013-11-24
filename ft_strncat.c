/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 08:08:06 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/24 03:02:07 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen((char*)s2);
	if (n > len2)
	{
		ft_memmove(s1 + len1, s2, len2);
	}
	else
	{
		ft_memmove(s1 + len1, s2, n);
	}
	s1[len1 + len2] = 0;
	return (s1);
}
