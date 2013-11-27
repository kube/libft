/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 04:46:36 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/27 05:58:05 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_getpower(int n, unsigned int base)
{
	unsigned int	power;

	power = 0;
	while (n)
	{
		n = n / base;
		power++;
	}
	return (power);
}

static char	*ft_fillnbr(int n, char *str)
{
	char	*a;

	if (n / 10)
	{
		a = ft_fillnbr(n / 10, str + 1);
	}
	*a = '0' + n % 10;
	return (str);
}

char		*ft_itoa(int n)
{
	char			*a;
	char			*str;
	unsigned int	length;

	length = 0;
	length = ft_getpower(n, 10);
	if (n < 0)
	{
		length++;
	}
	str = (char*)malloc(length * sizeof(*str));
	if (n < 0)
	{
		str[0] = '-';
	}
	a = ft_fillnbr(ft_abs(n), str + 1);
	return (str);
}
