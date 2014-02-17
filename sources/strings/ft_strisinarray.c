/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisinarray.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 16:49:02 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/09 19:49:16 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

ssize_t	ft_strinarray(char **array, char *str)
{
	ssize_t	i;

	i = 0;
	while (array[i] && array[i][0])
	{
		if (strequ(array[i], str))
			return (i);
		i++;
	}
	return (0);
}
