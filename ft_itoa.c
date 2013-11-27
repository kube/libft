/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 04:46:36 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 06:59:57 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_getpower(int n, unsigned int base)
{
	unsigned int	power;

	power = 0;
	n = ft_abs(n);
	while (n)
	{
		n = n / base;
		power++;
	}
	return (power);
}

static void	ft_fillnbr(int n, char *str)
{
	if (n / 10)
	{
		ft_fillnbr(n / 10, str - 1);
	}
	*str = '0' + n % 10;
}

char		*ft_itoa(int n)
{
	char			*str;
	unsigned int	length;

	if (n == 0)
	{
		return ("0");
	}
	length = ft_getpower(n, 10) + (n < 0);
	str = (char*)malloc(length * sizeof(*str));
	if (n < 0)
	{
		str[0] = '-';
	}
	ft_fillnbr(ft_abs(n), str + length - 1);
	str[length] = 0;
	return (str);
}
