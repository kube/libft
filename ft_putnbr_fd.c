/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 05:03:58 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/01 15:05:27 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

void		ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n < 0)
		write(fd, "-", 1);
	if (n / 10)
		ft_putnbr_fd(ft_abs(n / 10), fd);
	a = '0' + ft_abs(n % 10);
	write(fd, &a, 1);
}
