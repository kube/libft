/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/17 19:39:24 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/02/19 02:41:09 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H
# define LIMITED_DEV_COS_SIN 6
# define FT_PI	3.141592654

typedef struct			s_point
{
	float				x;
	float				y;
	float				z;
}						t_point;

typedef struct			s_vector
{
	float				x;
	float				y;
	float				z;
}						t_vector;

float	ft_cos(float x);
float	ft_sin(float x);
float	ft_invsqrt (float x);
float	ft_sqrt(float x);

void	vect_rot_z(t_vector *v, float angle);
void	vect_rot_x(t_vector *v, float angle);
void	vect_rot_y(t_vector *v, float angle);
void	vect_scale(t_vector *v, float coeff);

float	vect_dot(t_vector *a, t_vector *b);
float	vect_norm(t_vector *a);

#endif
