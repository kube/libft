/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 05:03:58 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/02/17 19:31:06 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>

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
