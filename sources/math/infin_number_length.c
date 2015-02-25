/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infin_number_length.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 01:04:01 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/02/26 01:31:13 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>

unsigned int		infin_number_length(const t_infin_number *number)
{
	unsigned int	length;

	length = number->length;
	while (length && number->value[length - 1] == 0)
		length--;
	return length;
}
