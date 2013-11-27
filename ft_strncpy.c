/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 02:15:04 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 20:11:26 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	size_t			len1;
	size_t	len2;

	ft_putstr("strncpy ");
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen((char*)s2);
	while (i < n)
	{
		if (i < len2)
		{
			s1[i] = s2[i];
		}
		else
		{
			s1[i] = 0;
		}
		i++;
	}
	return (s1);
}
