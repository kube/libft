/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 08:08:06 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/28 04:41:15 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len1;

	i = 0;
	len1 = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[len1 + i] = s2[i];
		i++;
	}
	s1[len1 + i] = 0;
	return (s1);
}
