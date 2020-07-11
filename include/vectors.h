/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bts <bts@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 23:21:59 by bts               #+#    #+#             */
/*   Updated: 2020/05/16 22:51:05 by bts              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORS_H
# define VECTORS_H

# include <math.h>

typedef struct	s_vec3f
{
	float		x;
	float		y;
	float		z;
}				t_vec3f;

typedef struct	s_vec2f
{
	float		x;
	float		y;
}				t_vec2f;

float			vec_dot(t_vec3f vec_a, t_vec3f vec_b);

float			vec_length(t_vec3f vec);

t_vec3f		vec_sum(t_vec3f vec_a, t_vec3f vec_b);

t_vec3f		vec_sub(t_vec3f vec_a, t_vec3f vec_b);

t_vec3f		vec_sub_num(t_vec3f vec_a, float num);

t_vec3f		vec_mult(t_vec3f vec_a, t_vec3f vec_b);

t_vec3f		vec_mult_num(t_vec3f vec, float num);

t_vec3f		vec_div_num(t_vec3f vec, float num);

t_vec3f		vec_normalize(t_vec3f vec_a);

t_vec3f		vec_dir(t_vec3f vec_a, t_vec3f vec_b);

t_vec3f		vec_rotate(t_vec3f vec, t_vec3f angles);

#endif
