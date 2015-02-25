/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infin_number_eq.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 00:18:16 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/02/27 01:53:09 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>

int						infin_number_eq(const t_infin_number *a, const t_infin_number *b)
{
	int					i;

	if (a->length > b->length)
		return (0);
	else if (b->length > a->length)
		return (0);
	i = a->length;
	while (i >= 0)
	{
		if (b->value[i] != a->value[i])
			return (0);
		i--;
	}
	if (a->sign != b->sign && a->length)
		return (0);
	return (1);
}
