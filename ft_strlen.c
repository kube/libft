/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 01:34:43 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 19:55:31 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen (const char *s)
{
	size_t	length;

	ft_putstr("strlen ");
	length = 0;
	while (s[length])
	{
		length++;		
	}
	return (length);
}	
