/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 04:40:04 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/29 14:06:05 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	length;
	char			*new;

	length = ft_strlen(s1) + ft_strlen(s2);
	new = (char*)malloc(length * sizeof(*new));

	ft_strcpy(new, s1);
	ft_strcpy(new + ft_strlen(s1), s2);
	return ((char*)new);
}
