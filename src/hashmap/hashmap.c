/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/19 23:40:35 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/02/20 00:36:30 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_hashmap.h>
#include <ft_memory.h>

t_hashmap		*hashmap_new(size_t size)
{
	t_hashmap	*hashmap;

	hashmap = (void*)ft_memalloc(sizeof(t_hashmap));
	hashmap->size = size;
	hashmap->vars = (void*)ft_memalloc(size * sizeof(t_hashmap_var));
	return hashmap;
}
