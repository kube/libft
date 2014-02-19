/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_properties.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/19 02:18:59 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/02/19 02:57:38 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_math.h>

#ifdef USE_MATH
# include <math.h>
# define SQRT sqrt
#else
# define SQRT ft_sqrt
#endif

float		vect_dot(t_vector *a, t_vector *b)
{
	return (SQRT(a->x * b->x + a->y * b->y + a->z * b->z));
}

float		vect_norm(t_vector *a)
{
	return (SQRT(a->x * a->x + a->y * a->y + a->z * a->z));
}
