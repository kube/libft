/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 02:02:58 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 19:53:51 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strcpy(char *s1, const char *s2)
{
	unsigned int	i;
	size_t			len1;
	size_t			len2;

	ft_putstr("strcpy ");
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen((char*)s2);
	while (s2[i] && i < len2)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;
	return (s1);
}
