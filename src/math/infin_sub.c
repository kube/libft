/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infin_sub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 00:07:06 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/02/27 01:50:50 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_math.h>

static int				get_result_sign(const t_infin_number *a,
							const t_infin_number *b)
{
	int					result_sign;

	result_sign = 1;
	if ((a->sign == 1 && b->sign == 1 && infin_number_gt(b, a)) ||
		(a->sign == -1 && b->sign == -1 && infin_number_gt(a, b)))
		result_sign = -1;
	else if (a->sign == -1 && b->sign == 1)
		result_sign = -1;
	return (result_sign);
}

static void				operate_sub(t_infin_number *number,
							const t_infin_number *a, const t_infin_number *b)
{
	unsigned int		i;
	char				carry;

	number->value = (char*)malloc(number->length * sizeof(char));
	i = 0;
	carry = 0;
	while (i < number->length)
	{
		number->value[i] = 0;
		if (i < a->length)
			number->value[i] = a->value[i] * a->sign * number->sign;
		if (i < b->length)
			number->value[i] -= b->value[i] * b->sign * number->sign;
		if (carry)
		{
			number->value[i] += carry;
			carry = 0;
		}
		if (number->value[i] >= number->base || number->value[i] < 0)
		{
			carry = number->value[i] / number->value[i];
			number->value[i] -= number->base * carry;
		}
		i++;
	}
}

t_infin_number			*infin_sub(const t_infin_number *a,
							const t_infin_number *b)
{
	t_infin_number		*number;

	if (a->base != b->base)
		return (NULL);
	number = (t_infin_number*)malloc(sizeof(t_infin_number));
	number->base = a->base;
	number->length = a->length > b->length ? a->length + 1 : b->length + 1;
	number->sign = get_result_sign(a, b);
	operate_sub(number, a, b);
	number->length = infin_number_length(number);
	return (number);
}
