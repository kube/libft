/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:13:36 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/03/14 19:50:36 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_memory.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*buf;

	buf = NULL;
	if (len)
		buf = malloc(len);
	if (buf)
	{
		ft_memcpy(buf, src, len);
		ft_memcpy(dst, buf, len);
		free(buf);
	}
	return (dst);
}
