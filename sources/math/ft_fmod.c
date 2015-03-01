/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 03:09:38 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/03/01 17:55:33 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>

static double	absf(const double x)
{
	return (x < 0 ? -x : x);
}

static double	get_highest_divider(const double lhs, double divider)
{
	while (lhs > divider)
		divider *= 10;
	return (divider / 10);
}

static double	modulo_highest_divider(const double lhs, double divider)
{
	double		result;
	double		highest_divider;

	result = lhs;
	highest_divider = get_highest_divider(lhs, divider);
	while (result >= 0)
		result -= highest_divider;
	result += highest_divider;
	return (result);
}

/*
**	ft_fmod is not mathematically exact, and could have invalid results for
**	particular cases because of the test to check
**	the cast from float to int result
**/
double			ft_fmod(const double lhs, double rhs)
{
	double		result;

	rhs = absf(rhs);
	result = lhs - rhs * (int)(lhs / rhs);
	if (absf(result) < rhs)
		return (result);
	result = absf(lhs);
	while (result >= rhs)
		result = modulo_highest_divider(result, rhs);
	return (lhs < 0 ? -result : result);
}
