/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 08:16:45 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 19:52:23 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	ft_putstr("strrchr ");
	i = 0;
	while (s[i] || s[i] == (char)c)
	{
		if (s[i] == (char)c)
		{
			return ((char*)(s + i));
		}
		i++;
	}
	return (NULL);
}
