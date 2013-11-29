/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 04:42:43 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/29 14:43:51 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
/*
**
**static int	ft_isspace(char	c)
**{
**    if (c == ' ' ||
**        c == '\n' ||
**        c == '\t' ||
**        c == '\v' ||
**        c == '\f' ||
**        c == '\r')
**    {
**        return (1);
**    }
**    return (0);
**}
**
*/
char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	char			*newstr;

	i = 0;
	while (s[i])
		i++;
	j = ft_strlen(s) - 1;
	while (!j)
		j--;
	newstr = ft_strsub(s, i, j - i);
	return ((char*)s);
}
