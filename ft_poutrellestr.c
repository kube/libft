/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_poutrellestr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 16:47:31 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/28 04:21:59 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_poutrellestr(void *ptr, size_t size, int base)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char*)ptr;
	while (i < size)
	{
		ft_putnbrb(p[i], base);
		write(1, " ", 1);
		i++;
	}
}
