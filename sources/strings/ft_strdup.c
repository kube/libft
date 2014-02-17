/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 01:39:06 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/02/17 19:09:36 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	if (!s1)
		return (0);
	s2 = (char*)malloc(ft_strlen((char*)s1) * sizeof(*s1));
	if (s2)
	{
		while (s1[i])
		{
			s2[i] = s1[i];
			i++;
		}
	}
	else
	{
		errno = ENOMEM;
		return (0);
	}
	return (s2);
}
