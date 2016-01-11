/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 01:36:28 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/03/14 19:50:24 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_test_framework.h>
#include "tests.h"

int main()
{
	TEST_MODULE(math);
	TEST_MODULE(infin_number);
	TEST_MODULE(strings);

	ft_test_end();
	return 0;
}
