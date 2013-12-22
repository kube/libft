/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cossin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 17:15:48 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/22 18:09:47 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static double			ft_factorielle(double n)
{
	double				factorielle;

	factorielle = 1;
	while (n)
	{
		factorielle *= n;
		n--;
	}
	return (factorielle);
}

static double			ft_pow(double base, double ex)
{
	double				half_pow;

	if (ex == 0)
		return 1;
	else if (ex < 0)
		return 1 / ft_pow(base, -ex);
	else if ((unsigned long int)ex % 2 == 0)
	{
		half_pow = ft_pow(base, ex / 2);
		return (half_pow * half_pow);
	}
	else
		return (base * ft_pow(base, ex - 1));
}

float					ft_cos(float x)
{
	int					i;
	float				cos;

	while (x > PI * 2)
		x -= PI * 2;
	i = 1;
	cos = 1;
	while (i < 10)
	{
		cos = cos + ft_pow(-1, i) * ft_pow(x, 2 * i) / ft_factorielle(2 * i);
		i++;
	}
	return (cos);
}

float					ft_sin(float x)
{
	int					i;
	float				sin;

	while (x > PI * 2)
		x -= PI * 2;
	i = 0;
	sin = 0;
	while (i < 10)
	{
		sin = sin + ft_pow(-1, i) * ft_pow(x, 2 * i) / ft_factorielle(2 * i);
		i++;
	}
	return (sin);
}