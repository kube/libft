/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 17:03:35 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/11 18:02:31 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

void	ft_putnbrb(long int n, unsigned int base)
{
	int		a;
	char	b[36] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (base <= 36 && base > 1)
	{
		if (n < 0)
			write(1, "-", 1);
		if (n / base)
			ft_putnbrb(ft_abs(n / base), base);
		a = ft_abs(n % base);
		write(1, b + a, 1);
	}
}
