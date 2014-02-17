/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cossin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 17:15:48 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/01/05 20:20:21 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static float			ft_factorielle(float n)
{
	float				factorielle;

	factorielle = 1;
	while (n)
	{
		factorielle *= n;
		n--;
	}
	return (factorielle);
}

static float			ft_pow(float base, float ex)
{
	float				half_pow;

	if (ex == 0)
		return 1;
	else if (ex < 0)
		return 1 / ft_pow(base, -ex);
	else if ((unsigned long)ex % 2 == 0)
	{
		half_pow = ft_pow(base, ex / 2);
		return (half_pow * half_pow);
	}
	else
		return (base * ft_pow(base, ex - 1));
}

float					ft_cos(float x)
{
	float				cos = 1;
	int					i;
	int					sign;

	while (x > PI)
		x -= PI * 2;
	while (x < -PI)
		x += PI * 2;
	i = 1;
	cos = 1;
	sign = -1;
	while (i < LIMITED_DEV_COS_SIN)
	{
		cos = cos + sign * ft_pow(x, 2 * i) / ft_factorielle(2 * i);
		sign = -sign;
		i++;
	}
	return (cos);
}

float					ft_sin(float x)
{
	float		sin = 0;
	int			i;
	int			sign;

	while (x > PI)
		x -= PI * 2;
	while (x < -PI)
		x += PI * 2;
	i = 1;
	sin = x;
	sign = -1;
	while (i < LIMITED_DEV_COS_SIN)
	{
		sin = sin + sign * ft_pow(x, 2 * i + 1) / ft_factorielle(2 * i + 1);
		sign = -sign;
		i++;
	}
	return (sin);
}