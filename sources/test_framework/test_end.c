/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_end.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 02:00:41 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/03/01 02:47:01 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_test_framework.h>
#include <stdio.h>

void		ft_test_end(void)
{
	if (testing_state.errors_count)
		printf("%s%d errors%s\n\n", TST_RED,
			testing_state.errors_count, TST_NRM);
	else
		printf("%sSuccess%s\n\n", TST_GRN, TST_NRM);
}
