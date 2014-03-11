/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kube <kube@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/10 02:14:08 by kube              #+#    #+#             */
/*   Updated: 2014/03/11 00:20:46 by kube             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>

t_vector		*vector_add(t_vector *a, t_vector *b, float coeff)
{
	a->x += b->x * coeff;
	a->y += b->y * coeff;
	a->z += b->z * coeff;
	return (a);
}
