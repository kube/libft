/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 04:07:01 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/02/17 19:09:29 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strnew(size_t size)
{
	char	*newstr;

	if (size)
	{
		newstr = (char*)malloc((size + 1) * sizeof(char));
		if (newstr)
		{
			ft_bzero(newstr, size + 1);
			return (newstr);
		}
	}
	return (NULL);
}
