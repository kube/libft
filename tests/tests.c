/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 01:36:28 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/03/01 02:00:30 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_test_framework.h>
#include "tests.h"

int			main()
{
	ft_test_module("infin_number", test_infin_number);
	ft_test_module("math", test_math);
	ft_test_module("strings", test_strings);
	ft_test_end();
	return (0);
}