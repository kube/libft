/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 02:05:17 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/28 01:48:01 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	n;

	ft_putstr("strlcat ");
	n = 0;
	i = 0;
	while (dst[i] && n < size)
	{
		n++;
		i++;
	}
	j = 0;
	if (!n)
	{
		return (n + ft_strlen(src));
	}
	while (src[j] && n < size)
	{
		dst[n] = src[j];
		n++;
		j++;
	}
	dst[n] = 0;
	return (n);
}

/*
**
**size_t	ft_strlcat(char *dst, const char *src, size_t size)
**{
**    char			*d;
**    char			*s;
**    char			**str;
**    unsigned int	n;
**    unsigned int	dst_len;
**
**    d = dst;
**    str = &d;
**    s = (char *) src;
**    n = size;
**    while (n != 0 && *d != '\0')
**    {
**        n--;
**        d++;
**    }
**    dst_len = d - dst;
**    n = size - dst_len;
**    if (n == 0)
**        return (dst_len + ft_strlen(s));
**    while (*s)
**    {
**        if (n != 1)
**        {
**            *d++ = *s;
**            n--;
**        }
**        s++;
**    }
**    *d = '\0';
**    return (dst_len + (s - src));
**}
*/
