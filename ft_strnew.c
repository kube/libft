/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 04:07:01 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/29 11:27:38 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnew(size_t size)
{
	char	*newstr;

	if (size)
	{
		newstr = (char*)malloc(size);
		if (newstr)
		{
			ft_bzero(newstr, size);
			return (newstr);
		}
	}
	return (NULL);
}
