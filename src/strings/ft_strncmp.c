/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 02:20:16 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/03/14 20:37:38 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((*s1 == '\0' && *s2 == '\0') || n == 0)
		return (0);
	else if (*s1 == *s2)
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}
