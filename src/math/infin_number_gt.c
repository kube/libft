/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infin_number_gt.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 00:18:16 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/03/01 00:23:01 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>

int				infin_number_abs_gt(const t_infin_number *a,
					const t_infin_number *b)
{
	int			i;

	if (a->length > b->length)
		return (1);
	else if (a->length < b->length)
		return (0);
	i = a->length - 1;
	while (i >= 0)
	{
		if (b->value[i] > a->value[i])
			return (0);
		else if (b->value[i] < a->value[i])
			return (1);
		i--;
	}
	return (0);
}

int				infin_number_gt(const t_infin_number *a,
					const t_infin_number *b)
{
	if (a->length || b->length)
	{
		if (a->sign == 1 && b->sign == -1)
			return (1);
		else if (a->sign == -1 && b->sign == 1)
			return (0);
	}
	return (infin_number_abs_gt(a, b));
}
