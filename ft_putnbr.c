/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 02:46:45 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/22 19:15:03 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_abs(int n)
{
	return (1 + (n < 0) * -2) * n;
}

void	ft_putnbr(int n)
{
	char	a;

	if (n < 0)
	{
		write(1, "-", 1);
	}
	if (n / 10)
	{
		ft_putnbr(abs(n / 10));
	}
	a = '0' + abs(n % 10);
	write(1, &a, 1);
}

void	ft_putnbrit(int n)
{
	char	a;

	if (n < 0)
	{
		write(1, "-", 1);
	}
	while (n != 0)
	{
		a = abs(n % 10) + '0';
		write(1, &a, 1);
		n = abs(n / 10);
	}
}

/*
 *int		main(int argc, char **argv)
 *{
 *    int	n;
 *    int	a;
 *
 *    n = -1;
 *    (void)argc;
 *    a = atoi(argv[1]);//-2147483648;
 *    [>while (++n < 1000000)<]
 *    [>{<]
 *        ft_putnbrit(a);
 *        a++;
 *    [>}<]
 *    return (0);
 *}
 */
