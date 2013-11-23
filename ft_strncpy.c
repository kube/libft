/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 02:15:04 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/23 07:33:30 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strncpy(char *s1, const char *s2, size_t n)
{
	int	i;
	int	len1;
	int	len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while (s2[i] && i < n)
	{
		if (i < len2)
		{
			s1[i] = s2[i];
		}
		else
		{
			s1[i] = 0;
		}
		i++;
	}
	s1[i] = 0;
	return (s1);
}
