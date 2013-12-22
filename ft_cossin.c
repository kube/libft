/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cossin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 17:15:48 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/22 17:20:31 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static unsigned int	ft_factorielle(int n)
{
	unsigned int	factorielle;

	factorielle = 1;
	while (n)
	{
		factorielle *= n;
		n--;
	}
	return (factorielle);
}

static float		ft_pow(float base, float ex)
{
	if (ex == 0)
		return 1;
	else if (ex < 0)
		return 1 / ft_pow(base, -ex);
	else if ((int)ex % 2 == 0)
	{
		float half_pow = ft_pow(base, ex/2);
		return half_pow * half_pow;
	}
	else
		return base * pow(base, ex - 1);
}

float				ft_cos(float x)
{ 
	int				i;
	float			cos;

	i = 0;
	cos = 0;
	while (i < 10)
	{
		cos = cos + ft_pow(-1, i) * ft_pow(x, 2 * i) / ft_factorielle(2 * i);
		i++;
	}
	return (cos);
}

float				ft_sin(float x)
{ 
	int				i;
	float			sin;

	i = 0;
	sin = 0;
	while (i < 10)
	{
		sin = sin + ft_pow(-1, i) * ft_pow(x, 2 * i) / ft_factorielle(2 * i);
		i++;
	}
	return (sin);
}