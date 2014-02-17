/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 04:37:52 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/01 14:37:40 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	if (s && len && start + len <= ft_strlen(s))
	{
		newstr = ft_strnew(len);
		if (newstr)
			return (ft_strncpy(newstr, s + start, len));
	}
	return (NULL);
}
