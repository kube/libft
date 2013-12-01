/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 16:22:00 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/01 16:23:12 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static long int	ft_abs(long int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

void		ft_putlnbr(long int n)
{
	char	a;

	if (n < 0)
		write(1, "-", 1);
	if (n / 10)
		ft_putlnbr(ft_abs(n / 10));
	a = '0' + ft_abs(n % 10);
	write(1, &a, 1);
}
